/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202224
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(short)9] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0])) + (2147483647))) >> (((min((((/* implicit */int) arr_3 [i_0])), (arr_1 [i_1]))) + (38)))));
                var_20 = ((/* implicit */short) arr_0 [i_1]);
                arr_6 [(_Bool)1] = ((/* implicit */int) (-(min((((arr_2 [(unsigned short)6] [i_1]) - (((/* implicit */unsigned long long int) 2620185122U)))), (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
                arr_7 [2] = ((/* implicit */short) (-((+((+(arr_1 [i_1])))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */_Bool) -1);
}
