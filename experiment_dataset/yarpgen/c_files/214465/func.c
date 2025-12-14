/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214465
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
    var_14 = ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */short) (-(arr_4 [i_0] [i_1] [i_1])));
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    for (long long int i_4 = 3; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) (-(arr_2 [i_0])));
                            var_16 = ((/* implicit */long long int) var_9);
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -6238818302559912871LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) * (arr_10 [i_1] [i_4 - 3] [i_0] [i_3] [i_4 - 2] [i_2 + 2])));
                            arr_13 [i_0] [(short)11] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */short) ((arr_4 [i_0] [i_3] [i_4]) & (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((-9223372036854775807LL - 1LL))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [4U] = ((/* implicit */unsigned short) ((long long int) ((arr_2 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [16ULL]))) - (var_1))))))));
                    var_19 = ((_Bool) var_3);
                }
                for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    var_20 = ((/* implicit */short) ((((arr_6 [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) + (((arr_18 [i_0] [i_0] [i_1] [i_2 + 1] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    arr_20 [i_1] [i_1] [i_2] [9LL] = ((arr_4 [i_2 - 1] [i_2] [i_2 + 2]) + (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_1] [i_0] [i_1] [i_2] [i_6] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_6]))))))));
                    var_21 ^= ((/* implicit */_Bool) arr_3 [i_6] [i_6]);
                }
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    var_22 &= ((/* implicit */unsigned short) ((_Bool) arr_7 [i_0] [i_2] [i_2 + 1]));
                    var_23 += ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_2 - 1])) * (((/* implicit */int) arr_1 [i_0] [i_2 + 1]))));
                }
                for (short i_8 = 3; i_8 < 14; i_8 += 3) 
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_15 [i_0] [i_2] [i_2 + 2] [i_8 - 3])) / (arr_9 [i_0] [i_1] [i_2] [i_2] [4LL])))) < (10959384684702077584ULL)));
                    arr_25 [i_0] [i_2 + 2] [i_2 + 2] [i_1] = ((/* implicit */long long int) var_10);
                }
                /* LoopSeq 1 */
                for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_2 + 2] [i_2 - 1])) + (2147483647))) >> (((((long long int) arr_26 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_9])) + (37918507896775341LL)))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))) != (var_5)));
                }
            }
            for (long long int i_10 = 2; i_10 < 17; i_10 += 2) 
            {
                var_27 = ((/* implicit */long long int) var_6);
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) (~(arr_17 [i_0] [i_10])))) : ((~(arr_3 [i_1] [i_1])))));
                var_29 = ((unsigned int) arr_29 [i_10 + 1] [i_1]);
            }
            var_30 = ((/* implicit */unsigned long long int) var_4);
            var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_1] [i_0] [i_1] [i_1]))));
        }
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                for (short i_13 = 2; i_13 < 16; i_13 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 4; i_14 < 14; i_14 += 3) 
                        {
                            var_33 |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_24 [i_12] [i_12] [i_13] [i_14]))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((arr_30 [i_13 + 2]) <= (arr_30 [i_13 + 1]))))));
                            var_35 = ((/* implicit */unsigned short) (-((-(768U)))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            arr_45 [i_0] [i_11] [i_12] [17LL] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 12U))));
                            var_36 = ((/* implicit */long long int) (+(((/* implicit */int) arr_37 [i_11] [i_12] [i_11] [i_15]))));
                        }
                        arr_46 [i_0] [i_11] [i_11] [3LL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_9 [i_12] [i_13] [i_13 + 2] [i_13 + 2] [i_13 - 2])) <= (var_10)));
                        var_37 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_12] [i_12]);
                        var_38 = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */unsigned long long int) (-(4294967295U)));
        var_40 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (_Bool)1)))));
    }
}
