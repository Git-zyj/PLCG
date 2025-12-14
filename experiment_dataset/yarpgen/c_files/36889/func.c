/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36889
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(var_8))))));
    var_17 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_18 |= arr_10 [i_2 - 2] [i_1] [i_2] [i_0 - 1];
                            var_19 ^= ((/* implicit */int) ((arr_2 [i_3]) >= (((/* implicit */int) (unsigned char)134))));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)144)) < ((+(((/* implicit */int) arr_7 [i_0 + 1]))))));
            }
        } 
    } 
}
