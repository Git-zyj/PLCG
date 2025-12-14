/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48946
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_2] [i_3] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2 + 3] [i_2]))));
                        arr_12 [i_0] [i_1] [i_2] [(signed char)2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [(unsigned char)0])) ? (2329981405404501180LL) : (arr_3 [i_0] [i_1] [i_2]))) % (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_0]))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [(signed char)8] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((arr_10 [i_2 + 2]) >= (arr_10 [i_2 - 1]))) ? (min((((/* implicit */long long int) arr_8 [i_0] [(unsigned short)2] [(unsigned char)13] [9U])), ((+(2329981405404501180LL))))) : (((((/* implicit */_Bool) var_16)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1])))))));
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) var_16);
                        var_20 = ((/* implicit */unsigned short) ((unsigned char) var_6));
                    }
                    arr_17 [i_1] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) -2329981405404501181LL)) ? (((/* implicit */long long int) var_19)) : (arr_3 [(short)10] [i_1] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [(signed char)1] [i_1]))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 2329981405404501175LL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)96)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max((((arr_9 [i_0] [i_5] [i_2 + 3] [(unsigned char)21]) ^ (arr_9 [i_0] [i_1] [i_1] [i_1]))), (((/* implicit */long long int) var_18))));
                                arr_24 [(signed char)16] [i_1] [i_6] = var_16;
                                var_22 = ((/* implicit */unsigned char) (~(((arr_6 [i_2 + 2] [i_2 + 2] [i_5 - 2] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))) : (((arr_9 [i_0] [i_0] [i_2] [i_5]) & (((/* implicit */long long int) var_5))))))));
                            }
                        } 
                    } 
                    arr_25 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_2 + 2] [i_2 + 3] [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_23 [i_2 + 3] [i_2 + 2] [i_2 + 2])))) : (((((/* implicit */_Bool) arr_23 [i_2 - 1] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2 + 3] [i_2 + 2] [i_2 + 1]))) : (-2329981405404501175LL)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (~(max((((((-2329981405404501177LL) + (9223372036854775807LL))) << (((((((/* implicit */int) var_16)) + (122))) - (7))))), (-2329981405404501180LL)))));
    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) ((_Bool) -2329981405404501184LL))))));
}
