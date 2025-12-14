/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195830
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
    var_17 = ((/* implicit */_Bool) (-((-(var_13)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))));
        var_19 *= ((/* implicit */_Bool) (+((~((-(((/* implicit */int) var_1))))))));
        var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(var_12)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_14)))), ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_21 *= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) arr_3 [i_1])) : (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)10] [i_1])))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1])), (var_15)))))))));
        arr_4 [i_1] [i_1] = min((((var_4) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [20ULL]))) : (var_3))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_16)) ? (-4605944614375913302LL) : (((/* implicit */long long int) -219970981)))))) << (((min((max((arr_5 [i_1]), (arr_5 [i_3]))), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_4])))) - (53560363455185409ULL))))))));
                        arr_13 [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_4]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max(((-(arr_3 [i_2]))), (((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_2])))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 = (~(max((((/* implicit */long long int) min((arr_9 [i_1] [i_1] [i_5]), (arr_11 [i_1] [i_1] [i_1])))), ((-(arr_17 [i_1] [i_1] [5U]))))));
            var_25 *= ((/* implicit */_Bool) max(((~(arr_7 [i_1] [i_5] [i_5] [21U]))), (min((arr_7 [i_1] [(_Bool)1] [i_5] [i_5]), (arr_7 [i_1] [i_1] [i_1] [i_5])))));
        }
        var_26 *= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))) & (((((/* implicit */unsigned long long int) arr_3 [i_1])) | (arr_5 [i_1]))))), (((/* implicit */unsigned long long int) max((arr_17 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_16 [i_1])))))));
    }
}
