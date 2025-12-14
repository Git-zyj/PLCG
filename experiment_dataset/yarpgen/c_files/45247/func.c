/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45247
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
    var_12 = ((/* implicit */_Bool) var_8);
    var_13 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) arr_1 [i_0]);
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (-((-(var_10)))));
                                var_15 ^= ((/* implicit */_Bool) arr_4 [i_1] [i_4]);
                                var_16 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32768)) * (((/* implicit */int) (unsigned char)0))))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0])))))) ? (((((arr_7 [i_0] [i_1] [i_2] [i_3]) + (2147483647))) << (((((arr_7 [i_0] [i_1] [i_2] [i_3]) + (1557458931))) - (28))))) : (((((((var_10) + (2147483647))) << (((((/* implicit */int) (unsigned char)255)) - (255))))) * (((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                    var_17 = (signed char)63;
                    arr_18 [i_2] |= ((((/* implicit */int) max((((unsigned short) var_4)), (((/* implicit */unsigned short) var_11))))) * (((((((((/* implicit */int) (signed char)-6)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (16407))))) >> (((1291669798) - (1291669770))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (unsigned char)3))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) : (arr_14 [i_1] [i_2] [i_5]))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0]))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) && (((/* implicit */_Bool) ((long long int) var_1)))));
                            arr_26 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_0]))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(arr_15 [i_0] [i_5] [i_5] [i_5] [i_7 + 1]))))));
                            arr_30 [i_1] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_5] [i_7 + 2] [i_7] [i_7] [i_7 + 2] [i_7])) ? (var_4) : (var_8)));
                        }
                        for (signed char i_8 = 2; i_8 < 12; i_8 += 4) 
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_5] [i_1] &= ((arr_22 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_0))));
                            arr_34 [i_0] [i_1] [i_5] [i_8] = ((int) ((((/* implicit */int) arr_23 [i_0] [i_5] [i_2] [i_5] [i_8])) - (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_5] [i_8]))));
                            arr_35 [i_0] [i_1] [i_2] [i_5] [i_8] = ((/* implicit */signed char) var_3);
                        }
                    }
                }
            } 
        } 
    } 
}
