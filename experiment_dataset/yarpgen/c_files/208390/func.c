/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208390
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 += ((/* implicit */short) max(((-(((/* implicit */int) arr_2 [i_0] [(unsigned short)5])))), (((/* implicit */int) arr_1 [i_0]))));
                var_17 = ((/* implicit */short) min((((long long int) arr_1 [(_Bool)1])), (((/* implicit */long long int) ((signed char) var_10)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_1] [i_2] [i_3]);
                                var_19 &= ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_4);
}
