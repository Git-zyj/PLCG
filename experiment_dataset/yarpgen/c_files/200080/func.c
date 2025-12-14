/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200080
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
    var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) min((0), (0)))) ? (((/* implicit */int) ((-1) < (((/* implicit */int) var_5))))) : (0)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9128376313058446232ULL)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))) ? (min((0), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_14)) * (((/* implicit */int) var_9))))))) ? (((/* implicit */int) min(((short)0), (((/* implicit */short) max(((_Bool)1), (var_4))))))) : (((/* implicit */int) var_9))));
                arr_4 [i_0] [i_0] [i_0] = -1;
                var_22 -= ((/* implicit */short) arr_1 [i_1]);
            }
        } 
    } 
}
