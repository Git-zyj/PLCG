/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229934
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) (short)5557))) / (3198655714902593571LL)))));
        var_15 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) 3198655714902593545LL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))))) % (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        var_16 = ((/* implicit */long long int) (-((~(((/* implicit */int) ((arr_3 [(short)8] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))))))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_17 = ((/* implicit */int) arr_0 [i_0]);
    }
    var_18 = ((/* implicit */long long int) 2673946345U);
}
