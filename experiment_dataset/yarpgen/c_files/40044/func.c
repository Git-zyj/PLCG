/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40044
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_13;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 6038839687399412256ULL);
                                var_15 = ((/* implicit */signed char) var_5);
                                var_16 = ((/* implicit */unsigned char) arr_9 [i_1] [i_2] [i_3] [i_4]);
                                var_17 ^= ((/* implicit */long long int) (signed char)-39);
                                var_18 |= ((/* implicit */short) (signed char)49);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = (unsigned char)65;
}
