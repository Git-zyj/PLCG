/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244562
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
    for (short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_2] [i_1] [i_0 - 1] = ((/* implicit */signed char) var_11);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)32762)), (var_3)))) ? (((((var_3) + (9223372036854775807LL))) >> (((-7362784529473406993LL) + (7362784529473407032LL))))) : ((+(7362784529473406992LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-13047))))) ? (max(((~(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (short)-22528)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-22)))))) : (max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (short)6752))))));
                var_15 = ((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)28)) ? (var_2) : (7362784529473406992LL))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_12))))))));
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_6)))) ? ((-(((/* implicit */int) (signed char)-1)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)21964)) : (((/* implicit */int) (unsigned char)153))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(var_3))), (((/* implicit */long long int) var_7))))) ? (max((((((/* implicit */_Bool) 7362784529473406985LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))) : (var_12))), (((/* implicit */long long int) var_11)))) : ((-(61440LL)))));
    var_17 = ((/* implicit */unsigned char) 276004058747293231LL);
}
