/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247049
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
    var_12 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_10)) | (min((6847453985448560211ULL), (((/* implicit */unsigned long long int) var_2)))))) < (((/* implicit */unsigned long long int) var_10))));
    var_13 = ((/* implicit */short) ((int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */short) (-(var_0)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -871598767))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((short) arr_0 [i_0 + 2]));
    }
    var_15 = ((/* implicit */short) var_10);
}
