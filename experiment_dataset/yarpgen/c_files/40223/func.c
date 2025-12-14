/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40223
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) var_14))))))), (((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [(signed char)16])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0] [15ULL])))), (((/* implicit */int) arr_0 [0LL] [0LL]))));
        var_20 = ((/* implicit */long long int) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    var_22 |= ((/* implicit */unsigned long long int) var_5);
    var_23 = var_15;
}
