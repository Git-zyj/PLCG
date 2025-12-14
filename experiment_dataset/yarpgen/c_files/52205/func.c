/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52205
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
    var_18 = ((/* implicit */int) (-(((unsigned long long int) min((((/* implicit */unsigned long long int) var_10)), (13314507800599519231ULL))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)2] &= ((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_1 [i_0 + 2])), (-1895591189)))));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_8))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [(signed char)0] [i_2] [(signed char)0])) ? (((/* implicit */unsigned long long int) 1895591189)) : (var_2))))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned long long int) var_2)))));
                            arr_11 [i_3] [i_3] [i_0] [i_0] [i_0 + 3] [i_0] = ((/* implicit */_Bool) (signed char)127);
                            var_22 = ((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3] [i_3 - 2] [i_3 + 2]);
                        }
                    } 
                } 
            }
        } 
    } 
}
