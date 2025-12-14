/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194622
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
    var_16 = ((/* implicit */int) (-(max((min((((/* implicit */long long int) var_9)), (9223372036854775807LL))), (((/* implicit */long long int) var_8))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [5LL] = ((/* implicit */_Bool) (~(max((var_4), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))))));
                    arr_8 [1ULL] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (16297919010765901600ULL))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 1639523996728618554ULL))))), ((+(var_2)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) var_13)) < (9223372036854775807LL)))) ^ (((/* implicit */int) var_12)))))));
}
