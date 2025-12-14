/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26150
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
    var_17 = ((/* implicit */signed char) ((unsigned int) var_11));
    var_18 = ((/* implicit */int) (~(((((var_10) ? (var_6) : (var_3))) * (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    var_19 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((unsigned char) var_4)))))));
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((signed char) (+(((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (-(((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? ((~((-(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) arr_1 [i_0]))))));
    }
}
