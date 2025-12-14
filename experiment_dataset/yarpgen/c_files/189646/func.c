/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189646
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((var_4) - (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_9), (((/* implicit */short) var_1))))), (max((var_10), (var_10))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned int) var_10);
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 - 1]) == (arr_0 [i_0 - 1] [i_0 - 1]))))));
        var_13 |= max((((/* implicit */unsigned int) (((+(((/* implicit */int) var_5)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])))))))), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0 - 1]))));
        var_14 *= (-((-(arr_0 [i_0] [i_0 - 1]))));
        var_15 &= min((((/* implicit */unsigned long long int) max((arr_0 [7ULL] [(short)2]), (((/* implicit */unsigned int) var_1))))), (min((min((arr_1 [i_0]), (var_6))), (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [(_Bool)1])) : (arr_1 [(short)10]))))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_5 [i_1] = arr_1 [i_1];
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_16 = max(((~((~(arr_3 [i_3] [i_1]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(unsigned short)3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))) : (((5533756347656693115ULL) ^ (2614479198159878293ULL))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_6 [i_1])), ((~(arr_1 [i_1]))))), (arr_1 [i_1]))))));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_2]))));
                    arr_12 [i_1] [i_2] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) var_9))))), (min(((~(arr_9 [i_1] [i_2] [i_3] [i_2]))), (((/* implicit */unsigned long long int) arr_4 [i_1]))))));
                }
            } 
        } 
    }
}
