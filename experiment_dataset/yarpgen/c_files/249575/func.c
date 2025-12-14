/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249575
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        arr_14 [i_3] [i_1] [(signed char)0] [(signed char)0] [i_3] = ((/* implicit */short) var_17);
                        var_20 = ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (short)-15910)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) : (arr_11 [i_3 - 2] [i_3] [(_Bool)1] [i_3] [i_0]))))))) : (((/* implicit */int) (_Bool)0)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) (+(max((4306778755638958893ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)15941)))))))));
                        arr_19 [i_0] [i_0] [(signed char)0] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        var_22 = ((/* implicit */long long int) arr_18 [i_0] [i_1] [(_Bool)1] [i_1] [i_1]);
                    }
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((max((arr_12 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]), (arr_12 [i_0] [6U] [i_1] [i_1] [i_2] [i_2]))), (((unsigned short) arr_12 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0])))))));
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [(unsigned char)0] [(unsigned char)0]))))) != (max((((/* implicit */int) arr_4 [i_1])), (var_4))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)998)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-15918)))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    arr_23 [i_5] [17] [(short)16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) + (((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) <= (var_10)))))))));
                    arr_24 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3695958219U))))), ((unsigned char)64)));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_25 -= ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)0)) - ((-(((/* implicit */int) (_Bool)1))))))));
                                arr_30 [i_7] = ((/* implicit */_Bool) -156276253);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1] [i_8]))));
                                var_27 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [7ULL] [i_9])) ? (((/* implicit */int) arr_25 [i_9] [i_5] [i_0] [i_0])) : (((/* implicit */int) (signed char)-1)))));
                                var_28 += ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_37 [9U] [i_5] [i_5] [i_5] [i_5])), (max((24ULL), (((/* implicit */unsigned long long int) var_18)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (max((2435299030U), (2435299030U)))))))));
                                arr_38 [2LL] [2LL] [7U] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) 1676437090)) ? (((/* implicit */unsigned long long int) 2820053516U)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_18 [i_0] [i_1] [9ULL] [i_1] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15938))))))), (((unsigned long long int) (!(((/* implicit */_Bool) 14416730407205040308ULL)))))));
                                var_29 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned short) arr_17 [i_8] [i_8] [i_8] [i_5] [i_1] [i_0]))) ? (((((/* implicit */_Bool) arr_21 [i_8])) ? (((/* implicit */int) arr_25 [i_0] [i_5] [i_8] [i_9])) : (arr_34 [17LL] [i_1]))) : (((int) (unsigned short)37317)))), (((((/* implicit */_Bool) arr_34 [i_8] [i_1])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_1] [i_5] [i_8] [i_0] [i_9]))))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15909)) / (((/* implicit */int) arr_16 [i_0] [8ULL] [8ULL] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_0])) / (((/* implicit */int) arr_16 [i_1] [(signed char)8] [(signed char)8] [(signed char)8]))))) : (var_13)));
                arr_39 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [9U] [i_0] [i_1])) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [(unsigned short)9] [(unsigned short)9] [i_1]))))) ? (max((arr_13 [i_0] [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) (short)-14108)))) : (((((/* implicit */unsigned long long int) var_13)) ^ (arr_9 [i_0] [i_0] [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1] [(unsigned short)6] [i_1] [i_0] [(short)12] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])) : (var_0))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) != (var_10)));
}
