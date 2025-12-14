/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241813
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_6), (var_1)))) / (((int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)121))))));
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (max((var_0), (((/* implicit */unsigned char) var_9))))))), (-2147483628)));
    var_12 = ((((/* implicit */_Bool) min((((var_1) ? (33554430) : (33554431))), (((((/* implicit */_Bool) -2147483635)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_4)))))) : (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))));
}
