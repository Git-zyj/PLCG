/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196887
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) arr_4 [i_0]);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) var_0);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */short) (~(((/* implicit */int) arr_13 [2LL] [i_1] [i_2] [i_1] [i_4]))));
                                arr_16 [i_0] [i_4] [i_2] [2ULL] [(short)6] [i_4] [i_3] = ((/* implicit */long long int) (((~(-1082339741))) != (((int) arr_5 [i_1] [4ULL] [i_2]))));
                                arr_17 [9U] [9U] [i_2] [i_3] [i_4] = ((/* implicit */int) (-((+(arr_10 [i_0])))));
                            }
                        } 
                    } 
                } 
                var_12 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) arr_3 [i_1]))), ((+(arr_3 [i_0])))));
            }
        } 
    } 
    var_13 &= ((/* implicit */int) var_0);
}
