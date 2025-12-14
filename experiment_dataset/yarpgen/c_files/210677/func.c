/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210677
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) + (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) arr_2 [i_1] [(unsigned short)2])) : (arr_3 [i_1])))) ? (min((((/* implicit */long long int) var_12)), (arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13752281065216094831ULL))))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))))), (var_9)));
                    var_16 ^= ((/* implicit */unsigned int) arr_0 [i_1]);
                    var_17 = ((/* implicit */long long int) var_8);
                }
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) arr_4 [1LL] [i_0] [i_0])) - (arr_1 [i_0] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_1))))) ^ (((unsigned long long int) arr_0 [i_0 + 2])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_5 [i_0]))))))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) var_10))));
}
