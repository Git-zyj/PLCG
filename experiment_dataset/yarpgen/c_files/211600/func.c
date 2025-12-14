/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211600
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((min((var_5), (arr_1 [i_0]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))))))));
        arr_2 [14U] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((unsigned char) (unsigned short)44240))) * (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) arr_0 [i_0])) * ((-(((/* implicit */int) arr_0 [14U]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned char) 3442014010U));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) var_18);
        arr_7 [i_1] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_6)));
    }
    var_21 = ((/* implicit */int) var_8);
    var_22 = ((/* implicit */unsigned int) ((852953282U) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
    var_23 |= (signed char)108;
    var_24 = ((/* implicit */unsigned char) var_4);
}
