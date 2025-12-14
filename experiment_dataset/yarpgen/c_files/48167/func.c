/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48167
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_6))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)51)) && (((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) var_8))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_3]))) ? ((+(7647373968557984601ULL))) : (((/* implicit */unsigned long long int) min((-268435456), (((/* implicit */int) (_Bool)1))))))));
                    var_21 *= ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_2])) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_1] [i_2]) : (((/* implicit */long long int) var_6))))) ? (max((((/* implicit */long long int) 207274611U)), (-6344608359371577027LL))) : (((/* implicit */long long int) max((arr_8 [i_1]), (((/* implicit */int) var_13)))))))));
                }
            } 
        } 
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5)))))) >= (arr_4 [i_1] [i_1]))))) != (((((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_1])), (arr_3 [i_1])))) : (var_11)))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_6)), (max((((/* implicit */long long int) (_Bool)1)), (var_1))))) - (((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (16711680U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_10)))))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_5)))) - (((((/* implicit */int) var_13)) * (((/* implicit */int) var_17)))))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 5267182197056889090LL))))))))))));
}
