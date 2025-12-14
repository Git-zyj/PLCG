/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198567
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
    var_10 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_8)) - (((/* implicit */int) var_3))))));
    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) <= (((/* implicit */int) var_7)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_7))))) == (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))) >= (((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((/* implicit */int) var_1);
        var_14 = ((/* implicit */unsigned char) var_6);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_1]))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (32767ULL)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_3))));
        var_16 = ((/* implicit */long long int) (+(18446744073709518848ULL)));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
        var_18 = ((/* implicit */int) arr_0 [i_2]);
    }
    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((int) (!(((arr_3 [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_0 [i_3])) : (((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((unsigned char) arr_4 [i_3 - 1] [i_3])))));
    }
}
