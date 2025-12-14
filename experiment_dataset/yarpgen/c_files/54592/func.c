/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54592
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (+((-(((/* implicit */int) min((((/* implicit */signed char) var_1)), (var_10))))))));
                                var_18 |= ((/* implicit */long long int) var_8);
                                var_19 = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
                                arr_12 [i_0] [i_1] [i_0] [i_0] [i_3] [i_0] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [i_3]))) : (arr_10 [i_0])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15067)) ? (var_3) : (((/* implicit */int) (_Bool)1)))))))), (min((var_13), (((/* implicit */long long int) ((((/* implicit */int) (short)15067)) ^ (((/* implicit */int) (short)32766)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 11571075643482321792ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) : (6722612470206122580ULL))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) ((short) (short)-15064))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_14)))))))));
}
