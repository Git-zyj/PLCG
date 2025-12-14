/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53014
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
    var_13 *= ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_1)) * ((+(((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
        {
            arr_7 [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0] [i_1])) - (29610)))));
            var_14 = ((/* implicit */short) (_Bool)1);
        }
        for (short i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_2 - 2] = ((/* implicit */unsigned long long int) var_0);
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(arr_4 [i_2 - 1] [i_2]))))));
        }
        for (short i_3 = 2; i_3 < 14; i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [10U] [10U])) : (((/* implicit */int) arr_6 [i_0] [i_3 - 1]))))), (((arr_6 [i_0] [i_3]) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
            var_16 = ((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_3])), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1284693437U)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 1]))))));
        }
        var_17 = (!(((/* implicit */_Bool) 8589934591ULL)));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((_Bool) var_12)))));
}
