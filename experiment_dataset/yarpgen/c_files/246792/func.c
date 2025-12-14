/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246792
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
    var_19 = ((/* implicit */long long int) ((((int) min((((/* implicit */long long int) var_16)), (var_18)))) % (var_8)));
    var_20 = ((/* implicit */long long int) var_12);
    var_21 = min((((/* implicit */short) (((+(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) -4896377605720464461LL)))))))), (var_17));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_16)), ((-9223372036854775807LL - 1LL)))) & (arr_2 [i_0])))) ? ((((_Bool)1) ? (max((((/* implicit */unsigned long long int) var_16)), (var_14))) : (((/* implicit */unsigned long long int) ((arr_1 [(short)2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */unsigned long long int) ((((((int) arr_1 [6])) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) (short)23650)), (8905084022270674329ULL))) - (8905084022270674301ULL))))))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [(signed char)7] [i_1] = ((/* implicit */signed char) (_Bool)1);
        arr_8 [3ULL] = ((/* implicit */int) min((((/* implicit */long long int) var_10)), ((-(arr_6 [i_1])))));
        var_23 = ((/* implicit */signed char) (short)-22419);
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2])), (max((max((var_14), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)16)), (var_8))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */short) var_1);
        arr_15 [i_2] = ((/* implicit */long long int) var_16);
        var_24 = ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23283)));
    }
}
