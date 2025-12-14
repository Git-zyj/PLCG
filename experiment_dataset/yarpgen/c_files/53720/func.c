/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53720
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
    var_11 = ((unsigned short) max((var_7), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))));
        arr_5 [i_0] = ((((var_7) % (arr_3 [i_0] [(signed char)5]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_4))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1])) / (((/* implicit */int) var_0)))))));
        arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)0] [(unsigned char)0]) + (min((10666777044812151245ULL), (((/* implicit */unsigned long long int) (short)14218))))))) || (((/* implicit */_Bool) ((short) arr_8 [i_1])))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) <= (((/* implicit */int) arr_2 [i_1]))))), (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40163))) : (10666777044812151239ULL)))))));
    }
}
