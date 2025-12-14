/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213325
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((short) ((unsigned char) ((unsigned long long int) arr_3 [i_1] [i_1])))))));
                arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */short) ((signed char) arr_0 [i_0]))), (arr_1 [i_0])));
                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_17);
    var_23 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_4 = 2; i_4 < 18; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            var_24 ^= arr_15 [i_2 + 3] [i_2] [i_2] [i_3];
                            var_25 = ((/* implicit */unsigned char) ((((arr_16 [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_5] [i_4] [i_3]))))) ? (((((/* implicit */_Bool) arr_7 [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_9 [i_5]))) : (arr_10 [i_2] [i_3] [i_4])));
                            arr_19 [i_5] [i_5] [i_4 - 1] [i_3] [i_5] = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) arr_17 [(unsigned char)9] [i_5])))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_5] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7826309270610553335ULL)) ? (((/* implicit */unsigned int) 3)) : (3458130339U)))) / ((+((~(arr_11 [i_3] [i_2])))))));
                            var_26 = ((/* implicit */short) max((min((var_12), (((/* implicit */unsigned long long int) arr_22 [i_7] [(unsigned char)18] [i_4] [17ULL] [17ULL])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_3] [i_5])))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) 3458130339U))));
                            arr_27 [i_5] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2 + 2] [i_2] [i_2])) ? (((/* implicit */unsigned int) 536869888)) : (arr_10 [i_3] [i_3] [i_5 - 1])))) >= (((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_16 [7]) : (((/* implicit */unsigned long long int) 8308280478532126827LL)))))), (arr_22 [i_2] [i_3] [i_4] [i_4] [i_8])));
                        }
                        arr_28 [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -8)) ? (((/* implicit */unsigned long long int) arr_9 [i_3])) : (arr_20 [i_2] [i_3] [i_4] [i_5] [i_5]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_25 [i_2] [i_2] [(short)13] [i_5] [i_5]))))))))) ? ((+(((((/* implicit */_Bool) 1921439065)) ? (10179562711038030324ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))))) : (((/* implicit */unsigned long long int) (+(8))))));
                    }
                    for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */int) max((var_28), (min((((((/* implicit */int) arr_8 [i_4] [i_4 + 2] [i_4])) | (((/* implicit */int) arr_13 [i_4 - 1] [i_2 + 2] [i_2] [i_2])))), ((~(((/* implicit */int) arr_13 [i_4 + 1] [i_2 + 2] [i_2] [(unsigned char)8]))))))));
                        arr_31 [i_2 + 3] [i_2 + 3] [i_3] [i_2 + 3] [i_2 + 3] [i_2] = ((/* implicit */short) ((((long long int) ((arr_30 [i_2] [i_3] [i_4] [i_9]) ^ (arr_12 [i_2] [i_2 + 3] [i_2] [i_2 + 3])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [10LL] [i_3] [i_3] [i_3] [i_4] [i_3] [i_3])) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 8308280478532126815LL)) <= (4699290342411983308ULL)))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((arr_26 [i_2] [i_3] [(unsigned char)16] [i_3]), (((/* implicit */unsigned long long int) 8308280478532126815LL)))), (((/* implicit */unsigned long long int) arr_8 [i_2] [13U] [i_2 - 1]))))) ? (min((min((arr_12 [i_2 + 1] [i_2 + 1] [i_4] [i_10]), (((/* implicit */unsigned int) (signed char)-51)))), (((/* implicit */unsigned int) ((short) 18446744073709551615ULL))))) : (((/* implicit */unsigned int) (+(max((((/* implicit */int) (unsigned char)253)), (var_2))))))));
                        var_30 = ((/* implicit */long long int) ((unsigned int) ((arr_26 [i_2] [6ULL] [i_2] [6ULL]) ^ (arr_24 [i_2 + 2] [i_2 + 2] [8] [i_2 + 2] [i_10] [i_2] [i_2 + 2]))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 3) /* same iter space */
                    {
                        arr_38 [i_11] [i_4] [i_3] [i_3] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(14ULL))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 2; i_12 < 17; i_12 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) | (min((((/* implicit */unsigned long long int) 8308280478532126801LL)), (18446744073709551615ULL)))))) ? ((~(arr_39 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_33 [i_12 - 1] [i_12] [i_12] [i_12] [i_12]), (arr_33 [i_12 + 3] [(unsigned char)18] [i_12 + 1] [i_12] [i_12])))))));
                            var_32 = arr_20 [i_2] [i_3] [i_4] [i_11] [i_4];
                        }
                        for (unsigned short i_13 = 2; i_13 < 17; i_13 += 2) /* same iter space */
                        {
                            var_33 += ((/* implicit */int) min((((/* implicit */unsigned long long int) 2147483638)), (19ULL)));
                            var_34 = ((/* implicit */unsigned char) ((687893803342480947ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60)))));
                            arr_45 [(signed char)4] [i_3] [(signed char)4] [i_3] [i_11] [i_3] = ((/* implicit */int) 4294967295U);
                            arr_46 [i_11] [i_11] [i_4] [i_3] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                        }
                        for (unsigned short i_14 = 2; i_14 < 17; i_14 += 2) /* same iter space */
                        {
                            arr_51 [i_11] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(-8308280478532126827LL)))), (min((((/* implicit */unsigned long long int) arr_44 [i_11])), ((+(39ULL)))))));
                            var_35 = ((/* implicit */unsigned short) ((var_8) != (((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_2] [i_3])) + (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_14 [19LL])))))))));
                            arr_52 [i_11] [18] [i_4] [18] [i_11] [i_4] = ((min((3540295406276813091LL), ((+(var_18))))) != (((/* implicit */long long int) (-(-2147483639)))));
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_32 [i_4] [i_3] [i_4]), (arr_32 [i_3] [i_14] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_4] [i_14] [i_14 + 3] [(unsigned char)0] [i_4] [(_Bool)1] [i_14]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_3] [4ULL] [i_3]))))))) : (min((((/* implicit */unsigned long long int) arr_32 [i_3] [i_3] [i_3])), (arr_24 [i_3] [i_3] [i_14 + 1] [i_14] [i_4] [i_14] [i_3]))))))));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 24)) ? (((/* implicit */int) ((short) 3557874374U))) : (((/* implicit */int) var_9))))) != (((((/* implicit */_Bool) (+(arr_43 [i_2] [i_2] [i_4] [i_4] [i_14])))) ? (((((/* implicit */_Bool) arr_26 [(short)17] [i_3] [i_3] [i_3])) ? (arr_24 [i_2] [i_2] [i_3] [i_4] [i_4] [i_14] [i_2]) : (634718904060571060ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                        }
                        for (unsigned short i_15 = 2; i_15 < 17; i_15 += 2) /* same iter space */
                        {
                            var_38 -= ((/* implicit */unsigned char) min((arr_39 [i_2 + 2]), (((/* implicit */unsigned long long int) ((((long long int) arr_33 [(signed char)3] [(signed char)3] [i_4 + 1] [i_11 - 1] [i_15])) > (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2]))))))));
                            arr_56 [i_11] [i_11] = ((/* implicit */_Bool) ((arr_16 [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_18))))));
                            var_39 ^= ((/* implicit */unsigned char) arr_18 [i_2] [i_3] [i_4] [i_11] [i_15] [i_15] [i_15]);
                            arr_57 [i_11] [i_11] [i_3] [i_3] [i_11] [i_11] = ((/* implicit */long long int) max((min((arr_14 [i_4]), (arr_14 [i_15 - 1]))), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 18446744073709551614ULL)))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 2) 
                        {
                            arr_60 [i_2] [i_3] [i_2] [i_11] [i_11] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_61 [i_2] [i_3] [i_4] [i_11] [i_16] [i_16] [i_11] = ((/* implicit */int) arr_53 [i_16] [i_11] [i_4] [i_3] [i_2] [i_2]);
                        }
                    }
                    for (long long int i_17 = 1; i_17 < 19; i_17 += 3) /* same iter space */
                    {
                        var_40 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max(((~(arr_29 [i_2] [i_3] [i_3] [i_4] [i_4] [(short)6]))), (((/* implicit */long long int) ((unsigned int) var_7)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2 - 1] [i_4]))) & (arr_16 [i_2]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [i_3] [i_4] [i_17] [i_3])))))));
                        arr_64 [i_2] [i_2] [i_3] [i_4 - 1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_2 + 3] [i_2] [15U])) : (arr_43 [i_2 - 1] [i_3] [(_Bool)1] [i_4] [i_17])))), (((arr_6 [i_2]) + (((/* implicit */long long int) 3399699669U))))))), (18446744073709551613ULL)));
                        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)137)))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_67 [12ULL] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) | (((/* implicit */int) arr_8 [i_18] [i_3] [0U]))));
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_16)))) ? (max((16ULL), (((/* implicit */unsigned long long int) 1852251942)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [(short)4] [i_3] [i_3] [i_3] [i_3] [13U] [i_3])))))))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_54 [i_2] [i_4] [i_18] [i_2]))))), (min((7043343353947721427LL), (((/* implicit */long long int) 572193521)))))))));
                            var_43 *= ((/* implicit */int) max((4557865993631627919ULL), (((/* implicit */unsigned long long int) (unsigned char)41))));
                            arr_70 [i_2] [i_3] [i_4] [i_18] [i_2] [i_4] &= ((/* implicit */int) (signed char)30);
                            arr_71 [i_2] [i_2] [(signed char)2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((int) arr_69 [i_19 + 1] [i_3] [i_3])) + (((((/* implicit */int) (signed char)30)) + (((/* implicit */int) arr_15 [(unsigned short)6] [(unsigned short)6] [(unsigned char)6] [i_4]))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) | (var_12))) >> (((11215188107631266503ULL) - (11215188107631266491ULL)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) var_3))));
                            var_45 *= ((/* implicit */unsigned char) arr_25 [i_2 + 1] [i_3] [i_4] [i_4] [i_20]);
                            arr_76 [i_20] [i_20] [i_20] [i_18] = ((/* implicit */unsigned char) ((int) arr_43 [i_2] [i_2] [i_2 + 2] [(short)12] [i_2]));
                            var_46 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_20 + 1] [i_2 + 3] [i_4 - 1] [i_18] [i_4])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        }
                    }
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 20; i_21 += 2) 
                {
                    var_47 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_2] [i_2])) ? (((var_16) / (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [1] [i_3] [i_2 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    arr_80 [i_2] [i_3] [i_21] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_21]))) + (arr_16 [i_2]))) & (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                }
                arr_81 [i_2] [i_3] = ((/* implicit */_Bool) var_3);
                var_48 = ((/* implicit */unsigned int) arr_72 [6ULL] [i_2] [i_2] [16LL] [i_3] [i_3] [i_3]);
            }
        } 
    } 
}
