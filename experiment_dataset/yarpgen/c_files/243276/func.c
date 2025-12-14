/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243276
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
    var_18 = var_12;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) arr_1 [i_0 - 1] [i_0]);
        var_20 = (~(((/* implicit */int) var_14)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(var_12)));
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) (~(104246447)));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_21 = min((((((/* implicit */int) var_8)) >= (((/* implicit */int) max((var_0), (var_6)))))), ((!(((/* implicit */_Bool) ((5294861597282367991ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
        arr_7 [i_1 - 1] = ((/* implicit */short) (((-(((/* implicit */int) arr_5 [i_1] [i_1])))) ^ (((/* implicit */int) (unsigned short)18189))));
        arr_8 [i_1] = var_5;
    }
    var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(var_7))) - (((var_11) | (var_7))))))));
    var_23 = ((/* implicit */signed char) var_15);
}
