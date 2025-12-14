/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31486
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_4 [12U] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 7411679684429528508LL)), (max((6040849422349488097ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
                                arr_12 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) (-(arr_9 [(short)8] [i_1] [(short)8] [(short)8] [i_0 + 1])));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [15U]);
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min(((+(804868483U))), (((/* implicit */unsigned int) ((arr_8 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_1] [i_1 + 1] [i_1]) ? (((/* implicit */int) arr_8 [i_0 + 1] [(unsigned short)5] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_1] [i_1 + 1] [i_1])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_14))))) : (var_2))))));
}
