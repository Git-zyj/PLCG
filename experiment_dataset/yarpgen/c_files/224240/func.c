/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224240
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (min((((long long int) min((((/* implicit */long long int) 1289239204)), (-2584112745156063021LL)))), (((/* implicit */long long int) (((-(-1677827747))) / (((((/* implicit */_Bool) (unsigned char)255)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)(-32767 - 1))))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_11 [(short)6] [i_1] [(short)6] [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) (signed char)127)), (((min((arr_7 [i_0] [12ULL] [i_4] [i_3 - 1]), (((/* implicit */long long int) (unsigned char)233)))) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))))));
                                var_18 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)126)), (0LL)))), (((((/* implicit */_Bool) (unsigned short)59801)) ? (((/* implicit */unsigned long long int) arr_1 [i_3] [i_2])) : (var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)21))))) : (3101606591U)))) : (min((arr_7 [i_4] [i_3 + 1] [i_2] [i_1]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63)) / (arr_8 [i_0] [i_1] [i_2] [i_1] [i_4])))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 3])) ? (((/* implicit */unsigned long long int) arr_7 [i_3 + 1] [i_3 - 3] [i_3] [i_0])) : (arr_4 [i_3] [i_2] [i_1] [i_0]))), (((/* implicit */unsigned long long int) min((min((arr_2 [i_4]), (((/* implicit */int) arr_10 [i_4] [i_1] [i_2] [i_3 - 1] [i_4] [i_0] [i_3 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59783)))))))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */int) 3LL);
            }
        } 
    } 
    var_20 = var_11;
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)128))))), (var_13)));
}
