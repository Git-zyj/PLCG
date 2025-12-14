/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244875
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) >> (((/* implicit */int) var_2)))) < (((/* implicit */int) ((short) -1830882365)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-25))))), (((arr_1 [i_0]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)20230))))) : (var_0))));
                arr_7 [i_0] [i_0] = max(((+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1830882389)) ? (((/* implicit */int) (unsigned short)41762)) : (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_11))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) arr_3 [(unsigned char)3]);
                    arr_12 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -1740097227)) ? (((((/* implicit */_Bool) 1226935771662383881ULL)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned char)255)))) : ((~(1830882364)))));
                    var_16 = ((/* implicit */unsigned short) ((arr_9 [(unsigned short)2] [i_1] [i_0]) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (855513771192038101LL))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2454869669453163892LL))))))));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) arr_22 [i_0] [i_1]);
                            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                        }
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 934506544U)) ? (((/* implicit */int) arr_1 [i_3])) : (1830882378)))) && (((/* implicit */_Bool) ((arr_18 [i_0] [i_1] [i_3] [i_3] [i_0]) / (1252009514))))));
                            arr_26 [i_0] [i_0] [i_3] [0] [i_3] [i_3] = ((/* implicit */unsigned short) (~(arr_8 [i_1])));
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [9] = ((/* implicit */unsigned short) ((long long int) arr_14 [i_0] [i_0]));
                        }
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] = (-(((/* implicit */int) ((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]) > (((/* implicit */int) var_2))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [0LL] [i_1] [i_1] [i_1] [i_7] [i_7] [i_0])) ? ((+(-905960241))) : (((/* implicit */int) arr_25 [i_0] [i_1] [i_7] [i_4] [i_1]))));
                        }
                        arr_31 [(_Bool)1] [(short)0] |= ((/* implicit */_Bool) 934506538U);
                        arr_32 [i_0] [i_3] = ((/* implicit */_Bool) arr_21 [i_1]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_35 [i_0] [i_0] [i_0] [i_0]);
                        var_21 = (i_0 % 2 == zero) ? ((+(((((/* implicit */int) arr_22 [i_1] [i_8])) >> (((((/* implicit */int) arr_4 [i_0] [i_0])) + (1658))))))) : ((+(((((/* implicit */int) arr_22 [i_1] [i_8])) >> (((((((/* implicit */int) arr_4 [i_0] [i_0])) + (1658))) + (13589)))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0])) < (((/* implicit */int) arr_17 [i_0]))));
                    }
                    for (long long int i_9 = 2; i_9 < 8; i_9 += 1) 
                    {
                        arr_39 [i_0] [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */signed char) (+(1671170989U)));
                        var_23 -= ((arr_18 [i_9 + 2] [i_9] [i_9] [i_9 + 2] [(unsigned char)6]) >> (((((/* implicit */int) ((short) 1893834276U))) + (25080))));
                    }
                    for (unsigned char i_10 = 4; i_10 < 7; i_10 += 3) 
                    {
                        arr_43 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) 17219808302047167759ULL);
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)22)) && (((/* implicit */_Bool) (unsigned char)118))));
                        var_25 = var_3;
                        var_26 ^= ((/* implicit */short) ((unsigned long long int) -1789824913));
                    }
                    var_27 -= ((/* implicit */short) (unsigned char)255);
                }
                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 1; i_11 < 8; i_11 += 3) 
    {
        for (short i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                {
                    var_29 -= ((/* implicit */short) (+(((/* implicit */int) (short)-19686))));
                    var_30 = ((/* implicit */_Bool) (+(934506525U)));
                    arr_52 [i_11] [i_12] [i_13] [i_13] = arr_50 [i_11] [1LL] [i_11];
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */long long int) (short)-15424);
}
