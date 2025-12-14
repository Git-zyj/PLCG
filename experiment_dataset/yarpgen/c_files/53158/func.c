/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53158
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
    var_17 = ((/* implicit */long long int) min((((((var_10) <= (((/* implicit */int) (signed char)127)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (4294967295U)))) : (18446744073709551599ULL))), (((/* implicit */unsigned long long int) ((((long long int) var_7)) * (((/* implicit */long long int) min((var_4), (var_4)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = max((((unsigned long long int) max((((/* implicit */signed char) var_13)), (var_9)))), (((/* implicit */unsigned long long int) max((((long long int) var_2)), (((/* implicit */long long int) min((var_10), (((/* implicit */int) var_16)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) max((arr_0 [(signed char)1]), (arr_0 [8])))) & (min((arr_1 [(short)8]), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_0))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((min((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) > (min((((/* implicit */unsigned int) -1399038718)), (4294967295U)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [2U])))), ((~(((/* implicit */int) (signed char)118))))))) ? ((~(((((/* implicit */int) var_8)) ^ (var_14))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1 + 4] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) <= (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 3]))) : (arr_4 [i_1] [i_1]))))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max(((((-(((/* implicit */int) var_15)))) - (((/* implicit */int) ((short) var_15))))), (((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)1))) >= (((/* implicit */int) ((short) var_8)))))))))));
        var_21 = ((/* implicit */unsigned long long int) max((((signed char) max((((/* implicit */unsigned long long int) var_6)), (arr_4 [i_1] [i_1])))), (min((arr_5 [i_1 + 4]), (((signed char) 65203037U))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_8))) < (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) 3820576533721789199ULL)) ? (((((/* implicit */long long int) 1U)) / (-8647242546704390241LL))) : (((/* implicit */long long int) 4229764259U)))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 3; i_4 < 9; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) var_7);
                    var_24 *= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (-421692424) : (((/* implicit */int) (signed char)127))))) || (((/* implicit */_Bool) (unsigned short)57428)))));
                }
            } 
        } 
    }
}
