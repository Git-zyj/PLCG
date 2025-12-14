/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2006
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_1] [i_2 + 3] [i_1 + 2] [i_1 + 1] [i_1] [i_0 + 3] = arr_0 [i_1] [i_1];
                                arr_18 [i_0] [18] [i_1] [(unsigned char)11] [i_0 + 2] = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_4 [i_1] [i_1 + 3] [i_2 + 1]))), (((((/* implicit */_Bool) (~(536346624U)))) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) var_4))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_2);
}
