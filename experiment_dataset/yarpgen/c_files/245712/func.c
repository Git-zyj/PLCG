/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245712
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(signed char)2] [(signed char)2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)9330))))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 - 1]))) | (18446744073709551615ULL)))))));
                        arr_15 [i_0 + 1] [i_3] [i_1] = ((/* implicit */signed char) (unsigned short)56205);
                    }
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */long long int) arr_10 [i_1] [i_2] [i_1] [i_1]);
                        var_15 -= ((/* implicit */int) ((arr_4 [i_1] [i_1]) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)22490))))), (((((/* implicit */_Bool) (unsigned short)56206)) ? (2411598320U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) min((min((arr_16 [i_4] [(unsigned short)15] [(unsigned short)15] [(unsigned short)15]), (((/* implicit */int) var_8)))), (min((((/* implicit */int) var_1)), (2147483647))))))));
                    }
                    arr_18 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                    var_16 = ((/* implicit */int) (~(15588259071198442869ULL)));
                    var_17 = ((/* implicit */long long int) 3504175147856897317ULL);
                }
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    arr_21 [i_1] [i_1 + 1] [i_1] = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)9313))))));
                    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        arr_25 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_8))))) ? ((-(max((var_7), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_19 ^= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)143))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (arr_16 [i_0] [i_0] [15U] [i_0])));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_31 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1883368981U)))) ? (((/* implicit */int) arr_26 [i_0 - 1] [i_1 + 1])) : (arr_27 [i_0] [i_0] [i_0 - 1] [(unsigned char)20] [(short)19]))))));
                            arr_32 [i_8] |= max((min((17128502003897392974ULL), (((/* implicit */unsigned long long int) var_10)))), (14942568925852654285ULL));
                            arr_33 [i_0] [i_1] [i_5] [i_1] [(short)21] [(signed char)5] [i_8] = ((/* implicit */int) var_3);
                        }
                        var_20 += ((/* implicit */unsigned long long int) (short)-5560);
                    }
                }
                var_21 = ((/* implicit */unsigned char) 1318242069812158646ULL);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */short) var_1)), (var_4)));
}
