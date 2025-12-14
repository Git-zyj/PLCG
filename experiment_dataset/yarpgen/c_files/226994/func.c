/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226994
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) min((var_13), (var_2)));
        var_14 = ((/* implicit */short) ((arr_2 [i_0 - 1] [i_0 - 2]) / (((/* implicit */int) var_12))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (unsigned char)251);
        var_16 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_1])))) : (276581768))));
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 - 1]))));
    }
    var_18 = ((/* implicit */signed char) (unsigned char)3);
    var_19 = ((/* implicit */short) var_5);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((var_6) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) 884016345U)) ? (9007198986305536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_3))));
}
