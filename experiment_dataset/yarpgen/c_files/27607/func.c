/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27607
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) (-(1009006915)));
                    var_18 = ((/* implicit */_Bool) (((((+((-(((/* implicit */int) (_Bool)1)))))) + (2147483647))) << ((((((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (0ULL)))) : (((/* implicit */int) (short)-19434)))) + (19450))) - (16)))));
                }
            } 
        } 
    } 
    var_19 = var_1;
    var_20 ^= ((/* implicit */long long int) (~(((/* implicit */int) (short)8711))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_21 &= ((/* implicit */long long int) 4294967293U);
        arr_10 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3] [17] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8691))) : (var_4)));
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        arr_13 [i_4] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-1583930064)))) ? (((((/* implicit */_Bool) min((2886907201876988293LL), (3LL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_4] [19LL] [i_4] [i_4])) : (min((var_14), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2967097381938661726ULL), (((/* implicit */unsigned long long int) arr_5 [i_4] [10LL] [i_4]))))) ? (((/* implicit */int) (short)-24953)) : (((/* implicit */int) arr_12 [i_4])))))));
        var_22 &= -458524078535910567LL;
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) & (((((/* implicit */int) var_13)) + (((/* implicit */int) (_Bool)1))))));
            var_24 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [22LL] [20LL] [i_5])) : (((/* implicit */int) (short)-8706))))));
            arr_18 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4985788017160152502LL)) ? (arr_16 [i_5]) : (arr_16 [i_5])));
            var_25 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
        }
        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            arr_22 [(_Bool)1] [0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6 - 2] [i_4])) ? (((/* implicit */int) arr_14 [i_4] [i_4] [i_4])) : (((/* implicit */int) (signed char)114))))) && (((/* implicit */_Bool) (unsigned char)66)))) ? ((+(max((((/* implicit */unsigned int) (short)17663)), (arr_0 [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_4] [i_6 + 1] [i_6 - 2])) ? (((((/* implicit */int) (unsigned short)985)) / (((/* implicit */int) arr_14 [i_4] [i_4] [i_6 - 2])))) : (((((/* implicit */_Bool) -1690814044)) ? (((/* implicit */int) arr_14 [i_4] [i_4] [8U])) : (((/* implicit */int) arr_14 [i_4] [i_6] [i_6]))))));
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
        {
            arr_26 [i_4] = ((/* implicit */unsigned int) arr_16 [i_7]);
            var_27 |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_21 [15] [i_7]))))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
        {
            arr_30 [i_4] [15] = ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_4])) * (((/* implicit */int) var_10)))) / (((/* implicit */int) arr_20 [i_8]))));
            arr_31 [i_4] [(short)15] [(short)15] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 2; i_10 < 20; i_10 += 1) 
                {
                    {
                        var_28 = (+(((/* implicit */int) arr_25 [i_10 + 2] [i_10] [i_9])));
                        var_29 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_4] [i_8] [i_10 + 1])) && (((/* implicit */_Bool) (short)-24919))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-18412))));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (3676149763U)))) ? (arr_40 [i_4] [i_8] [16ULL] [i_12] [i_11] [(_Bool)1]) : (((/* implicit */unsigned long long int) (-(4985788017160152515LL)))))))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_4] [i_8] [i_8])) * (((/* implicit */int) arr_23 [i_4] [i_8] [i_4]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                for (long long int i_14 = 3; i_14 < 22; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) var_15);
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) var_10))));
                        }
                    } 
                } 
            } 
        }
    }
}
