/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50673
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
    var_12 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((long long int) 719664719U)) : (((/* implicit */long long int) 3476162641U))))));
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (-1021392392176477900LL) : (var_4)));
    var_14 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_1] [11U] [11U] &= ((/* implicit */unsigned long long int) arr_3 [i_1 - 2]);
                arr_7 [(short)1] [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2]))))));
            }
        } 
    } 
}
