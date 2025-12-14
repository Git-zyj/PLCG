/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4372
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_12 [i_2] [(signed char)9] [(signed char)1] [(signed char)1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) 3971221335U))), ((-((+(arr_0 [i_1])))))));
                            var_10 -= ((/* implicit */_Bool) ((signed char) -5723252450791429150LL));
                            var_11 = (!(arr_8 [i_2] [i_1 + 3] [i_1 - 3] [i_1 + 4]));
                            var_12 ^= ((/* implicit */unsigned short) 1527516915U);
                        }
                    } 
                } 
                var_13 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_0)), (var_6)))), ((+(min((2903089578U), (((/* implicit */unsigned int) var_2))))))));
            }
        } 
    } 
    var_14 = (+(((int) min((-6737753649093305248LL), (((/* implicit */long long int) (signed char)32))))));
}
