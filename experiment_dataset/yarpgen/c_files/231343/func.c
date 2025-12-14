/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231343
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
    var_13 = ((((/* implicit */_Bool) ((((var_2) / (var_9))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)))) ? (((/* implicit */unsigned long long int) var_0)) : (((var_7) & (var_11))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)2]))))) / (((/* implicit */int) arr_1 [9] [i_0]))))) ? ((-((+(arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_14 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (arr_2 [i_0])))) && ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])))))))));
    }
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51040)) ? (((/* implicit */int) (unsigned short)51045)) : ((-(((/* implicit */int) ((var_2) <= (5966469278875138832ULL))))))));
}
