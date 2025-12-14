/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228978
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
    var_18 = ((/* implicit */short) 1241846358U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (var_14) : (((/* implicit */int) arr_1 [i_0]))));
        var_20 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (-2147483629) : (((/* implicit */int) arr_1 [i_0])));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63416)) ? (((((/* implicit */_Bool) 65408)) ? (1056964608U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (3238002676U)));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_17)) << (((((((/* implicit */int) arr_0 [i_1])) + (47))) - (18))))));
        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) / (var_10)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) max(((((-2147483647 - 1)) ^ (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) arr_4 [i_1])))));
    }
    var_23 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_13)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (var_11) : (((/* implicit */int) (unsigned short)2120))))) ? (min((((/* implicit */long long int) 1193190223U)), (0LL))) : (((/* implicit */long long int) ((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
    var_24 = ((/* implicit */unsigned char) (unsigned short)2119);
}
