/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29991
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((((unsigned long long int) arr_1 [i_0 + 4])) >> (((/* implicit */int) ((var_11) != (((/* implicit */unsigned int) arr_0 [i_0 - 2]))))));
                arr_5 [i_0 + 3] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((arr_0 [i_0 + 4]) < (arr_0 [i_0 + 3])))) / (((/* implicit */int) ((signed char) arr_0 [i_0 + 4])))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (short)28050)), (((unsigned long long int) 2147483640)))) * (((/* implicit */unsigned long long int) ((int) max((var_4), (((/* implicit */unsigned short) arr_3 [i_1] [i_0])))))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_16))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
