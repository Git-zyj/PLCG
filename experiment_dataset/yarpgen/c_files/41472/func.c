/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41472
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
    var_14 |= ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) ((unsigned char) var_8))), (var_6)))) > (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((signed char) (signed char)58))) : (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))))))))));
    var_15 |= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? ((+(((/* implicit */int) (signed char)-120)))) : ((-(((/* implicit */int) (signed char)64))))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (max((((/* implicit */unsigned int) var_7)), (17U))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */signed char) (+((~(-756682608)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (756682608) : (((/* implicit */int) var_9))))))))));
                }
            } 
        } 
    } 
}
