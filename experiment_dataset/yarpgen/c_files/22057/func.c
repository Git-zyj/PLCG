/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22057
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
    var_19 ^= ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_20 ^= ((/* implicit */long long int) max((((unsigned long long int) arr_9 [i_2 + 1] [i_3 + 1] [i_1])), (((/* implicit */unsigned long long int) arr_9 [i_2 + 2] [i_3] [i_1]))));
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (-(min((1631097336U), (((/* implicit */unsigned int) arr_2 [i_2 + 2] [i_3 + 1]))))));
                            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (short)-25118);
                            arr_14 [i_0] [i_0] [i_2 - 1] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (((_Bool)1) ? ((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((min((3322044674U), (2371468870U))) - (2371468870U))))) : ((~(((((((/* implicit */int) (short)-32760)) + (2147483647))) << (((((var_1) + (7903567859034853826LL))) - (16LL)))))))));
                var_22 = ((/* implicit */unsigned int) ((min((((/* implicit */int) (_Bool)0)), (-1734746912))) & (528955799)));
                arr_15 [i_0] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
            }
        } 
    } 
}
