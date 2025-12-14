/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240190
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_2]);
                                var_12 = arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_2];
                                var_13 = ((/* implicit */unsigned char) (unsigned short)65535);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) (unsigned char)2);
                }
                var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                arr_14 [i_1] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0 + 2]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) 333581730461696974LL);
    var_17 = ((/* implicit */unsigned char) (short)-20667);
}
