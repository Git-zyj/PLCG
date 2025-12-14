/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210895
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
    var_17 = ((/* implicit */unsigned long long int) var_5);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) ^ (var_16)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) (+(5967723628339870223ULL)));
        arr_3 [i_0] |= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-24411))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) 2535833176255000903ULL));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)0))));
    }
    var_21 = var_13;
}
