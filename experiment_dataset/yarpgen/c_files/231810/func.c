/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231810
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
    var_20 |= ((/* implicit */unsigned short) ((var_3) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_19)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (var_5))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_21 = (+(30ULL));
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64515)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))));
        var_23 |= (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)4] [(signed char)4]))) < (((((/* implicit */_Bool) (unsigned short)64515)) ? (arr_0 [2]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_2 [i_1]))));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (346866601) : (((/* implicit */int) var_11))))) / (((((/* implicit */_Bool) 3836729758U)) ? (-3065661356147863783LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [0U] [0U])))));
        arr_4 [i_1] |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) -822756036)) && (((/* implicit */_Bool) arr_1 [4ULL] [i_1 + 1])))))));
    }
    var_26 |= ((/* implicit */unsigned char) var_18);
    var_27 += ((/* implicit */unsigned char) (_Bool)1);
}
