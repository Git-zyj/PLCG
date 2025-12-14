/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193736
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
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) (short)15804))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38500))) | (arr_2 [i_0 - 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((((/* implicit */_Bool) 18U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3925848828309745485ULL)) || (((/* implicit */_Bool) 11145968415799262471ULL))))))))), (arr_4 [i_0] [i_0 + 1] [i_2])));
                            var_17 = min((((((/* implicit */_Bool) 142796736)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55287))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_1 [i_3]);
                            var_18 = ((/* implicit */short) arr_1 [i_0 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
