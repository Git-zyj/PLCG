/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227395
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
    var_18 = var_9;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 3])) ? (min((16148701000424831014ULL), (2298043073284720601ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */long long int) max((((/* implicit */int) min((arr_1 [i_0 - 3] [i_0 - 1]), (arr_1 [i_0 - 3] [i_0 - 1])))), (((((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 1])) * (((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_5 [i_1 + 1]))));
        arr_6 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 - 2])) * (((/* implicit */int) arr_3 [i_1 - 2]))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
        var_21 = ((/* implicit */signed char) arr_5 [i_1 - 1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned long long int) arr_9 [i_2])))));
        var_23 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_9 [i_2])) | (((/* implicit */int) var_0))))));
    }
    var_24 = var_6;
    var_25 = ((((/* implicit */_Bool) (-((-(var_16)))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_14))));
}
