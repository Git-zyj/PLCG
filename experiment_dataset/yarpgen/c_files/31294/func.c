/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31294
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = -2024583870;
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (((~(arr_2 [i_1 - 2] [i_1 + 4]))) != (((((/* implicit */_Bool) 4028198279640351684LL)) ? (-1213239220) : (((1213239214) + (((/* implicit */int) var_5))))))));
                var_16 |= ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                arr_9 [i_2] [i_2] [i_3] = ((/* implicit */long long int) var_3);
                arr_10 [i_3] [i_2] = ((/* implicit */signed char) var_1);
                arr_11 [i_2] [i_3] = ((/* implicit */unsigned short) 3154928524U);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)5)) : (var_12)))) ? ((~(496ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
    var_18 = ((/* implicit */unsigned int) (((_Bool)0) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_14))))))));
    var_19 = var_12;
}
