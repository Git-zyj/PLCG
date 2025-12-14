/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41795
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
    var_16 = var_6;
    var_17 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0 + 1] [i_0 + 1] |= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) max((-4LL), (((/* implicit */long long int) var_14))))) || (((/* implicit */_Bool) 6896362873715526162LL)))));
        var_18 = ((/* implicit */short) var_9);
        var_19 = ((/* implicit */int) max((var_19), (((((int) arr_0 [i_0 - 2])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) && (var_8))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_20 = ((/* implicit */long long int) arr_2 [11LL]);
            var_21 ^= ((/* implicit */short) ((unsigned long long int) ((long long int) var_4)));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_3] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? ((~(arr_10 [i_0] [i_0] [i_0] [i_3]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)1)), (4234665656U)))))) << (((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1]))) - (994456170175411136LL)))));
                        arr_14 [2] [i_1] [5U] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (arr_8 [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((long long int) min((arr_8 [i_1 + 3] [i_0 - 2]), (arr_8 [i_1 + 3] [i_0 - 1]))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_4 = 3; i_4 < 10; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) arr_0 [i_0]);
                            arr_22 [i_4] [i_0] [i_1 + 2] [(_Bool)1] [i_4] [(signed char)6] = ((/* implicit */signed char) ((max((-1684546857), (((/* implicit */int) (unsigned char)0)))) <= (max((((/* implicit */int) (!(((/* implicit */_Bool) -6896362873715526146LL))))), (((var_8) ? (((/* implicit */int) arr_5 [(unsigned char)6] [i_1 + 3] [11LL])) : (((/* implicit */int) (unsigned char)236))))))));
                            var_25 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0 - 2] [i_1 - 1] [i_1 + 1] [i_0] [i_4 + 2]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_6))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 3; i_8 < 13; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        {
                            arr_33 [i_0] [5LL] [i_8] [i_0 - 2] [i_0] [8LL] = ((/* implicit */unsigned char) ((int) var_0));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_1))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                arr_36 [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((long long int) arr_19 [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) (short)-8498))))), ((-(arr_28 [i_0] [i_7] [i_11] [i_0 + 1] [i_0] [i_7 - 1])))))) : (max((arr_29 [i_7]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29271))) : (var_13))))))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) 7162663212508306111LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))) : (2128077416762375771LL))))));
                arr_37 [i_0 + 1] [i_11] [i_11] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_20 [i_0] [i_7] [i_11] [i_7] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-10861))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((-6896362873715526148LL) + (6896362873715526148LL)))))) : (arr_0 [i_0 - 2]))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    for (unsigned char i_13 = 4; i_13 < 12; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_0))));
                            var_30 |= ((/* implicit */int) var_0);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_11 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_11]))) ^ ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_16 [i_11] [i_7] [i_0] [i_0])) : (((/* implicit */int) var_1))))))));
            }
            for (signed char i_14 = 2; i_14 < 11; i_14 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_7 - 2])) ? (((/* implicit */int) (signed char)90)) : ((+(((/* implicit */int) var_2)))))))));
                    arr_47 [i_0] [i_15] [i_0] = var_10;
                }
                /* vectorizable */
                for (long long int i_16 = 2; i_16 < 13; i_16 += 1) 
                {
                    var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6361291430832110281LL))))) % (((/* implicit */int) (unsigned char)255))));
                    arr_51 [i_0] [i_0] [i_0 + 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((long long int) -6LL))));
                    var_34 += ((-15LL) == (((/* implicit */long long int) (+(((/* implicit */int) arr_38 [(_Bool)1] [i_7] [i_0] [i_7] [2LL] [i_16 - 1]))))));
                }
                var_35 ^= ((/* implicit */_Bool) arr_18 [i_14 + 3] [i_14 + 2] [i_14 - 1] [i_14 + 3] [i_14 + 1]);
                var_36 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)36466)) <= (((/* implicit */int) (unsigned char)1))));
            }
        }
    }
}
