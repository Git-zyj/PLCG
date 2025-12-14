/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49641
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
    var_13 = ((/* implicit */unsigned int) ((3427538695947061654LL) | (-3427538695947061633LL)));
    var_14 = ((((/* implicit */_Bool) ((0ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (4294967295U) : (((/* implicit */unsigned int) 1529703736)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 - 1])) ^ (-3427538695947061663LL)));
                    arr_9 [(unsigned char)13] [(unsigned char)13] [11U] &= ((((/* implicit */unsigned int) -898381641)) * (arr_4 [i_0] [i_0 - 1]));
                    var_16 &= ((/* implicit */_Bool) var_12);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_7))));
                    arr_10 [23ULL] [23LL] [(_Bool)1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (3427538695947061654LL) : (((/* implicit */long long int) 336564678U))))) ? (arr_5 [i_0 - 1] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2])))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */unsigned int) var_8)) : (arr_5 [i_0 + 2] [i_0]))))));
        arr_11 [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) arr_6 [24U] [i_0] [(unsigned char)12] [4])) : (var_11)))) ? (((/* implicit */long long int) 336564678U)) : (arr_3 [i_0 - 1])));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_14 [(short)6] = (!(((/* implicit */_Bool) max(((-(var_5))), (((long long int) 773583546))))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 24; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_26 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((((unsigned int) arr_19 [i_5] [12LL] [i_6] [i_6])) - (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (var_3)))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3427538695947061654LL)) ? (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)131)))) : (((/* implicit */int) (unsigned char)121)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_29 [2U] [i_4] [i_4 - 3] [i_4 - 3] [i_4] [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_6])) ? (3427538695947061654LL) : (((/* implicit */long long int) arr_4 [i_6] [17U])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_3] [24] [i_3] [i_3 - 1] [i_3 - 1] [i_5])))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((arr_12 [i_7]) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) arr_12 [i_3 - 1])))) : (((/* implicit */int) ((_Bool) arr_12 [i_6])))));
                        }
                        var_20 = ((/* implicit */short) var_3);
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */int) (signed char)-26)), (var_10))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2668008598U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3 - 1] [13ULL] [i_9])) ? (((/* implicit */unsigned int) var_2)) : (arr_7 [i_9] [i_8]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                    {
                        arr_37 [i_3] |= ((/* implicit */int) ((arr_17 [i_3 - 1] [i_3 - 1] [i_3 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3 - 1] [21U] [i_10])))));
                        arr_38 [23ULL] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)134)) & (572858334)));
                        arr_39 [i_3] [i_3 - 1] [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))) : ((-(var_11)))));
                    }
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            arr_45 [i_8] [i_9] = ((((/* implicit */_Bool) 3958402618U)) ? (((/* implicit */int) (unsigned char)124)) : (2147483647));
                            arr_46 [i_3] [i_3] [(unsigned char)0] [i_9] [i_3] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? ((+(((((/* implicit */_Bool) (short)-16350)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)131)))))));
                        }
                        var_23 = ((/* implicit */signed char) var_8);
                        arr_47 [i_11] [i_11] = ((/* implicit */unsigned int) (~(var_0)));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (arr_42 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_42 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))) ? (((arr_42 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) << (((8184) - (8170))))) : (arr_42 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 4; i_13 < 13; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 11; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_22 [i_13] [i_13] [i_15] [i_13] [i_13]))));
                        var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) - (((arr_51 [i_13] [i_13 + 1]) - (((/* implicit */int) (unsigned char)131))))));
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~(var_8))))));
                            var_28 ^= ((/* implicit */unsigned int) var_12);
                            arr_60 [10U] [i_15] [i_15] [10U] = ((/* implicit */unsigned long long int) ((2602306711U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (2164862777105204568ULL) : (((/* implicit */unsigned long long int) var_10))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            var_30 = ((/* implicit */int) min((var_30), ((((_Bool)0) ? (arr_28 [20] [i_16] [21ULL] [i_13] [i_13] [24U]) : (524224)))));
                            var_31 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (4364192787882028398LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_13] [i_14] [i_14 + 3] [i_14])))));
                        }
                    }
                    for (unsigned char i_19 = 0; i_19 < 14; i_19 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_20 = 0; i_20 < 14; i_20 += 3) 
                        {
                            arr_69 [i_13] [i_15] [i_19] [8] |= ((/* implicit */int) max((((unsigned int) 570185740)), (((/* implicit */unsigned int) ((_Bool) var_9)))));
                            arr_70 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_13 - 1] [i_13 - 4])) ? (arr_4 [i_14 + 2] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((((/* implicit */_Bool) arr_4 [i_19] [i_20])) && (((/* implicit */_Bool) arr_4 [i_13] [i_14 + 3]))))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (((!(((((/* implicit */_Bool) 127963507U)) && (((/* implicit */_Bool) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18012440813182495014ULL)))) : (max((((/* implicit */unsigned long long int) arr_5 [i_13 - 4] [i_15])), (16660852288395165429ULL))))))));
                        }
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_68 [i_19] [i_19] [i_15] [i_14] [i_19])))) ? (((((/* implicit */_Bool) arr_68 [i_19] [i_15] [i_15] [i_15] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) : (arr_68 [i_19] [i_19] [i_15] [i_15] [i_19]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 74350883U)))))))))));
                        var_34 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((arr_63 [i_19]) < (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) 16660852288395165438ULL)) ? (-6140481673561596976LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))))) + (((/* implicit */long long int) arr_32 [i_14] [i_14 + 1] [i_14]))));
                        arr_71 [0U] [i_15] [i_15] [i_19] = ((/* implicit */unsigned char) ((((arr_68 [i_15] [i_13] [i_13] [i_13 - 1] [i_15]) < (((/* implicit */long long int) ((/* implicit */int) (short)-31688))))) ? (((((/* implicit */_Bool) 6140481673561596975LL)) ? (arr_68 [i_15] [i_14 + 1] [i_14] [i_13 - 2] [i_15]) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) var_1))));
                    }
                    arr_72 [i_15] = ((/* implicit */_Bool) ((((((/* implicit */long long int) (~(arr_36 [i_13] [(signed char)19])))) >= (var_5))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (1288495368) : (((/* implicit */int) var_7))))) & (arr_64 [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) -255258480)) && (((/* implicit */_Bool) arr_30 [i_15] [i_13] [i_13])))) || (((/* implicit */_Bool) arr_13 [i_15] [i_14]))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_21 = 0; i_21 < 14; i_21 += 2) /* same iter space */
        {
            var_35 -= ((/* implicit */int) arr_27 [i_13] [i_13] [2LL] [24ULL] [24ULL] [i_21]);
            arr_77 [i_13] = ((((((((/* implicit */_Bool) arr_63 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-9223372036854775782LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_13] [21U])))))))) ? (arr_68 [i_13] [i_13] [i_13] [i_21] [i_21]) : (((/* implicit */long long int) ((int) (signed char)30))));
            var_36 += ((/* implicit */long long int) ((((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_12)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_12))))))) > (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) arr_40 [21ULL] [i_21] [i_21] [21ULL] [i_21])) : (((/* implicit */int) (short)-1191)))))))));
            arr_78 [i_13 - 3] [i_13 - 3] = ((/* implicit */unsigned long long int) (+(-1297112893)));
        }
        for (int i_22 = 0; i_22 < 14; i_22 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                for (int i_24 = 1; i_24 < 10; i_24 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_25 = 3; i_25 < 11; i_25 += 1) 
                        {
                            arr_90 [i_13] [i_24] [(unsigned char)13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) arr_30 [i_13] [(short)5] [i_25]);
                            arr_91 [i_13] [i_24] [i_13 - 4] = ((/* implicit */unsigned char) ((max((((/* implicit */int) var_12)), (arr_22 [i_24] [i_24] [i_24 + 2] [i_25 - 1] [i_25]))) + (((/* implicit */int) arr_81 [i_13] [i_23] [i_24 - 1] [7ULL]))));
                            var_37 *= ((/* implicit */unsigned long long int) (!(((127963507U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)20259)))))));
                            var_38 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 14745988074189466595ULL)) ? (4016578252169141113LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14685))))), (((/* implicit */long long int) (short)-20260))));
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) min((-7207962217826028502LL), (((/* implicit */long long int) arr_57 [i_13] [i_24] [i_22] [i_13 + 1] [i_13]))))) ? (max((arr_57 [i_24] [i_22] [13U] [i_13 - 4] [4]), (arr_57 [i_25] [i_25 - 3] [5ULL] [i_13 - 2] [i_13]))) : (((((/* implicit */_Bool) var_5)) ? (arr_57 [i_24] [i_13 - 3] [i_13] [i_13 - 1] [i_13]) : (arr_57 [i_25 + 2] [i_24] [i_13] [i_13 - 1] [i_13])))));
                        }
                        arr_92 [i_13] [7LL] [i_23] [i_23] [i_24] = ((((/* implicit */_Bool) var_12)) ? (max((min((((/* implicit */long long int) var_12)), (arr_63 [i_23]))), (((/* implicit */long long int) min((3934767484U), (((/* implicit */unsigned int) arr_18 [19LL] [i_23] [i_24]))))))) : (((/* implicit */long long int) var_3)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_26 = 3; i_26 < 12; i_26 += 1) 
            {
                for (int i_27 = 0; i_27 < 14; i_27 += 3) 
                {
                    {
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (+(max((((/* implicit */unsigned int) arr_66 [i_22] [i_26 - 1] [i_26 + 1] [i_26 + 1] [i_26])), (var_11))))))));
                        var_41 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (var_11)))));
                    }
                } 
            } 
            var_42 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6140481673561596973LL)) ? (((((/* implicit */_Bool) (short)1190)) ? (((/* implicit */int) arr_73 [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_9)) / (var_2))))))));
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_3)) : (4294967295U))))))));
        }
        arr_97 [i_13] = ((/* implicit */unsigned long long int) max(((((+(((/* implicit */int) arr_66 [i_13] [i_13] [i_13] [i_13 + 1] [i_13])))) << (((max((((/* implicit */long long int) var_10)), (835900796895844207LL))) - (835900796895844202LL))))), (((((/* implicit */_Bool) arr_44 [4] [i_13] [i_13 - 2] [i_13] [4] [i_13 - 4] [i_13])) ? (((/* implicit */int) arr_66 [i_13] [i_13] [i_13 - 3] [i_13 - 2] [i_13])) : (((/* implicit */int) var_12))))));
        var_44 = ((/* implicit */_Bool) (-(12822382620928130738ULL)));
    }
}
