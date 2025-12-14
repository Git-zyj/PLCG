/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198503
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
    var_13 = ((/* implicit */unsigned char) ((((var_8) <= (((((/* implicit */_Bool) (unsigned short)448)) ? (((/* implicit */int) (unsigned short)65088)) : (1099573695))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (var_11)))) ? (2869109233749012271ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_6)))))))) : (3977511490807008069ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_1 [i_0]))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) var_12);
    }
}
