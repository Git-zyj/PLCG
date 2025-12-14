/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41903
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
    var_17 = ((/* implicit */unsigned char) var_11);
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) -1969809067)) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : ((~(((/* implicit */int) min((((/* implicit */short) var_3)), (var_6))))))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((short) arr_2 [i_0])))));
        var_20 = -1969809067;
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_21 ^= ((/* implicit */long long int) -1);
        var_22 *= ((/* implicit */unsigned long long int) 1969809066);
        var_23 += ((/* implicit */unsigned short) -1);
        var_24 = ((/* implicit */unsigned char) arr_5 [(unsigned char)18]);
    }
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        var_25 = ((/* implicit */signed char) (unsigned char)225);
        var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
        var_27 = ((/* implicit */unsigned char) var_14);
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 255LL)) ? (arr_9 [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))))))))));
    }
}
