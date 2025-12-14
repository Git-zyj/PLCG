/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197820
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
    var_17 = var_16;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_7)) >> (((arr_4 [i_2 - 1] [i_2 - 1]) - (615176334397082315ULL)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) min((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (unsigned short)64634))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) var_14)) ? (((1152921504606846975ULL) + (5ULL))) : (((((/* implicit */_Bool) (short)29796)) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551606ULL))))));
                        var_19 = ((/* implicit */long long int) max(((((-(1869628596U))) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_3 [i_0])), ((short)63))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_10)) <= (arr_4 [i_2 + 1] [i_1]))))));
                    }
                    for (signed char i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [(unsigned short)14] [i_2] [i_4 - 3])) >> (((((/* implicit */int) (unsigned short)21349)) - (21327)))))), (0U)))), (12092703552048297110ULL))))));
                        var_21 ^= ((/* implicit */int) max((((/* implicit */unsigned int) (short)-1)), (max((10U), (((/* implicit */unsigned int) (short)32764))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_22 ^= ((/* implicit */long long int) var_16);
                        var_23 = ((((/* implicit */int) (unsigned short)44186)) * (((/* implicit */int) (short)29315)));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_6 + 2] = ((/* implicit */signed char) (unsigned short)31599);
                        var_24 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_6] [i_2 + 1] [i_1] [8U]))));
                        var_25 = ((/* implicit */short) arr_2 [i_0] [i_1] [i_0]);
                        var_26 = ((/* implicit */signed char) var_15);
                    }
                    arr_19 [1LL] [i_0] [i_2] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))));
                }
                for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) 18446744073709551610ULL);
                    arr_23 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned long long int) (short)32764);
                }
                var_28 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_0])) >> (((((/* implicit */int) (short)32753)) - (32750)))))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (+((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32767)) : (2053268976))))))))));
    var_30 ^= ((/* implicit */unsigned long long int) (_Bool)1);
    var_31 &= ((/* implicit */unsigned int) (short)32767);
}
