/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229400
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
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned int) var_3);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_11 = max((((/* implicit */long long int) (signed char)32)), (arr_7 [i_0]));
                                arr_13 [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_3 - 2]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) ((short) var_8))))));
}
