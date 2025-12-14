/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238260
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (var_7)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((1901345524U), (1901345508U)));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((max((var_17), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) var_3)))))));
                                arr_12 [i_0] [(unsigned char)16] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) max((1901345546U), (1056964608U)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) var_12);
                }
            } 
        } 
    } 
    var_24 = max((var_13), (max((1901345540U), (3626884351U))));
    var_25 = ((/* implicit */unsigned char) var_18);
}
