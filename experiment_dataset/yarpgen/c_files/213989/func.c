/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213989
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
    var_19 = ((/* implicit */long long int) var_14);
    var_20 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
    var_21 |= ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_22 = ((((/* implicit */int) (short)-30697)) | (((/* implicit */int) (!(((/* implicit */_Bool) max((62U), (((/* implicit */unsigned int) (short)2582)))))))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((-7098920150165648663LL) / (((/* implicit */long long int) 3155340504U))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 384615918)) && (((/* implicit */_Bool) 2559961371U)))))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (arr_0 [i_0])))) * (arr_1 [i_0 + 2] [18U])))));
        arr_4 [i_0] = var_4;
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) 16776192U)) ? (((/* implicit */int) (short)-2277)) : (((/* implicit */int) (short)25555)))))))))));
    }
}
