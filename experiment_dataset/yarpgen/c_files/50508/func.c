/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50508
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 4] = ((/* implicit */signed char) (-(4294967295U)));
        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_19))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */int) (-(arr_4 [0LL])));
        var_22 ^= ((/* implicit */unsigned int) arr_1 [i_1 + 2] [i_1 - 1]);
    }
    var_23 = ((/* implicit */unsigned long long int) (-(var_0)));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 3; i_2 < 24; i_2 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -647192986264333523LL)) ? (((/* implicit */int) var_11)) : (0))))))), (max((((/* implicit */int) (unsigned short)14130)), (((((/* implicit */_Bool) arr_7 [i_2])) ? (28) : (((/* implicit */int) (_Bool)1))))))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_7 [i_2]))));
        var_27 -= ((/* implicit */signed char) ((unsigned long long int) ((_Bool) arr_7 [i_2 + 1])));
    }
    var_28 = ((/* implicit */_Bool) var_1);
}
