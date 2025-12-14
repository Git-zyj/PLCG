/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28795
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
    var_13 = ((/* implicit */unsigned short) (+((-(((int) var_12))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_4))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)5355);
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(var_1)))) : (((/* implicit */int) (_Bool)1)))));
                                arr_14 [i_0 + 1] [i_0] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) (short)14618)));
                            }
                        } 
                    } 
                    arr_15 [i_0 + 1] [i_0] = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((int) (signed char)-59)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((_Bool) var_8));
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_6)))));
}
