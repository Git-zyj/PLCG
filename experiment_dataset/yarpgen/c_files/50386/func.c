/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50386
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
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24576)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24586)) ? (4568277025738104278LL) : (-4568277025738104279LL))))))), (var_2)));
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)24515)), (-4568277025738104300LL)));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((var_6) ? (((var_6) ? (((/* implicit */int) var_0)) : (var_8))) : (max(((~(((/* implicit */int) var_13)))), (var_8))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned char) 7104162638587661730ULL));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_11);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) (~(3764210823989733220LL)));
        arr_6 [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_19 += ((/* implicit */int) ((unsigned long long int) (+(var_3))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-(arr_8 [i_2 + 2]))))));
        arr_9 [i_2] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (short)3051)))));
        arr_10 [i_2] = ((/* implicit */short) arr_7 [i_2 - 1]);
    }
}
