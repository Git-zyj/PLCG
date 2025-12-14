/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19148
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
    var_20 = ((/* implicit */signed char) ((((((/* implicit */int) var_13)) <= (((/* implicit */int) min((var_9), (var_6)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) var_19))))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) max((var_1), (var_0))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-32)) > ((-(((/* implicit */int) (signed char)-89)))))))));
        var_22 ^= ((/* implicit */signed char) max((((/* implicit */int) var_18)), (max((((/* implicit */int) arr_0 [(signed char)8])), ((+(((/* implicit */int) var_11))))))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((((/* implicit */int) var_19)) / (((/* implicit */int) arr_2 [i_1 + 4] [(signed char)1])))) * (((((/* implicit */int) var_10)) & (((/* implicit */int) arr_2 [i_1 + 1] [i_1]))))));
        var_24 = var_0;
        var_25 |= ((/* implicit */signed char) min((((/* implicit */int) min((arr_1 [(signed char)2] [(signed char)2]), (var_11)))), ((~(((/* implicit */int) arr_0 [(signed char)14]))))));
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_19)) != (((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_17)) * ((-(((/* implicit */int) (signed char)-79))))))));
    var_27 = var_12;
}
