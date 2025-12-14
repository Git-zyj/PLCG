/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51270
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
    var_16 = ((/* implicit */short) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_15))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) ? ((((!(((/* implicit */_Bool) 15114256642724301953ULL)))) ? (((((/* implicit */_Bool) arr_1 [(short)9])) ? (var_2) : (arr_0 [i_0] [i_0]))) : (min((var_8), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (15114256642724301936ULL)));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] [i_1] = var_3;
            arr_7 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        }
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_8 [i_2] [i_2]))))));
        var_21 = arr_9 [i_2];
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((((/* implicit */_Bool) -4562345562936099654LL)) ? (arr_9 [i_2]) : (var_2))) : (min((-4562345562936099654LL), (((/* implicit */long long int) arr_8 [i_2] [i_2]))))));
    }
}
