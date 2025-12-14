/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247486
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_2 [i_1] [i_1] [i_2])))))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)43440)))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            arr_12 [i_4] [i_1] [i_4] [i_3 + 3] [i_4] [i_2] = ((/* implicit */signed char) arr_11 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 3]);
                            var_19 = ((/* implicit */unsigned long long int) ((short) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0]))))));
                        }
                        arr_13 [(short)14] [i_1] [(short)14] [i_3] [(short)14] [i_3 + 3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) arr_0 [(unsigned char)6] [i_2])) : (((/* implicit */int) var_16))));
                    }
                    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_8 [i_2] [(unsigned char)12] [(short)16] [i_2] [i_0]) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */long long int) 2088960U)) != (arr_6 [i_2] [i_1] [i_0]))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(4292878346U)))) ? (((arr_5 [(unsigned char)7] [i_2] [i_1] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (unsigned char)117))))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)13)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(signed char)3] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1]))) : (4292878346U)))) * (arr_10 [i_1] [i_1])))));
                    var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2088960U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) arr_4 [i_5] [i_1] [i_1] [i_0])))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_1] [i_5]))))));
                }
                var_24 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)7])) && (((/* implicit */_Bool) (short)(-32767 - 1)))))))) >= (((((/* implicit */_Bool) (short)-30656)) ? (((/* implicit */int) (short)124)) : (((/* implicit */int) (short)3))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_16)) >> (((var_2) - (9770759913999670962ULL)))));
    var_26 ^= ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 3 */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((int) arr_2 [i_6] [i_6] [i_6]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) | (13679689519484281643ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_0 [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_6])))))));
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_4 [i_6] [i_6] [i_6] [i_6]))) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (arr_4 [i_6] [i_6] [i_6] [i_6])))));
    }
    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        arr_23 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-96)) ? (17045154395219090830ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)124))))), (((/* implicit */unsigned long long int) (short)32745))))) ? (((/* implicit */int) (!(var_3)))) : (((/* implicit */int) ((signed char) ((int) arr_15 [i_7]))))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_7 [i_7] [i_7] [i_7])) & (((/* implicit */int) var_1)))), (((/* implicit */int) arr_7 [i_7] [(short)16] [i_7]))));
        var_28 = (~(arr_10 [i_7] [i_7]));
    }
    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)130)), ((short)-28130)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(short)5]))) : (((unsigned long long int) ((((/* implicit */int) (short)-32746)) != (((/* implicit */int) arr_25 [i_8])))))));
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_26 [i_8]))));
        var_31 += ((/* implicit */long long int) max((469762048U), (((/* implicit */unsigned int) (short)-32746))));
        arr_27 [i_8] [i_8] = ((/* implicit */unsigned short) var_0);
        arr_28 [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2147483643))))), (((((/* implicit */_Bool) min(((short)-131), ((short)26568)))) ? (((unsigned long long int) arr_26 [i_8])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8])))))));
    }
}
