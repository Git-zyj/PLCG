/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35995
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) ^ (var_0)));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63540)) ? (2147483647) : (-913755367)));
    var_16 = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) -842167681)) : (3657613655U))) ^ (4294967295U)));
    var_17 = ((/* implicit */unsigned long long int) (-(var_9)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_18 = arr_6 [i_0] [i_1] [(short)22] [14LL];
                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_5 [23ULL] [i_1] [i_1] [19U]))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [(unsigned char)14])))))));
            }
            arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1] [i_1] [i_0] [i_0]))) ? (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (arr_2 [i_1]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */int) arr_3 [i_0])))))));
            var_21 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)65514))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            arr_13 [(_Bool)1] [i_3] |= ((/* implicit */short) arr_1 [i_3]);
            var_22 *= ((/* implicit */short) arr_12 [i_0] [i_0] [i_0]);
        }
        arr_14 [7LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_11)))))) ? (((/* implicit */unsigned int) (-(2147483647)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) -450955597)) : (2193868512U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1]))) : (min((2101098783U), (1601852188U)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_23 = ((/* implicit */_Bool) 5578218170156047432ULL);
        arr_18 [i_4] = ((/* implicit */short) (signed char)-36);
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 1) 
    {
        var_24 = ((/* implicit */int) (unsigned short)65535);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) (unsigned short)29)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_5] [1LL] [i_5] [i_5])) || (((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_7] [i_9] [i_9]))))))))));
                                arr_36 [i_5] [i_7] [i_5 + 1] [i_8] [i_9] [i_9] &= ((/* implicit */long long int) 641891473U);
                                arr_37 [i_9] [i_9] [i_6] [i_7] [i_6] [i_5] [i_5] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_5] [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_21 [i_9] [i_7]))))) >= (12U));
                                arr_38 [i_6] [(unsigned short)9] [i_5] [i_6 + 1] [i_7] [(unsigned short)16] [i_9] = (!(((/* implicit */_Bool) arr_23 [i_5 + 1] [i_8 - 1])));
                                var_26 = ((/* implicit */short) (+((~(((/* implicit */int) arr_28 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                    arr_39 [i_6] = ((/* implicit */short) (-(((/* implicit */int) arr_27 [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_6 + 1]))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-8192)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_6])))))));
                }
            } 
        } 
        arr_40 [i_5] [i_5 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_5 + 2] [i_5 - 1])) >= (((/* implicit */int) arr_21 [i_5 + 2] [i_5 - 1]))));
    }
}
