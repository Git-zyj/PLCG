/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242674
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_2 [i_0] [i_0])))) & (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))));
        var_16 |= ((/* implicit */_Bool) ((int) ((long long int) var_2)));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_17 |= ((/* implicit */_Bool) ((((((-7873136509801788882LL) + (9223372036854775807LL))) >> (((7873136509801788880LL) - (7873136509801788870LL))))) >> (((min((((/* implicit */unsigned long long int) 1476409662U)), (((arr_2 [i_1] [10ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) : (14673313883778903444ULL))))) - (67ULL)))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) -8319306910802894214LL)) ? (((/* implicit */unsigned long long int) 461517607)) : (15471812677555438995ULL))))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((10729866236036941388ULL) + (10121924328963749652ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (max((((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) 7716877837672610205ULL)) ? (7877878551227317404LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        arr_7 [16ULL] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) 6485712767227929418ULL)) ? (((/* implicit */long long int) 3997023435U)) : (7877878551227317404LL)));
        var_20 &= (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(signed char)2])) ? (((/* implicit */int) arr_5 [16])) : (((/* implicit */int) (signed char)-89))))), ((+(arr_1 [6])))))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_12 [i_2] [6U] |= ((/* implicit */unsigned int) arr_2 [i_2] [(signed char)14]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 3; i_6 < 10; i_6 += 2) 
                    {
                        arr_21 [i_4] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */int) ((long long int) arr_16 [i_4 + 1] [i_5]));
                        var_21 = ((/* implicit */long long int) ((signed char) 4294967283U));
                        arr_22 [i_2] [i_6 - 2] [i_4 + 2] [i_4] [i_6] = ((/* implicit */unsigned int) ((arr_10 [i_2]) <= (((/* implicit */unsigned long long int) 533226567U))));
                    }
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_4 [i_4]))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) 176146214U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_4 + 1] [i_7 - 1]))) : (arr_14 [i_2] [i_3] [i_4 - 1]))))));
                        var_24 = ((/* implicit */int) (~(arr_23 [i_2] [i_2] [i_4 - 1])));
                    }
                    var_25 = ((/* implicit */unsigned int) ((long long int) 15612067014367421791ULL));
                    arr_27 [i_2] [i_3] [i_4] [4U] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) arr_20 [i_2] [i_4] [i_4] [i_4 + 1] [i_5]));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20709))) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_4 - 2] [i_5]))) : (arr_11 [i_4 + 1])));
                }
                for (unsigned int i_8 = 4; i_8 < 7; i_8 += 3) 
                {
                    var_27 &= ((unsigned int) -1629998046965620487LL);
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_26 [i_4])) ? (((/* implicit */int) arr_17 [(signed char)8] [i_4] [i_4] [i_8] [i_9])) : (((/* implicit */int) var_3))))));
                        arr_32 [i_4] [i_2] [i_2] [i_2] [i_2] = ((signed char) ((unsigned int) arr_10 [i_9]));
                        arr_33 [i_2] [i_3] [i_4] [(short)8] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (((((/* implicit */_Bool) (signed char)-35)) ? (3479562112812868902ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_20 [i_2] [i_3] [i_4 - 1] [i_9 + 1] [i_9 + 1]))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (-(var_1))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_31 |= ((/* implicit */_Bool) arr_23 [1LL] [i_3] [8]);
                        var_32 = ((/* implicit */unsigned char) (_Bool)1);
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_4 + 2])) ? (arr_10 [i_8 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-4883247046657336192LL)))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_34 *= ((/* implicit */_Bool) ((signed char) arr_39 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11]));
                        var_35 = ((/* implicit */int) (((((_Bool)1) ? (-3575507160559409765LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)101))))) <= (((/* implicit */long long int) ((/* implicit */int) (short)-32749)))));
                        arr_40 [i_4] [(signed char)9] [i_4 + 1] [i_8] [i_4] [i_11] = (~(((/* implicit */int) var_8)));
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_4 [i_3]))) && (((/* implicit */_Bool) ((long long int) 13U))))))));
                        var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -21)) || (((/* implicit */_Bool) -1629998046965620487LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_9 [5LL])) > (-7873136509801788882LL))))) : (arr_11 [i_2])));
                    }
                }
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) var_13))))));
                /* LoopSeq 3 */
                for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (2839550968526782081LL))))));
                    var_40 = ((/* implicit */unsigned char) ((arr_23 [2ULL] [i_4 + 1] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))));
                    var_41 = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_4]))));
                }
                for (unsigned long long int i_13 = 4; i_13 < 10; i_13 += 4) 
                {
                    arr_46 [i_4] [i_3] [i_4] [i_13] [i_13 - 2] = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
                    arr_47 [i_2] [i_3] [i_4] [4U] [i_2] = ((((/* implicit */_Bool) arr_24 [i_4 + 1] [i_4 + 2] [i_4 - 1])) ? (arr_43 [i_13 - 2] [i_13 - 2] [i_13 - 4] [i_13]) : (((/* implicit */unsigned int) ((var_11) | (((/* implicit */int) arr_25 [i_4] [i_3] [(_Bool)1] [i_3] [i_3]))))));
                }
                for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_42 *= ((/* implicit */_Bool) arr_23 [i_2] [3U] [4U]);
                        var_43 -= ((/* implicit */unsigned int) var_0);
                        var_44 = ((arr_43 [i_2] [i_2] [i_2] [i_2]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 21)) ? (((/* implicit */int) (_Bool)1)) : (28)))));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2963909372U)) + (10729866236036941388ULL)));
                    }
                    var_46 += ((/* implicit */unsigned long long int) var_10);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    arr_55 [i_4] = arr_30 [i_2] [i_2] [i_2] [i_2] [i_2];
                    arr_56 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((3523570584169239687LL) | (((/* implicit */long long int) 2963909389U))));
                }
                for (unsigned char i_17 = 3; i_17 < 9; i_17 += 2) 
                {
                    var_47 += ((/* implicit */_Bool) (~(arr_19 [i_4 - 1] [i_2] [i_3] [i_17] [i_4 - 1])));
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        var_48 -= ((/* implicit */unsigned int) (~(((((/* implicit */long long int) arr_57 [i_3] [i_3] [i_18])) - (-4240148497783042476LL)))));
                        var_49 = ((/* implicit */long long int) arr_28 [i_2] [i_2] [i_4] [(short)4]);
                    }
                    var_50 = ((/* implicit */signed char) ((_Bool) var_11));
                    var_51 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 2684993845U))) || (((/* implicit */_Bool) ((short) (signed char)-90)))));
                    arr_63 [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)32748))) <= (arr_20 [i_4 + 1] [i_4] [i_4] [6ULL] [i_17 - 2])));
                }
            }
            for (long long int i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) arr_18 [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) ((arr_64 [(unsigned char)4] [i_3] [i_19]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((unsigned long long int) arr_30 [i_2] [i_3] [i_19] [i_2] [i_3])))));
                var_54 = ((/* implicit */_Bool) (((_Bool)1) ? (var_11) : (((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4301576934149731143LL)))))));
                    var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) ((((_Bool) -1LL)) ? (2242189783U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_2] [(unsigned char)5])) >> (((arr_65 [i_2] [i_3] [i_19] [i_20]) - (1016233016U)))))))))));
                    arr_70 [i_2] [i_3] [2LL] [i_20] [i_2] [i_19] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_20] [i_3] [i_19] [i_20] [i_19] [6U])) || (((/* implicit */_Bool) var_13))))));
                    var_57 -= ((/* implicit */unsigned char) ((arr_28 [i_2] [i_3] [i_3] [i_20]) ? (arr_42 [6LL] [i_3] [i_19] [i_20] [i_20] [i_20]) : (arr_42 [i_2] [i_3] [i_3] [i_19] [i_20] [4U])));
                }
            }
            for (int i_21 = 2; i_21 < 9; i_21 += 2) 
            {
                arr_73 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_34 [i_21 - 1] [i_21 + 1] [i_3] [i_21 + 2] [i_21 + 2]);
                /* LoopNest 2 */
                for (long long int i_22 = 3; i_22 < 10; i_22 += 4) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) ((((((/* implicit */_Bool) arr_36 [i_2] [(unsigned char)8] [i_21] [i_22 - 3] [i_23] [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_12))) / (((/* implicit */long long int) ((/* implicit */int) (short)-1074))))))));
                            var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_21] [i_23])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_29 [i_2] [i_2] [9LL] [i_2] [i_23] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_2] [i_2])))))) : ((~(arr_41 [i_2] [8LL] [i_21 - 1] [i_22 - 2] [i_23] [i_23]))))))));
                            var_60 = ((/* implicit */unsigned long long int) (short)32750);
                        }
                    } 
                } 
                var_61 += ((/* implicit */short) ((3590258264U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 5362412755829191355LL)) <= (10729866236036941397ULL)))))));
            }
            arr_80 [8U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -437149018))) ? (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) 3808069482U)))) : (((/* implicit */unsigned long long int) arr_14 [(signed char)0] [i_3] [i_3]))));
            var_62 = ((/* implicit */unsigned char) ((var_9) + (((/* implicit */unsigned long long int) ((long long int) (signed char)37)))));
        }
        for (unsigned long long int i_24 = 2; i_24 < 10; i_24 += 4) 
        {
            var_63 = ((/* implicit */unsigned int) (short)-27898);
            var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5362412755829191356LL)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_78 [i_2] [i_24] [(signed char)3] [i_24] [i_2])), (var_2)))) ? (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned long long int) var_1)) : (var_2))) : (((/* implicit */unsigned long long int) ((unsigned int) 53))))) : (((((/* implicit */_Bool) ((arr_35 [i_24] [i_2] [0ULL] [(signed char)8] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32735)))))) ? (((/* implicit */unsigned long long int) arr_23 [i_2] [1U] [0LL])) : (var_2))))))));
            arr_83 [10U] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
            var_65 = ((/* implicit */unsigned int) 11685608708283158357ULL);
        }
        /* vectorizable */
        for (unsigned int i_25 = 0; i_25 < 11; i_25 += 4) 
        {
            var_66 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
            var_67 = ((signed char) (short)32748);
            /* LoopNest 3 */
            for (short i_26 = 0; i_26 < 11; i_26 += 3) 
            {
                for (unsigned char i_27 = 4; i_27 < 8; i_27 += 1) 
                {
                    for (signed char i_28 = 1; i_28 < 10; i_28 += 3) 
                    {
                        {
                            arr_95 [i_2] [10ULL] [i_27] [i_27] [2LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_28] [i_28] [2U] [i_28] [6U] [i_28 + 1] [i_27])) || (((/* implicit */_Bool) (~(8763035168966467776LL))))));
                            var_68 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_27 + 2] [i_28 + 1])) && (((/* implicit */_Bool) arr_14 [i_2] [i_27 - 4] [i_28 - 1]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_29 = 3; i_29 < 7; i_29 += 4) 
            {
                for (signed char i_30 = 1; i_30 < 9; i_30 += 4) 
                {
                    {
                        arr_101 [i_2] [(unsigned char)3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_3))))));
                        arr_102 [i_2] [i_2] [i_29 - 3] [i_2] = ((/* implicit */_Bool) (-(arr_42 [i_2] [i_25] [(_Bool)1] [i_30] [i_2] [i_25])));
                    }
                } 
            } 
        }
    }
    var_69 = ((/* implicit */signed char) var_13);
    var_70 = ((((/* implicit */_Bool) (+(((unsigned long long int) var_13))))) || (((/* implicit */_Bool) var_12)));
    var_71 = ((/* implicit */short) min((var_15), (var_5)));
    var_72 |= ((/* implicit */signed char) var_3);
}
