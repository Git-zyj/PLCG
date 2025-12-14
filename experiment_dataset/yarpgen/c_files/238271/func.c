/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238271
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_11 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) 2045197462U)), (((((/* implicit */_Bool) 2249769834U)) ? (7691970345913332276LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))))))));
                            arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) var_4)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [9] [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)72)) == (((/* implicit */int) arr_1 [(_Bool)1] [(unsigned short)1])))))) : (max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
                            arr_13 [i_0] [i_1 + 1] [(signed char)14] [i_1 + 1] [i_3] = ((/* implicit */long long int) var_3);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_4 = 3; i_4 < 16; i_4 += 1) 
                            {
                                arr_16 [i_1] [i_2 + 1] = ((/* implicit */signed char) ((unsigned int) arr_5 [i_1 + 1] [i_1 - 3] [i_1 + 1] [i_2 + 1]));
                                arr_17 [i_0] [i_2 - 1] [i_3] [11U] = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_2] [i_2 + 2] [i_1] [i_4]);
                                var_20 = ((/* implicit */unsigned char) arr_3 [i_1 + 1]);
                            }
                            for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */_Bool) ((arr_10 [i_0] [(unsigned short)10] [i_2] [i_2] [i_3] [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                                arr_20 [i_5] [i_3] [i_2 + 2] [i_1] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_3] [i_5]);
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((var_4), (((unsigned char) ((signed char) var_18))))))));
                            }
                            for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                            {
                                arr_25 [i_0] [i_0] [i_6] = ((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)13)))), (((((/* implicit */_Bool) arr_24 [i_6 - 1])) ? (((/* implicit */int) arr_18 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_2 - 1] [i_2 - 3])) : (((/* implicit */int) arr_7 [i_1 + 1] [i_6 - 2] [i_6]))))));
                                arr_26 [(unsigned char)11] [i_6] [i_2] [i_2 + 1] [i_6] [(short)19] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_4 [i_1 + 1])))));
                                var_23 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1])))))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13197)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) & (var_1))) == (((/* implicit */unsigned long long int) var_2)))))));
                            }
                            /* LoopSeq 3 */
                            for (int i_7 = 3; i_7 < 19; i_7 += 4) 
                            {
                                var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_22 [i_7] [i_7 + 1] [i_7 - 3] [i_1 - 1])) == (((/* implicit */int) arr_2 [i_2 - 2])))) ? (((((/* implicit */_Bool) arr_22 [i_7] [i_7 - 2] [(unsigned short)18] [i_1 - 1])) ? (((/* implicit */int) arr_22 [(unsigned char)7] [i_7 - 1] [(unsigned char)7] [i_1 - 1])) : (((/* implicit */int) arr_22 [i_7 - 1] [i_7 - 1] [i_2 - 3] [i_1 + 1])))) : (((/* implicit */int) arr_22 [i_7 + 1] [i_7 - 3] [i_7] [i_1 + 1]))));
                                var_26 = (+(((/* implicit */int) max((arr_2 [i_0]), ((signed char)121)))));
                                var_27 = ((/* implicit */short) max((arr_27 [i_0] [i_1 + 1] [i_0] [i_0] [13U]), (((/* implicit */unsigned int) arr_9 [i_7 - 2] [(_Bool)1] [(_Bool)1] [i_1] [i_0]))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_28 &= ((/* implicit */unsigned int) arr_15 [(signed char)13] [i_1 - 1] [i_3] [i_8]);
                                arr_32 [i_0] [i_1] [i_2 - 2] [i_3] [i_8] = ((/* implicit */_Bool) arr_5 [i_1] [i_3] [i_1] [i_0]);
                            }
                            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 4) 
                            {
                                arr_36 [5LL] [5LL] [i_0] [i_0] [i_1 - 1] [(short)17] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? ((-(((/* implicit */int) arr_21 [i_9 - 1] [4U] [i_9] [4U] [i_9] [i_9 + 2] [i_9])))) : ((~(((/* implicit */int) max((((/* implicit */short) (unsigned char)72)), (arr_4 [i_1]))))))));
                                var_29 ^= ((/* implicit */unsigned char) var_1);
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2 + 2] [i_3] [i_2] [i_0] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [(unsigned char)18] [(unsigned char)18] [i_9] [(unsigned char)13] [(short)6] [i_9])))) << (((4655671042848396562ULL) - (4655671042848396553ULL)))))) ? (((/* implicit */int) arr_7 [i_0] [18U] [0U])) : (((/* implicit */int) arr_21 [i_0] [10U] [10U] [i_1 - 1] [i_0] [i_2 + 1] [i_9 + 1]))));
                            }
                        }
                    } 
                } 
                arr_37 [i_0] [i_0] [i_1 - 3] |= ((/* implicit */unsigned short) arr_35 [i_0] [i_1 - 1] [i_1 - 1] [i_0]);
            }
        } 
    } 
    var_31 = (-(-392568927398126815LL));
    var_32 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)163)))), (((/* implicit */int) ((short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_16))))))));
}
