/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191930
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && ((!(((/* implicit */_Bool) var_4))))));
        var_11 |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 3336820236U)))))) * (((((/* implicit */int) (!(var_5)))) - (((/* implicit */int) arr_0 [i_0 + 2]))))));
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((int) ((((/* implicit */int) arr_0 [i_0 + 2])) * (((/* implicit */int) arr_0 [i_0 + 1]))))))));
        arr_3 [i_0] = ((/* implicit */int) (-(max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1 + 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-37))));
        arr_7 [i_1 - 2] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
    }
    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)202))));
}
