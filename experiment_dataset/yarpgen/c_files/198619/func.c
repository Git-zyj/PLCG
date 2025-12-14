/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198619
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
    var_20 = ((/* implicit */unsigned long long int) var_0);
    var_21 = ((/* implicit */_Bool) (+(((var_8) ? (((/* implicit */int) (_Bool)1)) : (-316637199)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_22 = (~(-316637192));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1518114967)) ? (1883777575223615332ULL) : (14472067747335192702ULL)));
        var_23 = ((/* implicit */signed char) var_15);
        arr_4 [(_Bool)1] [i_0] = var_13;
    }
    var_24 = ((/* implicit */unsigned int) (-((-((((_Bool)1) ? (12640277247553267766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
}
