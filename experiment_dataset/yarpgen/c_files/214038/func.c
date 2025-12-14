/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214038
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
    var_17 &= ((/* implicit */_Bool) (~(var_9)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) 481835045);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_2] [(unsigned short)11] [(signed char)6] = ((/* implicit */unsigned char) 0ULL);
                                var_18 = ((/* implicit */unsigned short) (~(min((18446744073709551600ULL), (((/* implicit */unsigned long long int) 481835045))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (var_14)));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max(((short)-5713), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) arr_8 [i_4] [i_4] [i_3] [(unsigned char)3] [i_0] [i_0]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (min((((/* implicit */unsigned short) arr_3 [i_1] [i_4])), ((unsigned short)10264)))))))))));
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [6U]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) var_6))), (var_8)));
}
