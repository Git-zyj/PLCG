/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33591
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << ((+(((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((min((18ULL), (((/* implicit */unsigned long long int) var_6)))), (14494133204037738407ULL)));
                            var_17 = ((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                arr_8 [i_0] [2U] [i_0] = ((/* implicit */unsigned char) 20LL);
            }
        } 
    } 
}
