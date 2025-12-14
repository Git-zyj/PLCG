/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210423
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
    var_18 = var_16;
    var_19 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */int) arr_2 [i_0] [i_1]);
                    arr_7 [i_0] [i_1] [i_2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) -1153023203))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((_Bool) max((((/* implicit */int) arr_0 [i_3])), (2147483647)))))));
                    var_22 *= ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
                    arr_10 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_3] [i_0]))))), ((-(16277722775294026234ULL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 1] [i_1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((unsigned int) arr_1 [i_1 + 1] [i_0 + 1]))));
                            var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_1 + 1]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_19 [i_3] [i_4] [i_3] [i_0] [i_6] [i_3] [i_3] = ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]);
                            var_25 = ((/* implicit */int) arr_11 [i_0 + 1] [i_1 + 1]);
                        }
                        for (long long int i_7 = 1; i_7 < 8; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_3]))));
                            arr_22 [i_0] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_4] [i_1] [i_0] [i_3]))));
                        }
                        var_27 += ((/* implicit */short) ((_Bool) arr_0 [i_3]));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */int) (-(arr_8 [i_0] [i_3] [i_3] [i_4])));
                            arr_26 [i_1] [i_3] [i_4] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_0 - 1] [i_1] [i_3] [i_8] [i_8] [i_3]))));
                        }
                    }
                    for (short i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 1; i_10 < 7; i_10 += 3) 
                        {
                            arr_34 [i_10] [i_9] [i_3] [i_1] [i_0] = (-(max((((/* implicit */unsigned long long int) (unsigned char)140)), (11523270758036447790ULL))));
                            var_29 ^= ((/* implicit */unsigned int) (+((+((+(arr_32 [i_0] [4ULL] [i_9])))))));
                            arr_35 [i_3] = ((/* implicit */signed char) (-(((((int) arr_16 [i_0] [i_3] [i_3] [i_9] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_25 [i_1] [i_1] [i_10 + 2] [i_10] [i_10] [i_10] [i_3]))))));
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 3) 
                        {
                            arr_38 [i_0] [i_1] [i_3] [i_9] [i_9] [i_11] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)37613))));
                            arr_39 [(unsigned short)0] [i_1] [i_9] [i_11] [i_9] [i_0] [i_9] |= ((/* implicit */long long int) (-((-(((/* implicit */int) (short)31606))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((max((((/* implicit */long long int) (unsigned short)19520)), (1435699522210778835LL))) == (((/* implicit */long long int) ((/* implicit */int) (short)-1737))))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_12 = 1; i_12 < 9; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) ((arr_42 [i_3] [i_1 + 1] [i_12 - 1]) == (arr_42 [i_3] [i_1 + 1] [i_12 - 1])));
                            arr_43 [i_3] [i_9] [i_3] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (short)15173);
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max(((+(((long long int) 4081856801829021795LL)))), (((4081856801829021807LL) % (((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_3] [i_1] [i_0])), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                            var_33 = ((/* implicit */signed char) 2147483639);
                        }
                        arr_44 [i_0] [i_3] [i_3] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_40 [i_9] [i_3] [i_9] [i_3] [i_3] [i_0 + 1]))));
                        arr_45 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) (signed char)-127);
                    }
                    var_34 = ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_3] [i_3]);
                }
                var_35 = ((/* implicit */short) (unsigned char)149);
            }
        } 
    } 
}
