/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216387
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
    var_15 = ((/* implicit */unsigned long long int) var_10);
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 3546496751U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)13373)) > (((/* implicit */int) var_11)))))))))))));
    var_17 = ((/* implicit */unsigned long long int) (~(((long long int) var_4))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12695)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-6)), (var_12)))) : (((/* implicit */int) (short)-13369))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)13348))) != (1287088387372854175LL))))) : (((((/* implicit */_Bool) (short)13381)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (12283862194981057822ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) 3815305236U));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)217)) >> (((((((/* implicit */_Bool) arr_1 [5ULL] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)13382)))) + (25939)))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (short)-13387)), (var_4))), (((((/* implicit */_Bool) var_11)) ? (var_2) : (var_4)))));
        arr_8 [i_1] = var_5;
        arr_9 [(short)3] [i_1] = ((/* implicit */int) ((long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_5))), (((/* implicit */unsigned long long int) var_10)))));
    }
}
