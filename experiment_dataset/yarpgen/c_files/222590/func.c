/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222590
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
    var_19 = min((var_14), (((/* implicit */unsigned long long int) var_7)));
    var_20 = var_15;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_21 = arr_1 [i_0];
        var_22 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (signed char i_1 = 4; i_1 < 12; i_1 += 4) 
    {
        var_23 -= min((max((min((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 + 2])))), (((arr_3 [i_1]) & (arr_4 [i_1]))))), (min((arr_3 [i_1 + 2]), (arr_3 [i_1 - 3]))));
        arr_5 [(unsigned char)3] [10ULL] = ((/* implicit */unsigned char) arr_3 [i_1 - 1]);
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1 - 4]);
        arr_7 [(unsigned char)5] [i_1] = ((/* implicit */unsigned char) arr_3 [i_1 - 3]);
    }
    var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned char) var_7)))))))), (max((var_8), (var_2)))));
}
