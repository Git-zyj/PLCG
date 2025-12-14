/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27623
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
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (unsigned char)144))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_3 - 1]))))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((short) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */long long int) 1106625304);
}
