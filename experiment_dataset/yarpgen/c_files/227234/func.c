/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227234
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
    var_15 = ((var_12) << (((((/* implicit */int) var_1)) - (26385))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [i_1])), (var_6)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))));
                        arr_13 [i_0] [i_0] [i_0 + 2] [5] [i_0] [i_0] = (~(((((/* implicit */int) arr_4 [i_0 - 1])) % (((/* implicit */int) var_8)))));
                        var_17 |= arr_3 [i_0] [i_0];
                        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) % (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) arr_12 [i_3 - 1] [i_0] [(unsigned short)2] [i_0])) : (((unsigned int) var_5))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) * (((((/* implicit */_Bool) arr_9 [1LL] [i_0])) ? (15979955573269760624ULL) : (((/* implicit */unsigned long long int) 2888759071U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [2] [2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_3]))) : (var_13)))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) var_0);
        arr_14 [i_0 + 1] = min((var_3), (((/* implicit */unsigned short) var_0)));
    }
}
