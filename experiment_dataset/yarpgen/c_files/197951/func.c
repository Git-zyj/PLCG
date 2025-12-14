/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197951
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(var_7)))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_3))) : (((/* implicit */unsigned long long int) var_7)));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_12)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_14)))))) ^ ((-(18446744073709551613ULL)))));
                        arr_11 [9LL] [i_1] [3LL] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) & (((min((var_5), (var_6))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))))))));
                        arr_12 [i_0 - 3] [i_1] [i_0] [i_3] = min((min((((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))), (min((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_13))))), (min((var_7), (((/* implicit */long long int) var_13)))))));
                        arr_13 [i_0] [i_0] [(short)0] = ((/* implicit */signed char) (((_Bool)1) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)153)), (((1953904420U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        var_17 += ((max((var_2), (((/* implicit */unsigned long long int) var_11)))) | (((/* implicit */unsigned long long int) (+(var_8)))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) var_3);
}
