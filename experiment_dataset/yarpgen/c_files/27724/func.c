/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27724
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [(signed char)17] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)11))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_19 ^= ((/* implicit */unsigned long long int) ((arr_2 [i_0]) <= (((/* implicit */long long int) var_1))));
        var_20 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */int) ((((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) << (((12401241719671108904ULL) - (12401241719671108904ULL))))) >= ((-(var_9)))));
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 24; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_3 + 3])) || (((/* implicit */_Bool) arr_10 [i_1] [i_1]))))), (((((/* implicit */_Bool) 12401241719671108907ULL)) ? (((/* implicit */long long int) -1556305725)) : (arr_10 [i_1] [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_16 [i_4 + 1] [i_5] [i_3] [i_4] [i_5]), (((/* implicit */unsigned short) arr_14 [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_1] [i_2] [i_3] [i_5])), (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-19)))))))));
                                var_23 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((var_15) != (((/* implicit */long long int) var_9))))) == (((/* implicit */int) ((-5693318391941601336LL) >= (((/* implicit */long long int) arr_18 [i_5] [i_3 + 3] [i_2] [i_1]))))))) ? (min((288230374004228096LL), (((/* implicit */long long int) arr_6 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763)))))) ? (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) : (arr_5 [i_1] [i_2]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-36))))))))));
                                var_24 = ((/* implicit */unsigned int) (signed char)8);
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */unsigned long long int) arr_13 [i_1]);
                }
            } 
        } 
    }
    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) /* same iter space */
    {
        var_26 = (~((-2147483647 - 1)));
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 21; i_8 += 3) 
            {
                for (int i_9 = 3; i_9 < 19; i_9 += 1) 
                {
                    {
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (-(arr_15 [i_6]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) 834971561))));
                        /* LoopSeq 2 */
                        for (short i_10 = 2; i_10 < 19; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */short) arr_23 [i_6]);
                            arr_34 [i_6 - 1] [i_7] [i_10] [i_9] [i_10 - 1] [i_9 + 1] = ((/* implicit */unsigned long long int) arr_19 [i_6] [i_7] [i_6] [i_8] [i_9 - 3] [i_9] [i_10 + 2]);
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_30 = (~(((/* implicit */int) arr_12 [i_7] [i_8 + 1] [i_8 - 2] [i_9])));
                            var_31 = ((/* implicit */long long int) arr_17 [(short)15] [(short)15] [i_8 - 1] [i_7] [i_7] [i_6 + 1]);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_12 = 1; i_12 < 21; i_12 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_37 [i_12] [i_12 - 1] [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) var_14)) : (36028797018963960LL)))));
        var_33 = ((/* implicit */long long int) -2147483644);
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 21; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                {
                    arr_46 [i_12] [i_13] [i_13] [i_14] = ((/* implicit */int) ((((long long int) arr_39 [i_13])) ^ ((~(-8074592365976438359LL)))));
                    arr_47 [i_12] = ((/* implicit */int) ((((/* implicit */int) arr_11 [i_12 + 1] [i_12 - 1])) != (((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) var_15)))))));
                    var_34 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */unsigned long long int) arr_37 [i_12] [i_12] [i_13] [i_14] [i_14])) : (arr_9 [i_13]))));
                    var_35 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_12 + 1]))) : (7ULL));
                    var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32756))) > (arr_19 [i_12] [i_12 + 1] [i_13] [i_14] [i_14] [i_14] [i_14])));
                }
            } 
        } 
    }
    var_37 = ((/* implicit */long long int) 12401241719671108915ULL);
    var_38 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483633)) ? (var_6) : (((/* implicit */int) var_16))))) ? (18ULL) : (((12401241719671108891ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
}
