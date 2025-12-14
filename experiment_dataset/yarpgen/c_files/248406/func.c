/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248406
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
    var_20 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_15)) : (4194303U)))) ^ ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) var_15)) : (var_8)));
                            arr_11 [i_0 - 1] [i_2] = ((long long int) (!(((/* implicit */_Bool) var_15))));
                            var_21 = ((/* implicit */_Bool) ((((long long int) ((((/* implicit */_Bool) var_15)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) - (((/* implicit */long long int) -949457466))));
                        }
                    } 
                } 
                arr_12 [i_0 + 1] [i_1] [i_1] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) var_10)))))), (((unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) var_9)) : (8548779724207142462LL))))));
                arr_13 [i_0] [i_1] = ((/* implicit */int) var_10);
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0ULL)) ? (var_8) : (((/* implicit */unsigned long long int) 3431420719U)))))))));
    var_23 = ((/* implicit */unsigned int) (-(min((var_12), (((/* implicit */long long int) ((int) var_17)))))));
}
