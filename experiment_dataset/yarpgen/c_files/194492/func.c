/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194492
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) <= (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_2 [i_0])))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 + 1])) : (var_9)))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 402653184ULL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [(short)8]))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_14 = ((/* implicit */long long int) 8283267777813020255ULL);
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((10163476295896531347ULL) & (4044595938568948944ULL)))));
        arr_10 [i_1] [i_1] = ((/* implicit */short) arr_2 [i_1]);
    }
    var_15 = ((/* implicit */long long int) var_0);
    var_16 = ((/* implicit */unsigned int) var_11);
    var_17 = (((~((~(var_5))))) & (((min((((/* implicit */unsigned long long int) 1404710882)), (var_9))) >> (((((/* implicit */int) var_8)) - (1119))))));
}
