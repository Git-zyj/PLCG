/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33618
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) arr_8 [i_0] [(unsigned short)8]);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)6403)) <= (((/* implicit */int) (unsigned short)9015))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9015)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_5))))))))));
}
