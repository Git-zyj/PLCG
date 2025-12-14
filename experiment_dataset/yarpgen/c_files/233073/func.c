/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233073
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) ((long long int) max((((/* implicit */int) (short)-27377)), (-1536735131))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) arr_8 [i_3] [i_1] [i_2] [i_1] [i_0]);
                            var_16 = ((/* implicit */long long int) ((((unsigned int) 2795447788808672630LL)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 2]))) <= (18446744073709551615ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 += ((/* implicit */signed char) var_9);
}
