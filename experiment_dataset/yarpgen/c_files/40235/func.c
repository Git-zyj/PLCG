/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40235
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
    var_14 = ((long long int) ((((/* implicit */_Bool) var_6)) ? (min((var_6), (var_10))) : (((((/* implicit */_Bool) -6453263975331034493LL)) ? (7353921519808590837LL) : (0LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-3854210976642728774LL) : (-6453263975331034480LL)));
        var_16 = -8170432312079253926LL;
        var_17 = ((long long int) -8170432312079253926LL);
    }
    var_18 = var_7;
    var_19 &= min((((((/* implicit */_Bool) ((var_6) - (var_11)))) ? (max((0LL), (4748713690907819026LL))) : (var_3))), (((((/* implicit */_Bool) min((-8412939042769268132LL), (-4245440113814334513LL)))) ? (var_5) : (max((var_12), (var_13))))));
}
