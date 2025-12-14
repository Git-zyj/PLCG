/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41898
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)0)), (-2136900732779743823LL)));
    var_21 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */int) var_18);
        var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_11)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 - 4]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [14ULL] [14ULL])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : (arr_1 [i_0])))) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
        var_23 = ((/* implicit */unsigned long long int) ((2411235045U) >> (((589050702U) - (589050695U)))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        for (int i_2 = 2; i_2 < 6; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    arr_15 [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 2411235044U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned short) 18446744073709551593ULL))))) : ((+(max((var_11), (((/* implicit */unsigned long long int) var_12))))))));
                    var_24 = min((((((var_14) | (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) ^ (((((/* implicit */_Bool) arr_9 [i_2 + 3])) ? (((/* implicit */unsigned int) var_5)) : (arr_12 [i_1]))))), (((((/* implicit */_Bool) (signed char)-51)) ? (1883732250U) : (4294967284U))));
                    var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */unsigned int) arr_2 [i_3] [i_3])) : (arr_12 [i_1])))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_19)) : ((~(((/* implicit */int) arr_7 [i_1])))))))));
                    arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) var_13)) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))));
                }
            } 
        } 
    } 
}
