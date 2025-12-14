/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228284
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
    var_18 &= ((/* implicit */int) min((((/* implicit */long long int) var_9)), (var_17)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_19 = (+(((/* implicit */int) ((arr_1 [i_0 - 2]) != (((/* implicit */int) var_12))))));
        arr_3 [22U] &= ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0 - 2])) | ((~(var_2))))) | ((~(((/* implicit */int) arr_2 [i_0 + 1]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (short)-17443))));
    }
    var_20 |= ((/* implicit */long long int) ((((/* implicit */int) var_7)) * (max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_12))))));
    var_21 = ((/* implicit */signed char) (unsigned char)209);
}
