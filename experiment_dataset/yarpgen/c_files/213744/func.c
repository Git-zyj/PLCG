/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213744
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
    var_16 = ((/* implicit */long long int) ((int) ((short) ((var_15) ? (((/* implicit */int) var_1)) : (var_7)))));
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))));
    var_18 = var_10;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) ((((long long int) arr_1 [i_0])) << (((((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))))) - (138)))));
        var_20 = ((/* implicit */signed char) (_Bool)1);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [(unsigned short)4]);
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(18446744073709551615ULL)));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((((var_8) + (2147483647))) << (((((((/* implicit */int) var_10)) + (9428))) - (5))))) << (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)124)), (arr_1 [i_0])))) - (123)))))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562949953421311ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((var_7) ^ (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))))))))));
    }
}
