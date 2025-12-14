/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39195
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
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (18446744073709551615ULL) : (10329323417248670351ULL)));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_22 = var_10;
        var_23 = ((((/* implicit */int) var_12)) - (arr_1 [i_1] [i_1]));
    }
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((int) var_0)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))));
}
