/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223647
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_15 -= ((/* implicit */unsigned char) arr_4 [i_3]);
                            var_16 = ((/* implicit */short) var_12);
                            arr_9 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (~((~((+(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_1 - 1])))) ? (min((arr_1 [i_1 + 2]), (arr_1 [i_1 + 1]))) : (((/* implicit */unsigned int) var_5)))))));
                var_18 -= ((/* implicit */signed char) arr_8 [i_0] [i_1 + 1] [i_0] [(short)5]);
                var_19 = ((/* implicit */signed char) (~(((arr_7 [i_0] [i_1 + 2] [10LL] [i_1 - 1] [i_1] [i_1]) ? (1215823482898135665LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))) ? (((/* implicit */unsigned long long int) var_5)) : (max((var_4), (((/* implicit */unsigned long long int) (-(2124802147U))))))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                arr_14 [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 1640412805U))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (~(1215823482898135674LL)));
}
