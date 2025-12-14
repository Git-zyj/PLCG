/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197108
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) (~(((((((/* implicit */int) (short)-32756)) + (2147483647))) >> (((3717437821411736546LL) - (3717437821411736529LL)))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21640))) * (((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [i_1] [i_0])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21641))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_1);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (9223372036854775807LL)))) + (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -897772900)))))) : (((/* implicit */unsigned long long int) ((int) max((8442761307349299550LL), (((/* implicit */long long int) var_1))))))));
}
