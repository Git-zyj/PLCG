/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47299
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
    var_16 = var_4;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((unsigned long long int) var_13)))))));
                    var_18 ^= ((/* implicit */unsigned int) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                var_19 = ((3049551598U) & (591829951U));
                arr_14 [9ULL] [i_4] = ((/* implicit */signed char) ((((((/* implicit */long long int) 3049551616U)) | (var_15))) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [8U] [i_3 - 2])))));
            }
        } 
    } 
}
