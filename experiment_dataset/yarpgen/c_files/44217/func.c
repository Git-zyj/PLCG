/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44217
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
    var_18 = ((/* implicit */int) (+(var_14)));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_7) ^ (var_11)))) ? (((-1585394893) ^ (((/* implicit */int) var_6)))) : (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))))))) - (((((/* implicit */_Bool) -317306517)) ? (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (short)-7932)) : (-150987104))) : (max((1570285002), (((/* implicit */int) (signed char)-36))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_9);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_4);
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
        var_20 = ((/* implicit */long long int) 1570284988);
    }
}
