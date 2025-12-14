/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19035
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_10))) ? (((unsigned long long int) (+(((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_14 = var_4;
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_1))));
    var_16 = ((/* implicit */_Bool) max((((/* implicit */short) min((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 6507223133892155606LL)))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1))))))), (var_8)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [(signed char)8] = ((/* implicit */signed char) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6507223133892155599LL)) ? (((/* implicit */int) (short)19537)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */int) (short)-19533)) * (((/* implicit */int) arr_1 [(unsigned char)0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) (signed char)127);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_1]))))) > (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1 - 2]))))) : (max((var_1), (((/* implicit */unsigned int) (unsigned char)53))))))));
        var_18 |= ((/* implicit */unsigned short) max((arr_1 [i_1]), ((!(((/* implicit */_Bool) (-(2235113116U))))))));
    }
}
