/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230316
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((arr_1 [i_0] [i_0]) > (arr_1 [11LL] [i_0])))), (((long long int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [(short)0] = ((/* implicit */signed char) (+((+(((/* implicit */int) ((((/* implicit */int) (short)21286)) == (2147483634))))))));
        arr_4 [i_0] = ((/* implicit */int) var_3);
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((int) ((signed char) arr_1 [(short)17] [(short)17]))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_9 [(short)8] [(short)8] = var_7;
        arr_10 [i_1] = ((/* implicit */short) ((long long int) 2147483644));
    }
    var_18 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) (short)21289))));
    var_19 = ((/* implicit */int) max(((~(max((((/* implicit */unsigned int) var_10)), (var_9))))), (((/* implicit */unsigned int) ((int) (short)-8920)))));
}
