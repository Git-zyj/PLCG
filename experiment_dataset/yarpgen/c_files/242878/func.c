/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242878
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
    var_16 = ((/* implicit */long long int) max((max((var_12), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 += ((/* implicit */unsigned short) min((var_10), (((/* implicit */int) var_3))));
                var_18 = ((/* implicit */unsigned long long int) min((var_4), (var_4)));
                arr_6 [i_0 + 1] [i_0] [i_1] = ((/* implicit */short) var_7);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_19 ^= ((/* implicit */short) max((((/* implicit */unsigned int) var_2)), (max((((/* implicit */unsigned int) var_13)), (var_8)))));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                {
                    arr_14 [i_3] = ((/* implicit */long long int) var_10);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((min((var_7), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) var_5))));
                                var_21 ^= ((/* implicit */unsigned short) min((min((var_8), (var_8))), (max((((/* implicit */unsigned int) min((var_1), (var_11)))), (min((var_4), (var_15)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
