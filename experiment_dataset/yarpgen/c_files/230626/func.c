/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230626
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_7)))), ((-(((unsigned long long int) -1331572866))))));
    var_13 ^= (-(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) min((var_5), (var_8)))) : (((/* implicit */int) var_5)))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (var_4)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(25ULL)))))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */long long int) ((((((((/* implicit */int) var_6)) ^ (arr_3 [i_0]))) + (2147483647))) << (((((/* implicit */int) var_5)) - (41)))))), (min((min((((/* implicit */long long int) var_0)), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((unsigned short) arr_2 [i_0] [i_0] [i_1]))))))))));
            }
        } 
    } 
}
