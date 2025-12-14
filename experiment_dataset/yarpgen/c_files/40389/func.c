/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40389
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */long long int) (-(((unsigned int) (unsigned char)252)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 3]);
                    var_16 |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_4 [i_0] [i_1])) < (((/* implicit */int) arr_0 [i_0 + 1])))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((_Bool) arr_2 [i_0 - 2])))));
                    var_18 = ((/* implicit */unsigned short) ((signed char) arr_1 [i_0 - 2]));
                }
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [(unsigned char)20])) ? (((unsigned int) ((((/* implicit */_Bool) arr_6 [(unsigned short)22] [i_1] [i_1] [(signed char)6])) ? (-1578278012) : (((/* implicit */int) arr_2 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [(unsigned char)3])) ? (((/* implicit */int) arr_7 [(unsigned char)2])) : (((/* implicit */int) (short)-6451)))))))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    var_20 ^= ((/* implicit */unsigned short) (short)6450);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 4; i_5 < 21; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((long long int) (+(arr_12 [i_0] [i_1] [i_1] [i_4] [i_5 - 3] [i_4]))));
                                var_22 = ((unsigned char) ((unsigned long long int) (short)10396));
                                var_23 = ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1] [i_4]);
                                var_24 = ((/* implicit */signed char) ((short) ((((/* implicit */int) ((_Bool) var_6))) << (((/* implicit */int) arr_0 [i_0])))));
                                var_25 = ((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0] [(signed char)13]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_26 = var_11;
    var_27 |= ((/* implicit */long long int) var_14);
    var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)76))));
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                arr_23 [i_7] [i_7] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4358869067086750306LL)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (unsigned char)59))))))));
                var_29 = (i_7 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((arr_6 [i_6] [i_6] [i_6] [i_7]) + (9223372036854775807LL))) << (((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) arr_0 [(short)22])) : (((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((((arr_6 [i_6] [i_6] [i_6] [i_7]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) arr_0 [(short)22])) : (((/* implicit */int) var_14)))) - (2))))));
            }
        } 
    } 
}
