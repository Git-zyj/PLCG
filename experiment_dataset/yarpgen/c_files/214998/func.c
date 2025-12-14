/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214998
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) var_11);
                            var_16 = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
}
