/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36618
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = var_0;
        arr_2 [11LL] = ((/* implicit */signed char) ((((max((var_15), (((/* implicit */int) arr_1 [i_0] [i_0])))) + (2147483647))) >> (((((/* implicit */int) var_7)) - (100)))));
        var_17 = ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), ((signed char)-18)));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (6962004266185115959LL)))) ? (var_5) : ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))));
    var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min(((signed char)-121), ((signed char)-14)))) ? (((long long int) var_9)) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-29)))))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((var_14) + (max((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))))))))))));
}
