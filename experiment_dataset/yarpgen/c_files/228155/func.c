/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228155
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
    var_10 = ((/* implicit */unsigned int) var_4);
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [(_Bool)1] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1581496979657121100ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_1]))))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_2)) > (-1133614445)))))) : (((((/* implicit */int) var_1)) >> (((((var_8) + (103122443655488546ULL))) - (1892486629300224295ULL)))))));
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_3))) / (((/* implicit */int) ((_Bool) 1581496979657121122ULL)))))) ? (arr_5 [i_0] [i_0 - 1] [i_0]) : (((((/* implicit */_Bool) arr_8 [i_1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1] [i_2])))))) : (arr_0 [i_0 - 1])))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) * (((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((var_4) - (12694408324115543514ULL)))))) ? ((+(1581496979657121122ULL))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_2]))))))))));
                }
            } 
        } 
        var_14 |= ((/* implicit */long long int) (+((+(16865247094052430494ULL)))));
        var_15 = ((/* implicit */_Bool) var_7);
        arr_11 [10U] = ((/* implicit */unsigned int) max((arr_2 [i_0 - 1] [i_0 + 1]), (((((/* implicit */_Bool) -1133614466)) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))));
    }
}
