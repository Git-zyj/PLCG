/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245069
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
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_17 = (+(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_0 [i_0 + 4]))));
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53450)) || (((/* implicit */_Bool) -9223372036854775795LL)))))));
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((-(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)33113))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) : (5749546628268792084LL)))) ? (max((((/* implicit */long long int) var_4)), (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33118))) % (arr_1 [19ULL])))))), (((/* implicit */long long int) max((((var_5) - (3882698325U))), (arr_1 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_5 [(short)7] = ((/* implicit */_Bool) (-((-(((((arr_0 [i_1]) + (9223372036854775807LL))) >> (((/* implicit */int) var_13))))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_4))))));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21731)) ? (((/* implicit */unsigned int) 1)) : (min((((((/* implicit */_Bool) 767744023)) ? (412268966U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15)))))))));
}
