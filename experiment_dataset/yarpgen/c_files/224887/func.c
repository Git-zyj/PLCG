/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224887
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
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_0 [i_0]));
        var_19 = ((/* implicit */signed char) var_9);
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [i_0 + 3] [i_0]);
        var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 2]);
        var_21 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (3292555724U))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) var_6);
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 3])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_2))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1 + 2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 3])) ? (1002411572U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (arr_5 [i_1 + 1])));
        arr_9 [i_1] = ((/* implicit */long long int) 1722052162);
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned int) (_Bool)1)), (1180934959U))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)63488))) ? (((/* implicit */unsigned long long int) ((4192256U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (max((var_3), (((/* implicit */unsigned long long int) var_8))))))));
    var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) max((-1926512590), (((/* implicit */int) (short)-13611))))) && (((/* implicit */_Bool) var_1)))), (var_10)));
    var_25 = ((/* implicit */_Bool) ((unsigned long long int) var_11));
}
