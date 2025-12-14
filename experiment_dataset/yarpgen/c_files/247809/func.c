/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247809
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
    var_17 = ((/* implicit */int) var_0);
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (4122226471087171136LL)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (arr_0 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((int) arr_1 [i_0] [i_1]))) : (arr_4 [i_0] [i_0] [i_1])));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), ((((+(((arr_4 [i_0] [i_1] [i_1]) + (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1])))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)30760)), ((unsigned short)4104)))))))))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (-2118396785)))), (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (arr_3 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_7);
}
