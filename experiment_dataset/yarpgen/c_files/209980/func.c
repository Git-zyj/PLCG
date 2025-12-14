/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209980
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
    var_13 = ((/* implicit */signed char) max(((short)-8717), (((/* implicit */short) (unsigned char)0))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_14 *= ((/* implicit */signed char) min(((~(((/* implicit */int) max((var_8), (arr_0 [i_0])))))), (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (short)-11155)))))));
        var_15 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (short)-8696)) ? (((/* implicit */int) (short)-8675)) : (((/* implicit */int) (short)-24636)))) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_16 = ((/* implicit */unsigned short) (+((+((~(((/* implicit */int) (short)8665))))))));
    }
    for (short i_1 = 2; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_17 += ((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1 + 1] [(signed char)13]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8743))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) : (var_7)))))), (((var_3) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [(signed char)7] [(signed char)7])))))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [i_1]))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_1 - 1]))));
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_3 [(unsigned short)0] [i_1]);
    }
}
