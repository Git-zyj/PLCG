/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243382
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_11 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0]))));
                    arr_8 [i_2 - 3] [i_2 + 4] [i_2] = arr_1 [i_0];
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_3 - 1] [i_3] [i_3 - 2])))) - (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((unsigned int) var_4)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        arr_18 [i_0 + 1] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_2] [i_2] [i_2 + 2] [i_2])) ? ((-(arr_4 [i_2 - 3] [i_1 + 2] [i_2 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_2))))))) ? (((unsigned long long int) arr_9 [i_2] [i_1] [i_2])) : (((/* implicit */unsigned long long int) ((var_3) + ((-(((/* implicit */int) (_Bool)1)))))))));
                        var_13 = max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))))), ((-(arr_10 [i_0 + 1] [i_0] [i_2] [i_1 + 1]))));
                        var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_2] [i_1] [i_1 + 2])))))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_24 [i_5] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((335737570U) + (335737570U))))) % (max((arr_22 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_2] [i_2 - 3] [i_1 + 2] [i_0 - 1])))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_0])) ? ((~(((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */long long int) arr_7 [i_0])) : (((arr_6 [i_0 - 1] [i_1] [i_2] [i_5]) ? (arr_10 [i_0] [i_0 - 1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_2 + 1] [i_5])) && (((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_6] [i_2]))))) ? (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_10 [i_1 - 1] [i_1] [i_1] [i_1 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_17 = ((/* implicit */short) ((unsigned char) var_1));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */unsigned int) 9218106364236363645ULL);
                            arr_32 [i_0] [i_1] [i_2] [i_7] [i_7] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9228637709473187971ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9228637709473187971ULL)));
                            var_18 |= ((/* implicit */int) max(((+((((_Bool)1) ? (335737583U) : (arr_5 [i_0 - 1] [i_1 + 1] [i_2 + 2]))))), (((/* implicit */unsigned int) (((((_Bool)1) && (((/* implicit */_Bool) 9218106364236363645ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2409376053U)) && ((_Bool)1)))) : (var_3))))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 21; i_9 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_16 [i_0 - 1] [i_1] [i_2] [i_9 + 2] [i_7] [i_0 + 1])), (((/* implicit */unsigned long long int) max((arr_34 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_2 - 1] [i_7 + 1] [i_9 - 2]), (arr_34 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_2 - 2] [i_7 - 1] [i_9 - 2]))))));
                            var_20 -= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) arr_30 [i_9 - 1] [i_9 + 2] [i_9] [i_9] [i_9 + 1])) * (arr_28 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1]))), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_7 [i_0])) - (var_8)))), (((((/* implicit */_Bool) var_10)) ? (9228637709473187957ULL) : (((/* implicit */unsigned long long int) arr_36 [i_0 - 1]))))))));
                        }
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((+(arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)24010))))))))));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned char) arr_23 [i_0] [i_1] [i_2] [i_2] [i_10 - 1] [i_10]);
                        var_23 += ((/* implicit */unsigned int) arr_30 [i_0] [i_1] [i_1] [i_2] [i_10]);
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 2; i_11 < 22; i_11 += 4) 
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_11] [i_11] [i_10 - 1] [i_2] [i_1] [i_0]))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_20 [i_2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))))) : ((((~(var_10))) ^ (((/* implicit */long long int) 3959229741U))))));
                            arr_42 [i_0] [i_2] [i_11] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_11]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_9))))))));
                        }
                        var_24 -= ((/* implicit */signed char) var_7);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) max((var_7), (((/* implicit */unsigned long long int) var_6))))));
    var_26 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(var_10))) : (((((/* implicit */long long int) var_0)) ^ (var_10)))))));
}
