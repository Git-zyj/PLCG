/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54870
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((signed char) 2607170082U))) ? ((+(4194304U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))))), (((/* implicit */unsigned int) (signed char)-3))));
                                var_14 = var_2;
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) ((3581729152U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */_Bool) 2607170103U)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1] [i_0])))))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (signed char)0))));
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((((/* implicit */int) var_12)) / (((/* implicit */int) var_12)))) > (((/* implicit */int) var_6))))) : (var_0)));
}
