/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42254
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
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) (+(((/* implicit */int) ((arr_1 [i_0 - 1]) >= (arr_10 [(short)2] [i_0 + 2] [i_2] [i_2 + 2] [i_4 + 1]))))));
                                var_13 *= ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [(short)0] [i_3] [i_4]);
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_14 [(unsigned char)2] [9] [(unsigned char)2] [i_1] [i_1] [i_1] [(short)5]);
                }
            } 
        } 
    } 
}
