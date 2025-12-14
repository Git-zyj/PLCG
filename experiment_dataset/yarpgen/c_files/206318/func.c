/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206318
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((131071ULL) + (arr_1 [i_1 - 1])))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(var_9)))))) ? (((unsigned long long int) ((unsigned int) arr_0 [12LL]))) : (((/* implicit */unsigned long long int) var_9))));
                    var_14 = ((/* implicit */unsigned short) max((arr_0 [i_0]), ((-(((((/* implicit */_Bool) arr_1 [(unsigned short)9])) ? (131078ULL) : (((/* implicit */unsigned long long int) 5079211716481821221LL))))))));
                    arr_8 [(_Bool)1] [i_0] = ((/* implicit */long long int) arr_3 [i_1]);
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) 131078ULL);
        var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 1298957298U)) ? (((/* implicit */unsigned int) arr_2 [8U] [i_0 + 1])) : (arr_3 [3ULL]))));
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) max((arr_0 [i_0 - 3]), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) <= (arr_1 [i_0])))))));
    }
    var_17 = ((/* implicit */unsigned int) var_0);
    var_18 = ((/* implicit */short) (-(max(((-(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) 18446744073709420537ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)23671))))))));
}
