/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43983
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) (signed char)(-127 - 1)))));
    var_18 = (+(((((/* implicit */_Bool) 3414587456U)) ? (((/* implicit */int) (signed char)-97)) : (103045297))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 1] = (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1]))))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) ^ ((~(((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((int) (~(arr_1 [i_0 + 2]))))) : ((-((-(16412049496379796358ULL)))))));
            }
        } 
    } 
}
