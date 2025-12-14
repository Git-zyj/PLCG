/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199317
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
    var_19 = ((/* implicit */unsigned short) var_17);
    var_20 &= ((/* implicit */unsigned short) ((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) var_18);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_21 += ((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 3]))) ^ (var_13))));
                                var_22 |= ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_13 [i_2] [i_4 + 4] [i_3] [i_0 - 1] [i_3])) + (var_14))) >= ((~(arr_2 [i_0 - 2] [i_0 - 1] [i_4 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    var_23 &= ((/* implicit */int) min((-9015444478685527602LL), (-9015444478685527608LL)));
                    arr_25 [i_6] = ((/* implicit */unsigned long long int) (~(min((var_7), (((/* implicit */int) arr_15 [i_6 - 1] [i_6 - 1]))))));
                }
            } 
        } 
    } 
}
