/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41531
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
    var_12 = min((((/* implicit */unsigned int) var_10)), ((+((+(3591631708U))))));
    var_13 = ((/* implicit */_Bool) ((unsigned char) ((long long int) (-(((/* implicit */int) var_8))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (1679947029U)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_2 [i_0])))))) ? ((~(min((((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [i_0 - 1])), (arr_2 [i_0 - 1]))))) : (10312746044894747839ULL)));
        arr_4 [i_0] = max((max((arr_2 [i_0 - 2]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])))), (max((arr_2 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1])))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (+((~(arr_1 [i_0]))))));
        arr_6 [(short)5] [i_0 - 2] = ((/* implicit */unsigned short) 144115188075855871ULL);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (arr_9 [i_1] [i_1]) : (arr_9 [i_1] [i_1])))));
        arr_11 [i_1] = ((/* implicit */short) min(((-(max((18302628885633695724ULL), (((/* implicit */unsigned long long int) (unsigned char)14)))))), ((~(18302628885633695724ULL)))));
    }
    var_14 = ((/* implicit */int) var_2);
    var_15 = ((/* implicit */signed char) ((int) var_1));
}
