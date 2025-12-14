/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230875
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
    var_10 ^= ((/* implicit */long long int) ((short) (-(((((/* implicit */int) var_1)) / (((/* implicit */int) var_8)))))));
    var_11 = ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */int) ((_Bool) (short)-23031))) : (((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 &= ((/* implicit */_Bool) ((long long int) min((((/* implicit */short) var_2)), (min((arr_2 [i_0] [i_0]), (var_0))))));
        arr_3 [i_0] = var_5;
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))), (max((((/* implicit */short) var_2)), (arr_1 [i_0]))))))));
    }
}
