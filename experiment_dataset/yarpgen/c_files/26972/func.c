/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26972
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_0 - 1])) != (((/* implicit */int) min((arr_1 [i_0 - 1] [4]), (arr_1 [i_0 - 1] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)168))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (((min((((/* implicit */long long int) var_10)), (var_15))) + (((/* implicit */long long int) min((var_3), (((/* implicit */int) (unsigned char)171))))))))))));
                            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)84))));
                            arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min(((short)32767), (((/* implicit */short) arr_1 [6ULL] [i_0 + 1])))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (min((6820651466054473757ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_6))));
}
