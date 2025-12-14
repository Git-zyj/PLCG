/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21331
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
    var_19 = ((/* implicit */short) var_8);
    var_20 += ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_1 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_6 [i_1] [i_1]))));
        var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((var_7) < (((/* implicit */int) (short)9))))))), (((((/* implicit */_Bool) (-(0U)))) ? (min((((/* implicit */unsigned int) 1773329930)), (3970688077U))) : (var_16)))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */unsigned long long int) (-(var_7)))) : ((~(var_3)))))));
    }
}
