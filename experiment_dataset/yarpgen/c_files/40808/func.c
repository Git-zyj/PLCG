/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40808
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
    var_10 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) | (((/* implicit */int) var_0))));
    var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)992))));
    var_12 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) max((var_3), (((/* implicit */signed char) var_5))))))), (((((/* implicit */_Bool) (short)-16)) || (((/* implicit */_Bool) -9223372036854775807LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_1]));
                arr_5 [i_0] [i_1] [(short)10] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) var_2)), (max((var_7), (arr_1 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_10 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_9 [i_2] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && ((!(arr_8 [i_2] [i_2] [i_2]))));
                arr_11 [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3])) ? ((+(((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (unsigned char)247)))))));
                arr_12 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (short)-4049)), (3238949920U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2])) ^ (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) ((_Bool) arr_6 [i_2]))) : (((/* implicit */int) ((unsigned char) 0U)))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    arr_15 [i_4] [i_3] [20ULL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])) & (((/* implicit */int) arr_14 [i_2] [i_2] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) (unsigned char)94)) ? (arr_7 [i_4]) : (arr_6 [i_4]))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (2306546216U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 3; i_5 < 20; i_5 += 4) 
                    {
                        arr_20 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) min((min((max((8647946827759501445LL), (((/* implicit */long long int) arr_14 [i_2] [i_3] [i_3] [i_5 + 1])))), (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned char) (_Bool)1))))))), (((/* implicit */long long int) arr_7 [i_2]))));
                        arr_21 [i_5] [i_5] [i_4] [i_5 + 4] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (short)-32755))))) : (((arr_18 [i_2] [i_3] [i_2] [i_2] [i_4] [(unsigned char)8]) ? (arr_13 [i_4] [i_4] [i_4] [i_4]) : (arr_6 [i_4])))))));
                        arr_22 [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((long long int) (-(arr_13 [(_Bool)1] [(_Bool)1] [i_5 + 1] [i_5]))));
                    }
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 23; i_6 += 1) 
                    {
                        arr_25 [i_6] = ((/* implicit */short) var_1);
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_29 [i_2] [i_3] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */long long int) var_3);
                            arr_30 [i_2] [i_2] = ((/* implicit */unsigned int) ((arr_18 [i_2] [i_3] [i_3] [i_6] [i_6 - 1] [i_3]) ? (((/* implicit */int) arr_18 [i_2] [(signed char)5] [i_4] [i_4] [i_6 - 1] [(signed char)5])) : (((/* implicit */int) arr_18 [i_2] [i_6] [i_4] [i_6] [i_6 + 1] [12LL]))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 21; i_8 += 4) 
                        {
                            arr_33 [(unsigned char)19] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_17 [i_3] [i_8] [i_3] [i_4] [i_3] [i_2]))))));
                            arr_34 [i_2] [i_2] [i_3] [i_4] [i_4] [i_6] [i_8] = ((/* implicit */_Bool) ((arr_18 [i_8 - 3] [i_8 + 3] [i_8 - 2] [i_8 - 2] [i_8 + 2] [i_8 - 2]) ? (3067327719U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [i_3] [i_4] [i_6] [i_8])))));
                            arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [15LL] = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                            arr_36 [i_2] [i_3] = ((/* implicit */_Bool) ((signed char) (unsigned char)216));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_40 [i_2] [i_3] [i_3] [i_3] [i_9] [i_3] = ((/* implicit */long long int) arr_39 [i_2] [i_3] [i_4] [i_6 + 1] [i_2]);
                            arr_41 [i_9] [i_6] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) arr_37 [(unsigned short)17] [(unsigned short)17] [i_6 - 1]);
                            arr_42 [i_3] [i_3] [i_4] [i_6] [i_4] = ((/* implicit */_Bool) arr_38 [i_2] [i_2] [i_2]);
                        }
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            arr_46 [i_3] [i_3] [i_4] [i_3] [i_10] [i_2] = ((/* implicit */_Bool) (+(((arr_39 [i_2] [i_3] [i_2] [i_3] [i_10]) / (((/* implicit */int) arr_14 [i_3] [i_4] [i_6] [i_10]))))));
                            arr_47 [i_2] [i_2] [i_2] [(unsigned char)20] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (arr_38 [i_6 - 1] [i_6 - 1] [i_6 + 1])));
                            arr_48 [i_2] [i_3] [i_4] [i_6] [i_10] [i_10] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            arr_49 [i_2] = ((/* implicit */unsigned char) var_5);
                        }
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 1) 
                    {
                        arr_54 [3LL] [i_11] = ((((/* implicit */int) ((((/* implicit */_Bool) min((4111757651U), (arr_23 [15U] [i_3] [i_3] [i_3])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)236)), (16475995018687076519ULL))))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (-(10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_9)))))))));
                        arr_55 [i_3] [i_2] = ((/* implicit */unsigned short) max((arr_24 [i_12 - 1] [i_11] [i_3]), (((/* implicit */long long int) var_3))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                        {
                            arr_60 [i_2] [(unsigned short)19] [i_11] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_2] [i_3] [i_11] [i_13] [i_14])) | (((/* implicit */int) arr_27 [i_14] [i_2] [i_11] [i_11] [i_14]))));
                            arr_61 [i_2] [i_2] [i_11] [i_11] [i_13] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((short) (signed char)-103))) != ((-(((/* implicit */int) var_5))))));
                            arr_62 [i_2] [i_3] [i_3] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((signed char) (+(13585642010908087747ULL))));
                        }
                        for (short i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                        {
                            arr_65 [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_19 [i_2] [i_2])) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)24062))))));
                            arr_66 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((arr_58 [i_2] [i_3] [i_11] [i_13] [i_15]) && (((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_2] [i_2] [i_11] [i_13] [i_15])))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_70 [i_2] [i_3] [i_2] = (!(((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_13] [i_3])));
                            arr_71 [i_2] [i_2] [i_3] [i_3] [i_11] [i_13] [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_13] [i_11] [i_3] [i_2])))))));
                            arr_72 [i_2] [i_2] [i_11] [i_13] [i_16] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)12))));
                            arr_73 [i_2] [i_2] [i_3] [i_11] [i_13] [i_13] [i_16] &= ((/* implicit */unsigned char) (~(arr_24 [i_11] [i_13] [i_16])));
                        }
                        for (long long int i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
                        {
                            arr_76 [i_2] [i_2] [i_11] [i_13] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) <= (((/* implicit */int) (_Bool)1)))))));
                            arr_77 [i_2] [i_2] [(short)23] [i_2] [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) var_3)));
                            arr_78 [i_2] [i_2] [i_11] [i_2] [i_17] = ((/* implicit */unsigned int) arr_50 [i_17] [i_2] [9U] [i_2]);
                        }
                        for (long long int i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                        {
                            arr_83 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_13] [i_18] = arr_18 [i_2] [i_2] [i_3] [i_11] [i_13] [i_18];
                            arr_84 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_7);
                            arr_85 [i_13] [i_13] [i_13] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) arr_37 [i_2] [i_3] [i_11]);
                            arr_86 [i_3] = ((/* implicit */unsigned char) var_2);
                            arr_87 [i_3] [i_3] [i_3] [i_13] [i_18] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_82 [i_18] [i_11] [i_3])) ? (((/* implicit */int) arr_80 [i_2])) : (((/* implicit */int) (unsigned char)19))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        arr_90 [i_2] [i_3] [i_11] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_58 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_58 [(unsigned char)0] [(unsigned char)0] [i_11] [i_3] [i_2]))));
                        arr_91 [i_2] [19U] [i_2] = ((((/* implicit */int) arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_45 [i_2] [i_3] [i_3] [i_3] [i_2] [i_2])));
                    }
                    arr_92 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) max(((signed char)-11), ((signed char)16)))) ? (min(((+(4508836315661009711LL))), (((/* implicit */long long int) var_9)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) : (arr_53 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [i_3] [i_2])) * (((/* implicit */int) var_9))))) : (min((arr_9 [i_2] [i_3] [i_11]), (((/* implicit */long long int) var_5))))))));
                }
                arr_93 [i_3] = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
}
