/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219319
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 += ((/* implicit */short) max((((((/* implicit */int) arr_4 [i_2 + 2] [i_1 - 1])) * (((/* implicit */int) arr_4 [i_2 + 2] [i_1 - 1])))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_4 [i_2 + 2] [i_1 - 1])))))));
                    var_12 += ((/* implicit */short) arr_2 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_11 [i_4 + 2]);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        for (long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_14 = ((unsigned char) arr_11 [i_6]);
                                var_15 = ((/* implicit */long long int) ((16097319701470843063ULL) >= ((~(((((/* implicit */_Bool) var_7)) ? (2349424372238708533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2421)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
