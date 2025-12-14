/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245531
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
    var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-6140), (((/* implicit */short) var_1)))))) : (min((((/* implicit */unsigned int) (unsigned char)170)), (1446569906U))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_1]);
                    var_21 = ((/* implicit */long long int) min((var_21), (max((min((min((arr_3 [i_0] [i_0] [i_2]), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [6LL])), (4294967295U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)86)))))))));
                    var_22 &= ((/* implicit */short) ((((/* implicit */long long int) var_17)) / (var_4)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_2);
}
