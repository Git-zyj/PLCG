/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39795
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) var_0);
                    var_20 &= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((arr_2 [7]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13756)))))), (7000754270415589165ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2])))) + (((arr_8 [(short)6] [i_1] [i_2]) << (((((((/* implicit */int) arr_5 [i_0] [i_0 - 1])) + (90))) - (4))))))))));
                    var_21 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 2]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((5ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
}
