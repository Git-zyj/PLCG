/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200201
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
    var_18 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */short) (signed char)26))));
    var_19 = (unsigned char)13;
    var_20 = ((/* implicit */short) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_22 = ((/* implicit */int) ((unsigned char) var_6));
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_24 &= ((/* implicit */short) (-(arr_4 [i_1] [i_1])));
        var_25 = ((/* implicit */long long int) ((short) arr_4 [i_1] [i_1]));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((var_5) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_1] [i_1]))))));
    }
    var_27 &= ((/* implicit */int) ((((((var_12) || (((/* implicit */_Bool) (unsigned char)206)))) && (((/* implicit */_Bool) min((1727681710), (((/* implicit */int) var_7))))))) || (((/* implicit */_Bool) var_7))));
}
