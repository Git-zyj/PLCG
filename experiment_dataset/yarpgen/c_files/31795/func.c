/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31795
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) max((1242199241U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 - 1] [(short)6]))))));
                var_11 = ((/* implicit */int) max((var_11), (arr_0 [(signed char)8] [i_0])));
                var_12 += ((/* implicit */unsigned long long int) arr_2 [i_0]);
                var_13 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (32212254720LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) var_1))));
    var_15 = ((/* implicit */_Bool) var_3);
}
