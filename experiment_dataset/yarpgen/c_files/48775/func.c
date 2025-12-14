/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48775
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (((!(((/* implicit */_Bool) ((var_9) & (var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1750432177)) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123)))))) : (var_7))))));
    var_18 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3812511328894769908LL)) ? (var_3) : (((/* implicit */unsigned long long int) -9223372036854775790LL))))) || (((((/* implicit */_Bool) -3812511328894769923LL)) || (((/* implicit */_Bool) var_16)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && ((_Bool)1))))) : (((((/* implicit */_Bool) var_9)) ? (4503599627239424LL) : (((/* implicit */long long int) -1414869511))))))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((_Bool)1) ? (8191LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_8 [8U] [i_0]);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) 4503599627239418LL);
                }
            } 
        } 
    } 
}
