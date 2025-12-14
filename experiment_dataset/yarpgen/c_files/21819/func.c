/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21819
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
    var_18 |= ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned int) (!(((((/* implicit */int) var_4)) >= (((/* implicit */int) var_11)))))))));
    var_19 = ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 2072924747533272360LL))));
        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (211896400U))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) var_11);
        var_22 = (-(((((/* implicit */_Bool) arr_1 [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_5 [i_1] [i_1]))));
        var_23 = arr_4 [i_1];
        var_24 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
    }
}
