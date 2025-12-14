/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43985
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
    var_15 = ((/* implicit */signed char) ((unsigned int) (unsigned char)0));
    var_16 = ((/* implicit */unsigned short) ((((unsigned long long int) (signed char)-82)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (-(((arr_4 [i_2] [i_2 - 2] [i_2 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-8))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42101))) : (var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min(((unsigned short)8675), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_1]))))))) : (((unsigned int) var_12)))))));
            }
        } 
    } 
}
