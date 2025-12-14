/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226163
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
    var_16 = max((((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (unsigned short)27223)))), ((((-(((/* implicit */int) (short)-20090)))) * (((((/* implicit */int) var_8)) / (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [(unsigned short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_13)), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned short) ((short) (short)8767)))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) var_3))));
        var_17 ^= ((/* implicit */unsigned short) min((((/* implicit */int) min((((signed char) (signed char)-85)), (((/* implicit */signed char) ((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned short)27223)))))))), ((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)4991)), ((unsigned short)504))))))));
    }
}
