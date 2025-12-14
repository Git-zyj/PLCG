/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26151
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
    var_15 = (+(var_7));
    var_16 = ((/* implicit */_Bool) var_6);
    var_17 = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) var_13)) ? (var_3) : (var_10))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0 - 3] [20LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0] [(_Bool)1])))))) : (((((/* implicit */long long int) var_8)) + (arr_0 [12])))))) ? (((/* implicit */int) var_4)) : (((int) ((int) 1477595717)))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */long long int) (+(arr_1 [i_0 - 1] [i_0 - 3])))), (arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 2]))))));
            }
        } 
    } 
}
