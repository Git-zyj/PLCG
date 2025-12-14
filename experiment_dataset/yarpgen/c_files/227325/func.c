/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227325
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_0 [i_1 - 4]);
                    arr_6 [i_0] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                    var_16 *= ((/* implicit */signed char) var_13);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)1] [i_0] [(unsigned short)1] [i_0 - 1] [i_0 - 1])))))), (max((var_11), (((/* implicit */unsigned int) min((arr_2 [i_0] [(_Bool)0] [i_0]), (((/* implicit */int) var_13)))))))));
                                arr_15 [i_0] [i_1 - 1] [(unsigned short)12] [i_2] = arr_11 [i_0] [i_0] [(short)7] [i_0] [i_0];
                                var_17 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) arr_1 [i_0]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)151)), (-9223372036854775783LL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_7);
}
