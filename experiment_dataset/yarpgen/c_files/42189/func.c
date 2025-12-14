/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42189
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_0]);
                arr_6 [i_0] = max(((~(((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_4 [4ULL] [i_0]))))), (((/* implicit */unsigned long long int) (unsigned short)19)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min(((-(max((((/* implicit */unsigned long long int) var_16)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (!(var_3)))))))));
    var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (21U)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))))));
    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned short)53607)))) > (((/* implicit */int) (!(var_3))))))) ^ ((-((+(((/* implicit */int) (unsigned short)28678))))))));
}
