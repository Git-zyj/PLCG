/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196893
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(signed char)13] [i_1] = arr_4 [i_1 - 2];
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (unsigned short)16576))));
                arr_6 [i_1] [i_1 - 2] = ((/* implicit */signed char) max(((~(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_3 [(short)19])))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) != (((((/* implicit */_Bool) arr_2 [i_1])) ? (534483880U) : (1023U))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (+(var_10)));
}
