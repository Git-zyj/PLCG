/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51544
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
    var_15 ^= ((/* implicit */unsigned long long int) (+((~(((long long int) -740548031))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) 134217728LL);
                                arr_15 [i_1] [(signed char)4] [i_3] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                                arr_16 [i_0] [i_0] [i_0] [i_2] [5U] [i_3] [i_4] = ((/* implicit */short) 17U);
                                arr_17 [i_0] [i_1 - 1] [i_0] [2LL] [i_4] = ((/* implicit */signed char) ((_Bool) min((2), (804211017))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)56))));
                }
            } 
        } 
    } 
    var_18 = (!(((/* implicit */_Bool) 562949945032704ULL)));
    var_19 |= ((/* implicit */unsigned char) (short)-30822);
}
