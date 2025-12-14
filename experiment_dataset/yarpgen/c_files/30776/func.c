/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30776
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] [(short)6] [i_1] [9U] = ((/* implicit */signed char) var_5);
                            arr_12 [i_0] = var_13;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0 - 1] = ((/* implicit */signed char) var_5);
                                var_15 = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_14);
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 = ((/* implicit */short) min((var_18), ((short)3968)));
}
