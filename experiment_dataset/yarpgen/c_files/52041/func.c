/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52041
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_8 [i_2] = var_13;
                            var_15 = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-3))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_10);
}
