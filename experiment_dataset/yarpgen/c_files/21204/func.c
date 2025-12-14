/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21204
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
    var_11 = -5LL;
    var_12 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned char) var_9);
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (5LL)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            var_15 = var_6;
            var_16 ^= ((/* implicit */unsigned char) var_8);
            arr_5 [(unsigned short)5] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) == (min((arr_0 [i_0]), (arr_0 [i_0])))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */int) arr_3 [10U] [i_0] [(short)10])) <= (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 - 1]))))), ((signed char)-6)));
    }
    var_17 = ((/* implicit */long long int) min((((((((/* implicit */int) var_10)) << (((var_1) + (5510742604044637062LL))))) >> (((((((/* implicit */int) var_3)) << (((((var_0) + (2952610364624355300LL))) - (12LL))))) - (70623216))))), (((/* implicit */int) var_7))));
}
