/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202221
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_18))));
    var_21 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned short) arr_5 [12] [13U] [i_3 - 1] [i_3]);
                            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */short) arr_5 [i_3 - 3] [i_3 - 1] [i_2] [i_3 - 4])), (((short) var_0)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0]);
                var_25 = ((/* implicit */unsigned char) arr_1 [i_0]);
            }
        } 
    } 
}
