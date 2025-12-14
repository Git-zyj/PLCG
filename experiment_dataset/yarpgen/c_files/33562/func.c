/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33562
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) ((short) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */int) (unsigned char)190))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (short)-29829)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (unsigned char)59)), (arr_9 [i_0] [(unsigned char)14] [i_0]))), (((/* implicit */unsigned long long int) max((-1960567340635929140LL), (((/* implicit */long long int) min((131064), (((/* implicit */int) (short)10723))))))))));
                                var_23 = ((/* implicit */long long int) (short)10723);
                            }
                        } 
                    } 
                } 
                var_24 *= ((/* implicit */long long int) ((unsigned int) -6830832064168459161LL));
            }
        } 
    } 
    var_25 |= min((var_13), (((int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_3)))));
}
