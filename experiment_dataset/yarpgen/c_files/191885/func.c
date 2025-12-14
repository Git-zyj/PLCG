/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191885
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned char) var_17);
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((arr_0 [0ULL]) && (arr_0 [(signed char)6]))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_1 [i_0] [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) var_10))));
        var_22 -= ((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        arr_7 [i_1] = ((((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
    }
    var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2213337079U)) ? (3794803548421498288ULL) : (((/* implicit */unsigned long long int) 2081630224U)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)2169))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned int) (short)-2198)), (var_14))) : (((/* implicit */unsigned int) var_1))))));
    var_24 = (-(var_1));
}
