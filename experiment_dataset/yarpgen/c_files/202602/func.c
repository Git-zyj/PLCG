/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202602
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_17 *= max((3535444932U), (((/* implicit */unsigned int) (short)-28297)));
        var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-28297)) == (((/* implicit */int) arr_1 [i_0])))))) < (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_12)))));
        arr_3 [6LL] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) arr_1 [i_0])), (var_6))), (((/* implicit */unsigned short) var_16))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_3) : (var_11)))) ? (((18446744073709551601ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28285))))) : (arr_2 [i_0])))));
        var_19 = ((/* implicit */short) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) min((((/* implicit */short) var_0)), ((short)28291)))) : ((+(((/* implicit */int) (short)26155)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (var_7)))), (arr_6 [i_1]))))));
        var_21 = ((/* implicit */unsigned int) var_1);
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (-4771950120913402090LL)))), (((17247551938494806115ULL) << (((((int) var_16)) - (7018))))))))));
    }
    var_23 = ((/* implicit */short) var_12);
    var_24 = ((/* implicit */int) ((var_12) || (((/* implicit */_Bool) var_14))));
    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (min((((/* implicit */unsigned long long int) var_1)), (min((((/* implicit */unsigned long long int) (short)-28297)), (var_9))))))))));
}
