/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229193
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((int) (~(((/* implicit */int) ((_Bool) var_10))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (!((_Bool)1)))) << ((((+(-952133502))) + (952133533))))), (((/* implicit */int) (!((_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 7098772U)) : (arr_0 [i_1])))) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 - 2]))));
        arr_5 [i_1] [i_1] = ((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))));
        var_14 ^= ((/* implicit */unsigned int) arr_3 [13U]);
        var_15 = ((/* implicit */_Bool) ((int) ((var_5) & (arr_0 [i_1]))));
        var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 1298805184)) : (var_3))));
    }
    var_17 = ((/* implicit */short) var_11);
    var_18 = ((/* implicit */unsigned long long int) ((signed char) (short)3684));
}
