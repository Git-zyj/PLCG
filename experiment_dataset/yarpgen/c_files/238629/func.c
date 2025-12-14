/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238629
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
    var_16 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((((long long int) arr_4 [5LL] [i_2] [(unsigned char)21])), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_1] [18LL]))))))))));
                    arr_7 [i_2 + 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_2]))) & (var_13)))) ? ((~(arr_6 [i_0 + 3] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) (unsigned char)79)))))))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3470)) ? (max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1] [i_2])), (arr_3 [i_0] [i_1] [i_0]))) : (((/* implicit */long long int) (~((-2147483647 - 1)))))))) ? (((/* implicit */int) ((_Bool) 2790833611523242124LL))) : ((~(((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_10);
}
