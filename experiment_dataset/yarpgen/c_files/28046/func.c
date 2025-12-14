/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28046
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
    var_18 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) arr_0 [i_1]);
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_1] [i_2]))))));
                                var_21 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_4]);
                                var_22 = ((/* implicit */signed char) ((_Bool) ((unsigned char) arr_1 [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
