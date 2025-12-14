/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26115
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] |= ((/* implicit */unsigned short) min((19ULL), (((/* implicit */unsigned long long int) (signed char)-32))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (max((((/* implicit */long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_14))))), (arr_3 [i_1] [i_1] [i_1])))));
                    var_15 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(0)))) != (arr_2 [(short)11])))), (((0U) + (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_1])))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (+(4294967278U)));
}
