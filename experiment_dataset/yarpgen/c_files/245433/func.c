/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245433
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
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)126))));
    var_16 = ((/* implicit */unsigned short) var_0);
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)3))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = (!(((/* implicit */_Bool) ((unsigned int) (_Bool)1))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [(_Bool)1] [i_0 + 2] [i_0] = ((/* implicit */_Bool) arr_9 [i_4] [i_0 + 3]);
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [(_Bool)1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)0)), (var_7)));
                                arr_14 [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((min((min((arr_9 [i_0] [15LL]), (((/* implicit */long long int) (unsigned char)21)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)21))))))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 + 3] [i_0] [i_0 - 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [(short)3]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_23 [i_5] [i_6] [(unsigned char)1] [(short)6] [i_7] = ((/* implicit */long long int) ((short) arr_1 [i_0 + 1] [i_0 + 3]));
                                arr_24 [i_0 - 1] [i_0 + 2] [i_1] [i_0 - 1] [i_6] [i_5] [(short)7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_5]))));
                                arr_25 [i_6] [i_6] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) (-(arr_3 [i_0 + 2] [i_0 + 2])));
                                arr_26 [i_0] [(signed char)4] [i_0] [i_5] [i_6] [i_5] [i_7] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)253)) & (((/* implicit */int) (unsigned char)247))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
