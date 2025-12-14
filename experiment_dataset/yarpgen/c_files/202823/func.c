/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202823
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
    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_5)) ? (var_14) : (var_14))) : (((/* implicit */long long int) var_10)))) : ((-(var_14)))));
    var_19 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 - 3])))), ((+(((/* implicit */int) (short)15945)))))))));
                arr_6 [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_5 [i_0] [i_1 - 1])))) | ((+(((/* implicit */int) arr_5 [i_0] [i_1 - 3]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_2] = ((/* implicit */long long int) (+(((unsigned long long int) arr_5 [i_3] [i_3]))));
                var_22 = ((/* implicit */unsigned short) (~(var_6)));
            }
        } 
    } 
}
