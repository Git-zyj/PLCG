/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198295
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((short) 435293849)))));
        var_20 -= ((/* implicit */int) ((unsigned char) 435293849));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) ((int) arr_3 [i_1] [i_1]));
        var_21 = arr_6 [i_1];
    }
    var_22 = ((/* implicit */unsigned int) var_15);
    var_23 = ((/* implicit */short) (signed char)-19);
}
