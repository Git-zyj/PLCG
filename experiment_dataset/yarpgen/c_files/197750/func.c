/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197750
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)21590)) ? (-6739968916941332436LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21577))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */int) var_11)))) - (((/* implicit */int) var_3))))))))));
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) (short)21896));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)9454)) : (((/* implicit */int) (_Bool)1))))))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) ((_Bool) 5262768958906720633LL))) : (((/* implicit */int) ((unsigned short) (unsigned char)73))))))));
        arr_2 [15U] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_0]));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_0 [i_0] [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [i_1]))))));
        arr_5 [i_1] [(short)10] &= ((/* implicit */short) (+((-(((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_14)))))));
        var_21 *= ((/* implicit */unsigned char) max((var_8), (((/* implicit */long long int) (_Bool)1))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [i_2] &= ((/* implicit */unsigned char) (((+(arr_0 [i_2] [i_2]))) % (((/* implicit */unsigned long long int) arr_8 [i_2]))));
        arr_10 [(unsigned char)1] = (-(((((((/* implicit */_Bool) arr_4 [(short)8] [i_2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (((/* implicit */long long int) max((var_13), (327260900)))))));
    }
}
