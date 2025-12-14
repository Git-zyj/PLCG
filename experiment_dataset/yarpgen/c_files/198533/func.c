/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198533
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */int) max(((-(((((/* implicit */_Bool) 0U)) ? (var_10) : (var_12))))), ((((+(var_13))) & (((/* implicit */unsigned long long int) arr_3 [22U] [14]))))));
                    var_14 = ((/* implicit */signed char) 1860656590777266430ULL);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((unsigned int) 18446744073709551611ULL)) >> (((var_12) - (1052079738857001064ULL)))))) ? ((~((~(16796430752395643475ULL))))) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) ((short) var_4))))))));
    var_16 = ((/* implicit */short) var_4);
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned int) -1537205905)) ^ (4294967295U))), (((/* implicit */unsigned int) ((short) 791543748))))))));
    var_18 = ((/* implicit */unsigned long long int) max((1679697923), (((/* implicit */int) ((((/* implicit */_Bool) 34359705600ULL)) || (((/* implicit */_Bool) 0ULL)))))));
}
