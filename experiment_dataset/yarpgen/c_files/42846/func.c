/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42846
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
    var_17 = var_10;
    var_18 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (((+(var_15))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1813233836U))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((arr_2 [i_0] [i_1]), (arr_2 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_5 [i_0]))))))))) && (((/* implicit */_Bool) ((signed char) ((arr_2 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
                var_21 = ((/* implicit */int) arr_1 [i_1]);
            }
        } 
    } 
}
