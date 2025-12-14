/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31359
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 0ULL)))))))), (var_1)));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (6ULL))))) + (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [7ULL])) : (299833528426549789ULL)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [(unsigned short)20] [i_0])) ? (((((/* implicit */_Bool) 1993307647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) : (arr_0 [i_0] [(unsigned short)12]))) : ((~(2965650132U)))))));
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1533968081U))));
        arr_4 [i_0] = (((_Bool)0) ? (-1993307640) : (44315946));
    }
    var_21 = ((/* implicit */short) var_5);
}
