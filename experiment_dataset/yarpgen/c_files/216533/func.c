/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216533
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
    var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) & ((-(((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)59603)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned short)59598))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */int) var_11);
                }
                arr_9 [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) <= (arr_1 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)9] [i_1] [i_0]))) : (arr_6 [i_0]))))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0 - 2])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) -8828230228542537554LL));
                    var_20 = ((/* implicit */signed char) arr_6 [4]);
                    var_21 = ((arr_4 [i_0] [i_1] [i_1] [i_0 - 2]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : ((+(((/* implicit */int) var_10)))));
                }
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 4589318242988969664ULL)))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5938)) && (((/* implicit */_Bool) var_9)))))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_4]))) >= (2484614432251505453ULL)))), ((unsigned short)5955))))));
                    var_24 = ((/* implicit */unsigned int) arr_6 [i_0]);
                    var_25 = ((/* implicit */short) var_11);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_5 - 3])) == (((/* implicit */int) var_8))));
                        var_27 = ((/* implicit */signed char) arr_19 [18ULL] [i_0 + 1] [i_5 - 1] [i_5 - 1]);
                        arr_20 [i_0] [i_0] [i_4] [i_5] [i_4] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2570)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_4] [i_5 + 1]))))) ? (((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1]))));
                    }
                    for (short i_6 = 1; i_6 < 24; i_6 += 3) 
                    {
                        var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) arr_1 [1U] [i_6 + 1]))), ((-(var_2)))));
                        var_29 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 2; i_7 < 23; i_7 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) (~(arr_5 [i_4] [i_1] [i_4] [i_7 - 2])));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7 + 2] [i_0] [i_0 - 1]))) : (arr_25 [i_7 - 2] [i_0 - 2] [i_0 + 1])));
                        var_32 = ((/* implicit */unsigned long long int) (unsigned short)59598);
                        var_33 = ((/* implicit */long long int) (~(((unsigned int) (unsigned short)59592))));
                        arr_27 [i_1] [i_1] [i_0 + 1] [i_7 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) | ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9413))) : (arr_12 [i_0] [(unsigned char)13] [i_4])))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_34 = (~(((/* implicit */int) var_3)));
                        var_35 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) var_0)))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) max((max((min((arr_23 [i_8] [3] [i_1] [i_0]), (((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned short)5941)))), ((+(arr_23 [i_8] [i_4] [i_0] [i_0]))))))));
                        arr_31 [(unsigned char)16] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_15 [i_0 - 1] [i_1] [i_4])) + (((/* implicit */int) arr_22 [i_0 - 2] [24U] [i_4] [i_8] [(unsigned char)2] [i_1])))));
                    }
                }
            }
        } 
    } 
    var_37 += ((/* implicit */signed char) max((((((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)5935)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : ((-(1948677564566862887ULL))))), (8252017931183982424ULL)));
    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
}
