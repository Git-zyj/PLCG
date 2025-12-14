/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 &= ((/* implicit */int) min((min((((/* implicit */long long int) var_5)), (((var_15) ? (((/* implicit */long long int) var_17)) : (4903247120921964451LL))))), (((/* implicit */long long int) arr_2 [i_0] [(_Bool)1]))));
                arr_6 [i_0 - 2] [i_0] = ((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((var_15) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16)))) != (((/* implicit */int) ((_Bool) var_1)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_1))))) : (((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_2] = (((!(arr_9 [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29359))) : (((4903247120921964451LL) / (-4903247120921964452LL))));
                arr_14 [i_2] = ((/* implicit */int) arr_12 [i_3]);
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((4903247120921964451LL), (((/* implicit */long long int) arr_8 [i_3]))))) ? (((/* implicit */int) max((arr_8 [i_2]), (var_14)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) || (((/* implicit */_Bool) var_14)))))));
                arr_15 [i_2] [i_2] [i_3] = ((/* implicit */int) min((max((max((var_7), (((/* implicit */unsigned long long int) arr_8 [i_3])))), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) min((arr_8 [i_3]), (min((((/* implicit */short) (_Bool)1)), (arr_8 [i_2]))))))));
            }
        } 
    } 
    var_21 &= var_15;
    var_22 = max((max((-2046825632), ((~(var_6))))), (((/* implicit */int) var_13)));
}
