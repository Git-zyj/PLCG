/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/358
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
    var_19 = var_9;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [11ULL] = min(((~(var_3))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [(_Bool)1]) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1223425657744553420ULL))))));
        arr_4 [i_0] = 707218166;
        arr_5 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */int) (signed char)-112)) == (((/* implicit */int) (signed char)98))));
    }
    var_20 = ((/* implicit */signed char) 17223318415964998196ULL);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) 2250628015U))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_1)) - (17688)))))) ? (max((17223318415964998196ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
}
