/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191173
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (min((1648524629U), (((/* implicit */unsigned int) (short)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)46639)) && ((_Bool)1)))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_0 - 1])))))))), (((arr_3 [i_1 - 1]) * (min((((/* implicit */unsigned long long int) var_8)), (arr_3 [i_0]))))))))));
            arr_5 [i_1 - 1] [i_1] = ((/* implicit */_Bool) (((~(arr_3 [i_1 - 1]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))) : (max((((/* implicit */unsigned int) arr_1 [4U])), (var_0))))))));
            var_12 += ((/* implicit */unsigned long long int) var_3);
            var_13 &= ((/* implicit */unsigned long long int) min(((~(var_4))), (((/* implicit */long long int) ((unsigned short) arr_0 [i_0 - 1])))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            var_14 = ((/* implicit */_Bool) arr_0 [i_0]);
            var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) var_4))))));
            var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_8 [i_2 - 1])) : (arr_3 [i_0])))));
        }
    }
    var_17 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) min((var_10), (((/* implicit */short) (_Bool)1)))))))) | (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) 5453154257032801519LL)) ^ (var_7)))))));
}
