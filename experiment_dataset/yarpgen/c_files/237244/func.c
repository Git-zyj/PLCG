/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237244
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
    var_14 = ((/* implicit */unsigned int) ((_Bool) (+(((((/* implicit */int) (_Bool)1)) + (var_8))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) var_13);
                            arr_11 [i_0] [i_3] [i_2] [i_3] = var_8;
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (signed char)-3)) : (var_3))))), (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_2)))) * (((/* implicit */int) var_7))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (var_4) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_8)) : (((unsigned int) var_13))))));
    var_20 ^= ((/* implicit */unsigned short) (short)-1);
}
