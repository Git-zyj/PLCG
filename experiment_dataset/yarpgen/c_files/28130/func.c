/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28130
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) var_9);
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) arr_1 [i_0 - 1]))));
    }
    var_11 = ((/* implicit */int) ((short) ((unsigned int) var_9)));
    var_12 = ((/* implicit */unsigned int) (short)-10673);
    /* LoopSeq 1 */
    for (short i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) (((-(arr_6 [i_1] [i_1]))) != (((/* implicit */long long int) var_7))))) % (((int) ((var_3) ? (6381630976535415902LL) : (((/* implicit */long long int) var_0))))))))));
        var_14 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10672)) || (((/* implicit */_Bool) max((arr_6 [i_1 + 1] [(unsigned char)2]), (((/* implicit */long long int) var_3)))))))), (max((((/* implicit */unsigned long long int) ((signed char) arr_6 [i_1] [i_1]))), (var_6)))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10675)) ? (3117008824105163931ULL) : (((/* implicit */unsigned long long int) min((508363060U), (3987965321U))))));
}
