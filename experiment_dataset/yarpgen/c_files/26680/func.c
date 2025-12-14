/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26680
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
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */int) (short)-31462))))) / (max((var_7), (((/* implicit */unsigned long long int) var_1)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)51537), ((unsigned short)13998)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (10ULL)))) ? (((/* implicit */int) (unsigned short)13998)) : (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_12))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_13)) <= ((-(((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned int) 1049236454)) : (3246799429U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((var_0), (((/* implicit */unsigned long long int) (short)-853))))))));
        var_21 = ((/* implicit */unsigned long long int) var_1);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(16345766155470692273ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)14002)))) : ((-(((/* implicit */int) arr_0 [i_0])))))) + (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) var_2);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1 - 1]);
        var_22 -= ((/* implicit */unsigned int) ((arr_6 [4LL] [4LL]) <= (((arr_6 [i_1] [2ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
    }
    var_23 = ((/* implicit */unsigned short) var_9);
    var_24 = ((/* implicit */short) var_0);
}
