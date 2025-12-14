/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28013
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
    var_15 = ((/* implicit */signed char) max((((/* implicit */int) var_0)), (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13325)))) - ((-(((/* implicit */int) (unsigned char)23))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)-22);
                    var_16 &= ((/* implicit */unsigned char) arr_0 [i_1]);
                    var_17 = ((/* implicit */_Bool) (unsigned char)244);
                }
            } 
        } 
        var_18 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (short)-30713)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) var_3))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0 + 1] [i_0])))) ^ (((((/* implicit */_Bool) arr_5 [7] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0]))) : (var_4)))));
    }
    var_20 = ((/* implicit */_Bool) (unsigned char)159);
    var_21 = ((/* implicit */int) ((((((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (var_9)))) <= (var_3))) ? (((((/* implicit */_Bool) 16252928LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (var_11))))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
