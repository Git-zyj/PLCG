/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240897
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
    var_12 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) (signed char)16);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 533980865U))));
                                arr_15 [i_0] = ((/* implicit */unsigned short) (((+(4213865541U))) <= ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5936))) : (4294967295U)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) 4294967295U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (long long int i_6 = 2; i_6 < 24; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_18 [i_6] [i_5]))));
                var_17 = ((/* implicit */_Bool) arr_18 [i_5] [i_6]);
            }
        } 
    } 
}
