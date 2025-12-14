/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229499
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_10 [5] [i_0] = ((/* implicit */short) var_1);
                            var_14 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((1073741823), (arr_7 [i_3] [i_0] [i_1] [i_3]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))))))) & (((((/* implicit */_Bool) ((signed char) var_10))) ? (((var_9) << (((((/* implicit */int) (unsigned char)255)) - (253))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1749336409) <= (529006333)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-27150))))) >= ((+(532250038U)))));
                            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), ((short)5925)))), (((((/* implicit */int) (_Bool)1)) * (1940885496)))))), (((((/* implicit */_Bool) ((arr_6 [i_0] [i_1]) & (((/* implicit */int) (unsigned short)37596))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7411))) : (-5132955671790549014LL))) : (((/* implicit */long long int) min((arr_3 [i_0] [i_4] [i_5 + 2]), (((/* implicit */int) (unsigned char)27)))))))));
                            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) var_1)))) ^ (((/* implicit */int) arr_4 [i_5 + 2] [i_5 + 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [(_Bool)1])), (var_0)))) : (((/* implicit */int) (signed char)55))));
                            var_16 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0]);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) | (-8841195507493704314LL)))) ^ (((((((/* implicit */_Bool) arr_11 [i_0])) ? (524287ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11685))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1073741824)) ? (2447650346U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                arr_28 [i_7] [i_8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 386855303U)) || (((/* implicit */_Bool) (unsigned short)5744))));
                                var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_10] [i_9] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_7] [i_10]))) : (3727017497U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_19 [i_10])))))) & (((((-61701806418914214LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_0)) - (239)))))))) : (min(((~(1064393896884374815ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        {
                            arr_34 [i_6] [i_7] [i_11] [i_6] [(unsigned short)16] [i_7] |= ((/* implicit */unsigned long long int) arr_31 [i_11] [i_11] [i_7] [i_11]);
                            arr_35 [i_6] [i_7] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (~((~((~(((/* implicit */int) (unsigned char)208))))))));
                            var_19 = ((/* implicit */int) ((4244155801U) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_6] [i_7] [i_11])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_13 = 2; i_13 < 22; i_13 += 1) 
    {
        for (unsigned int i_14 = 1; i_14 < 23; i_14 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    for (short i_16 = 2; i_16 < 23; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 4; i_17 < 22; i_17 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) arr_42 [i_17 - 1] [10LL] [i_13 + 2]);
                                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-104))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 23; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_47 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_13 + 1] [i_19] [i_14 - 1] [i_14])) == (((((/* implicit */_Bool) arr_51 [i_13] [i_13] [i_18 + 1] [i_13])) ? (((/* implicit */int) arr_51 [i_13] [i_13] [i_18 - 1] [i_19])) : (((/* implicit */int) arr_51 [(unsigned short)9] [i_14] [i_18 - 1] [i_19]))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(15465548771628092290ULL))))));
                            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -1228751727)) ? (((/* implicit */unsigned long long int) (+(1084802936)))) : (((((/* implicit */unsigned long long int) -546385013)) / (var_11)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            arr_58 [i_13] [i_13] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_48 [i_13] [i_13] [i_13] [i_13])), (((((/* implicit */int) arr_47 [i_13] [i_14 - 1] [i_20] [i_20] [i_20] [i_21] [i_21])) + (((var_3) ? (arr_52 [i_13] [(unsigned short)20] [i_13 + 2] [i_13]) : (((/* implicit */int) arr_47 [i_13] [i_13] [i_13] [1] [i_13 + 1] [i_21] [1]))))))));
                            var_25 ^= ((/* implicit */int) 15465548771628092290ULL);
                            arr_59 [i_13] [(unsigned short)18] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)9402))) / (3169057987U))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) -250013624)) : (arr_37 [i_21]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_22 = 3; i_22 < 20; i_22 += 1) 
                {
                    for (int i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) var_8);
                            arr_65 [i_13] [i_13] [i_13 + 2] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)226))))) >= (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (2570271992372238598LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) % (4414966249637738393LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_37 [i_22 + 4]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_24 = 2; i_24 < 21; i_24 += 1) 
                {
                    for (short i_25 = 1; i_25 < 22; i_25 += 2) 
                    {
                        {
                            arr_71 [i_25] [i_14 + 1] [i_13] [i_25 + 2] [i_24 + 2] [i_14 + 1] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)87)) <= (((/* implicit */int) arr_43 [i_13] [i_24 + 1] [i_13 + 1] [i_14 - 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_70 [i_13] [i_14] [i_24] [i_25])) <= (((/* implicit */int) var_7)))))) + (max((((/* implicit */unsigned long long int) arr_45 [i_13 + 2] [i_24 + 1] [i_25 + 2] [i_25] [(_Bool)1])), (arr_60 [i_13] [i_14] [i_24]))))));
                            var_28 = ((/* implicit */int) (~((+(2304255373570297259LL)))));
                            var_29 = ((/* implicit */int) min((var_29), (min((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 2981195302081459326ULL))) && (((((/* implicit */_Bool) arr_53 [i_13] [i_24] [i_24 - 2])) && (((/* implicit */_Bool) var_1))))))), (((((/* implicit */int) (unsigned short)29095)) * (((/* implicit */int) arr_43 [i_25 - 1] [i_24 + 1] [i_14 - 1] [i_13 + 1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
