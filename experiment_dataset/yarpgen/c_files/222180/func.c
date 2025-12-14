/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222180
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? ((~(((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)10386)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) == (min((arr_9 [i_0] [i_1] [i_0 + 1] [i_3 + 1]), (var_9)))));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1792)) ? ((-(6763549059468283301LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0 + 1])), ((unsigned short)63)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */short) arr_2 [i_0 + 1])), (var_4)))), (min((arr_8 [i_1] [13] [i_0]), (2854471491U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) (signed char)127))))))) ? (var_1) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_5)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10)))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_3))));
    var_18 = ((/* implicit */signed char) var_10);
    var_19 = ((/* implicit */short) var_9);
}
