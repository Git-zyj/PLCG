/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215107
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) (short)-11)), (var_16)))), ((+(((/* implicit */int) (short)32759)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [12U] [(unsigned char)3] [i_0] [i_3 + 2] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_0] [11] [i_2] [i_0] [i_3 + 2] [i_3 - 2])) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_0] [i_3 + 1] [i_3 + 1])))), (((/* implicit */int) var_19))));
                            arr_13 [i_1] [4] [i_2] [i_2] |= ((/* implicit */unsigned int) (unsigned char)3);
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned short) arr_5 [i_1]);
                var_22 -= (unsigned char)103;
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_10))));
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_24 = min((min(((unsigned short)13520), (((/* implicit */unsigned short) arr_5 [i_4])))), (((unsigned short) max((((/* implicit */long long int) 866281876U)), (arr_3 [i_4] [i_4])))));
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91))) > (arr_11 [i_4] [i_4] [i_4])));
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_25 = ((/* implicit */_Bool) var_15);
        var_26 = (+(((/* implicit */int) arr_17 [i_5])));
        var_27 ^= min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_18 [i_5]))))), (var_15)))), (max((((/* implicit */unsigned long long int) 866281876U)), (6455694995923632381ULL))));
    }
}
