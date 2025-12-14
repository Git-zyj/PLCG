/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216470
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3932005034U)) ? (((/* implicit */int) ((var_17) <= (((/* implicit */unsigned long long int) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_4))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) 4294901760U))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_19 *= ((/* implicit */unsigned int) arr_4 [i_2]);
                    arr_8 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((var_7), (((/* implicit */unsigned long long int) var_1)))), ((+(12ULL)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (var_9))) : ((~(arr_6 [i_0] [i_1 + 1] [i_1] [i_1 - 1])))));
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_5 [i_1 + 1] [i_0]))))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) -6031232044955199537LL)))))) : (((((/* implicit */_Bool) 3374342092U)) ? (var_14) : (1912880026U)))))) ? ((-(((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))) : (((/* implicit */long long int) (-(var_2))))));
    }
}
