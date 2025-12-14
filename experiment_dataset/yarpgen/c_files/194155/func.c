/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194155
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 0U))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (arr_6 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)126)) || (((/* implicit */_Bool) 6U))))))) : (((/* implicit */int) (unsigned char)129))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1 + 3] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_6 [i_1 + 1] [i_0]), (arr_6 [i_1 + 2] [i_0]))))));
                                var_12 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)1)), (9U)));
                                var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [(short)17]))))))), (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0] [i_0])) ? (arr_2 [i_0 + 2] [i_0] [i_0]) : (arr_2 [i_0 + 3] [i_2] [i_0])))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [15ULL] [i_0] = min((4294967285U), ((~(2515507753U))));
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 4])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned int) max((((/* implicit */long long int) max((7U), (((/* implicit */unsigned int) (unsigned char)140))))), (arr_17 [i_0 - 1] [i_1 + 3] [i_5 + 3])))))));
                            arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((13U), (((/* implicit */unsigned int) (unsigned char)141))));
                            var_16 = ((((((/* implicit */_Bool) arr_1 [i_5 + 1])) || (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) arr_1 [i_5 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6 + 1] [i_0]))) : (arr_1 [i_5 - 1]))) : (((arr_1 [i_5 + 3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6 - 2] [i_0]))))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) ((((arr_17 [i_5] [i_2] [i_1 + 1]) / (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) arr_3 [i_7 - 1])) : (((/* implicit */int) var_8))))))) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)107)), (1432842697))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_8]);
                            var_18 = arr_4 [i_0] [i_2] [(unsigned char)13];
                            arr_30 [i_0] [i_5] [i_0] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_5 + 2] [i_0 + 1] [i_0] [(unsigned char)15] [i_0])) - ((~(arr_27 [i_5 + 2] [i_0 + 1] [i_0] [i_0] [i_0])))));
                            var_19 = (short)19636;
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            arr_34 [i_9] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) var_2)))))), ((~(((/* implicit */int) arr_11 [i_9] [i_5 + 1] [(unsigned char)6] [i_1 + 1] [i_0] [i_0]))))));
                            var_20 *= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0]))))), (arr_5 [(signed char)14])));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_2] [i_10 - 1] [i_1] [15U] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_33 [(signed char)15] [i_10 - 1] [i_2] [i_2] [i_10] [(unsigned short)1] [i_10 - 1])) : (((/* implicit */int) arr_33 [i_10 + 1] [i_10 - 1] [i_1] [i_5] [(short)18] [i_10] [i_10]))));
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2988235890U)) ? (arr_8 [i_0] [i_10 - 1] [i_0] [i_0 + 1] [i_0]) : (arr_8 [(_Bool)1] [i_10 - 1] [i_1] [i_0 + 2] [i_0])));
                            var_23 = (~(((/* implicit */int) ((var_8) || (((/* implicit */_Bool) 4191343695U))))));
                            arr_38 [i_0] [i_1] [i_2] [i_0] [i_10] [i_5] [i_2] = ((/* implicit */long long int) 11U);
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_1 + 1] [(unsigned short)2] [i_11]);
                            var_25 -= ((/* implicit */unsigned int) ((long long int) (_Bool)1));
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 4) /* same iter space */
                        {
                            arr_45 [i_0] [i_1 + 3] [i_0] [i_2] [i_5] [i_2] [i_12 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -4336468833925291575LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27485))) : (4294967295U)));
                            var_26 = ((/* implicit */short) 16193827565345883782ULL);
                            var_27 = ((/* implicit */short) arr_12 [i_0] [i_5] [i_0] [i_0] [i_0]);
                        }
                        arr_46 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (short)4046))))) ? (((/* implicit */long long int) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) (short)-4192)))))) : (min((((arr_12 [i_0] [i_0] [i_5] [i_5] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) arr_19 [i_0] [i_0 - 1] [i_5] [i_0] [i_1 + 2]))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4294967288U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_1)) + (((/* implicit */int) var_8))))))) + (min((((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) : (2252916508363667833ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)146)), ((short)-25006))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            {
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)61659)), (16193827565345883780ULL))))));
                arr_53 [i_14] = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) min((4294967284U), (((/* implicit */unsigned int) (signed char)16))))) || (((/* implicit */_Bool) arr_35 [i_14]))))), (var_11)));
                arr_54 [i_14] [i_14] [i_13] = ((/* implicit */unsigned short) ((((arr_1 [i_13]) < (((/* implicit */unsigned long long int) 0U)))) ? (((/* implicit */unsigned long long int) min((min((arr_5 [i_14]), (((/* implicit */unsigned int) arr_8 [i_13] [i_13] [i_13] [i_14] [i_14])))), (((/* implicit */unsigned int) arr_13 [i_14] [i_13]))))) : (((min((arr_1 [i_14]), (((/* implicit */unsigned long long int) arr_18 [i_13] [i_13] [i_13] [i_14])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                var_30 -= ((/* implicit */short) 3749155764U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) 
    {
        for (unsigned short i_16 = 1; i_16 < 23; i_16 += 4) 
        {
            {
                arr_59 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_55 [i_15])) ? ((~(((/* implicit */int) arr_56 [i_16 - 1])))) : (((/* implicit */int) (short)-22580))));
                var_31 = ((/* implicit */signed char) max((var_31), (var_6)));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) var_8);
}
