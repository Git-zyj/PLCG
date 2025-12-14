/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53757
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
    var_20 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1913749268U)) ? (((/* implicit */int) var_7)) : (((int) var_0))));
                    var_22 = ((/* implicit */long long int) -706018792);
                    arr_10 [i_0] [i_1] [i_2] [i_1] = var_16;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_23 ^= ((/* implicit */long long int) var_1);
                                arr_15 [i_4] [i_2] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned int) (_Bool)1);
                                var_24 = ((/* implicit */long long int) ((short) -2144503276));
                            }
                        } 
                    } 
                }
                for (int i_5 = 3; i_5 < 21; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) var_16);
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */short) var_15);
                            arr_26 [i_0] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */int) 2461889168326225724LL);
                        }
                        arr_27 [i_0] [17LL] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */int) var_3);
                        var_26 = ((/* implicit */unsigned short) (unsigned char)184);
                    }
                    arr_28 [i_0] [i_1] [i_5] = ((((/* implicit */int) var_15)) < (((/* implicit */int) ((((/* implicit */int) (short)-5266)) == (((/* implicit */int) (unsigned short)50137))))));
                    arr_29 [i_0] [i_5] [(unsigned short)11] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((706018791), (((/* implicit */int) (unsigned short)65535))))), (var_0)));
                }
                for (int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    arr_33 [i_0] [i_1] [i_8] = 3283015567U;
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((-706018792) + (((/* implicit */int) (signed char)35)))), (706018791)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3943162479U)));
                }
                for (unsigned short i_9 = 2; i_9 < 21; i_9 += 2) 
                {
                    arr_37 [i_0] = ((/* implicit */int) (short)(-32767 - 1));
                    arr_38 [i_0] [i_1] [i_0] [7LL] = ((/* implicit */_Bool) 922229053U);
                    arr_39 [i_0] [i_9] = ((/* implicit */unsigned char) var_12);
                }
                var_28 = ((/* implicit */unsigned int) 9223372036854775785LL);
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) var_13);
}
