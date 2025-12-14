/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195556
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) arr_0 [i_0 + 1]);
                                arr_11 [i_0 - 1] [i_1] [i_1] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)195)) ? (2765702924U) : (4234383089U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                                var_19 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (2857802639247827175LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))));
                            }
                        } 
                    } 
                    arr_12 [i_0 + 1] [i_1] [i_0 + 1] [7LL] = ((/* implicit */short) var_17);
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned long long int) var_0);
}
