/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208829
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
    var_11 = ((/* implicit */_Bool) (((+(min((var_3), (var_1))))) << (((var_1) - (17324315645697412597ULL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)56)) || ((_Bool)1))))) : (min((arr_3 [i_1 - 1] [i_2] [i_2 - 3]), (arr_3 [i_1 + 1] [i_1 - 3] [i_2 - 1])))));
                    var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(var_1)))) && (((/* implicit */_Bool) 4294967289U)))) ? (arr_2 [i_0] [12U]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (signed char)42)))) : (((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
}
