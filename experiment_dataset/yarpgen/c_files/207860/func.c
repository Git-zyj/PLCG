/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207860
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)15206))))), (((((/* implicit */_Bool) min(((short)2812), (((/* implicit */short) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_2))))) : (((var_0) ? (((/* implicit */unsigned int) 1123291933)) : (var_7)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) ((signed char) (short)15187));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 2] [i_1])) ? ((-(((/* implicit */int) arr_4 [i_0 + 2] [i_1 - 2] [i_0 + 2])))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0 + 1] [i_1 - 2])))));
            arr_7 [i_1] = ((/* implicit */unsigned short) ((arr_6 [i_0 + 2] [i_0 + 2] [i_1]) ? (((unsigned int) 18446744073709551615ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 + 2]))))));
            arr_8 [i_0 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(unsigned char)10] [(unsigned short)3] [8ULL])) ? (arr_0 [i_0 + 2]) : ((-(((/* implicit */int) ((unsigned char) 4294967295U)))))));
            arr_9 [i_1] [i_1] = ((/* implicit */_Bool) min((((int) max(((unsigned short)49991), (((/* implicit */unsigned short) arr_6 [i_1] [(_Bool)1] [i_1]))))), (((/* implicit */int) ((short) 9752527460668393930ULL)))));
        }
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)60685)) * (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) arr_11 [(unsigned char)0] [(unsigned short)10]))))));
            var_15 = ((/* implicit */short) arr_6 [10ULL] [10ULL] [i_2]);
            arr_14 [i_2] = ((/* implicit */signed char) (+(((((((int) var_9)) + (2147483647))) << (((((unsigned int) arr_1 [i_2])) - (3333240164U)))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 4; i_4 < 8; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 8; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((short) 569404330887373647LL));
                        arr_24 [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_3] [i_2] [i_2] [i_2])), (4294967295U)))) ? (((arr_10 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [8] [0U]))))) : (4227858432U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_0] [i_3] [i_4 - 1] [i_4] [i_3 - 1] [i_0 + 1])))))));
                        arr_25 [i_5 - 1] [i_3] [i_3] [i_3] [i_3] [(unsigned char)2] = ((/* implicit */_Bool) arr_15 [i_3]);
                        arr_26 [(short)8] [i_3] [i_3 - 1] [i_4] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_5 - 2] [i_0 + 1])) && (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 - 1] [i_3 - 1] [i_4 - 4] [i_4 - 4] [i_0]))))), (((((/* implicit */_Bool) arr_23 [i_0] [(signed char)3] [i_0 + 1] [i_3 - 1] [i_4 - 1] [i_4] [i_4 - 1])) ? (-1123291931) : (-610173130)))));
                    }
                    arr_27 [(signed char)7] [i_3] [i_4] = ((/* implicit */unsigned short) arr_15 [i_0]);
                    arr_28 [i_4] [i_3] [(unsigned char)1] = ((/* implicit */short) max((max((((long long int) 17537990238803500199ULL)), (((/* implicit */long long int) ((_Bool) arr_4 [i_0 + 2] [(short)1] [(short)2]))))), (((/* implicit */long long int) max((arr_10 [i_0 + 1]), (((/* implicit */unsigned int) var_3)))))));
                }
                arr_29 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << (((((arr_1 [i_2]) + (961727153))) - (10)))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65535))) : (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0 - 1])))), (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 - 1]))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_2] [i_7] [i_7 - 1] [i_7] [i_7 - 1] [(signed char)5] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65512))) : (((((/* implicit */_Bool) 2551270622U)) ? (arr_30 [(_Bool)1] [(unsigned char)10] [i_6] [1U] [i_7 - 1] [(unsigned char)10]) : (((/* implicit */unsigned long long int) 4294967281U))))));
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_32 [i_0 + 1] [i_3 - 1])), (arr_5 [i_0 + 1] [i_3 - 1] [i_7 - 1])))), (min((arr_2 [i_0 + 1] [i_3 - 1]), (((/* implicit */unsigned short) arr_5 [i_0 + 1] [i_3 - 1] [i_7 - 1]))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3464111856U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_3] [i_3 - 1])))))) ? ((~(((/* implicit */int) arr_32 [i_3 - 1] [i_3 - 1])))) : ((+(((/* implicit */int) arr_32 [i_3] [i_3 - 1]))))));
                            arr_35 [i_0] [i_2] [i_3] [(unsigned short)9] [i_3] = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) (short)15206)) ? (1123291931) : (((/* implicit */int) arr_34 [i_0] [i_2] [i_3] [i_6] [i_3] [i_7 - 1])))) < (((/* implicit */int) (_Bool)1)))));
                            arr_36 [i_0 - 2] [i_2] [i_2] [i_3] [i_6] [i_6] [i_7 - 1] = ((/* implicit */unsigned short) ((unsigned char) 2551270622U));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                arr_41 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_8] = arr_33 [i_0] [i_2];
                arr_42 [i_8] = ((/* implicit */signed char) (((+(arr_33 [i_0] [i_0 + 1]))) + (arr_33 [i_0] [i_0 + 1])));
                var_20 = ((/* implicit */_Bool) 223482978U);
            }
            arr_43 [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-1123291936) + (2147483647))) << (((((-1123291934) + (1123291965))) - (30)))))) ? (((/* implicit */int) arr_23 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) max((arr_34 [i_2] [10U] [i_0 - 2] [i_2] [i_0] [i_2]), (arr_21 [i_0] [i_0] [i_2] [(signed char)1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */int) arr_34 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2])) << (((((/* implicit */int) arr_5 [(short)10] [i_0] [i_0])) - (62))))) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_2]))))) : (((((/* implicit */_Bool) 1123291928)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))));
        }
        for (short i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            arr_46 [i_9 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1743696673U)) ? (((/* implicit */int) (_Bool)1)) : (-1123291934)));
            arr_47 [i_0] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((((((/* implicit */_Bool) 1764482696U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [(unsigned char)10]))) : (9457479994890071178ULL))) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9 + 1] [i_9])), (48U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_44 [i_9 + 2] [i_9 - 1] [i_0 + 2]))))));
            arr_48 [(unsigned short)3] [i_9] [(signed char)3] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_45 [i_0] [i_9 + 2] [i_0])) / (((/* implicit */int) var_3)))) - (((/* implicit */int) var_8))));
        }
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)1482))));
            arr_52 [3LL] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-7428))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_10] [(short)10] [(short)10])))) : (((((/* implicit */_Bool) arr_51 [i_10] [i_0] [i_10])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-7428)) > (((/* implicit */int) (unsigned short)55668)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (min((((/* implicit */unsigned long long int) (_Bool)1)), (8989264078819480449ULL)))))));
        }
    }
}
