/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238570
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_11 ^= ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [10U]))));
        var_12 = arr_1 [i_0] [i_0];
        var_13 = ((/* implicit */signed char) arr_0 [i_0]);
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)28))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_4 [i_1] [10ULL] = ((/* implicit */signed char) (~(-1LL)));
        var_15 = ((/* implicit */signed char) var_8);
    }
    var_16 = var_2;
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) min((((var_7) & (3554347156U))), (0U)))) : (758341607812451679LL)));
    var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) var_3))))));
}
