/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54889
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = ((((((((/* implicit */int) arr_1 [i_1])) + (2147483647))) >> (((((/* implicit */int) var_11)) - (242))))) >> (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1])))) + (14555))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) max((2821231075U), (((/* implicit */unsigned int) arr_2 [i_0]))));
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((2821231075U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))))))));
                }
                arr_10 [i_1] = ((/* implicit */long long int) arr_4 [i_0 - 1] [i_1] [i_1]);
            }
        } 
    } 
    var_19 += ((/* implicit */int) min((((/* implicit */long long int) min((max((var_15), (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) < (var_12))))))), (max((max((((/* implicit */long long int) var_13)), (var_1))), (((((/* implicit */_Bool) 6287968471667544143ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
}
