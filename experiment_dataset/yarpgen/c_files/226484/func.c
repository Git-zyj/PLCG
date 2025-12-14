/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226484
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
    var_15 *= ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_0))))) * (((((/* implicit */long long int) ((/* implicit */int) (short)27964))) / (var_4))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) / (var_11)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)27982)) : (((/* implicit */int) (short)27983))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-27965)) : (((/* implicit */int) var_0))))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) (short)27982)) * (((/* implicit */int) arr_0 [i_0])))))))))))));
        var_17 = ((/* implicit */signed char) ((long long int) (~(arr_1 [i_0 - 1]))));
        var_18 = ((/* implicit */long long int) var_7);
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((short) var_2))))) && (((/* implicit */_Bool) (-(((0) / (((/* implicit */int) (short)27972)))))))));
}
