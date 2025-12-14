/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191708
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_1 [i_2 + 1]);
                arr_8 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 3] [i_2 + 1]))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_18 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((3015632976417170758ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 3] [i_2 - 3]))))));
                    var_19 = ((/* implicit */unsigned char) var_6);
                }
            }
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                arr_13 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) 1048060662);
                var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11)) ? (-11) : (((/* implicit */int) (signed char)42))));
                var_21 = ((/* implicit */int) 14172391991390936294ULL);
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_17 [21] [0ULL] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_14 [i_0] [i_0] [i_0]));
                var_22 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-53))));
                var_23 = -577977235;
            }
            var_24 = arr_5 [i_1] [i_0] [1];
        }
        var_25 += ((/* implicit */int) ((signed char) 4266853675011313645ULL));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
        {
            arr_23 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_6] [15])) << (((max((((/* implicit */int) arr_15 [i_6 + 2] [i_7] [i_7])), (min((12), (arr_12 [i_7]))))) - (105)))));
            arr_24 [i_6] [i_7] [i_7] = var_13;
            var_26 *= ((/* implicit */unsigned long long int) 577977243);
        }
        for (int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned char i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                var_27 = var_13;
                arr_31 [(unsigned char)11] &= (+(((((/* implicit */int) (unsigned char)16)) << (((arr_27 [19ULL] [i_9 - 1]) - (8215644640566306318ULL))))));
                arr_32 [i_6] [i_6 + 1] [i_6] = ((/* implicit */signed char) 11);
                var_28 = (-((+(14172391991390936294ULL))));
                arr_33 [i_6] [i_6] [i_6] [i_9 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(577977250)))) ? ((~(var_5))) : (((/* implicit */int) (signed char)62))))) ? (((/* implicit */int) arr_18 [i_8])) : (max((((/* implicit */int) var_10)), (((((/* implicit */int) arr_14 [i_6] [i_8] [i_8])) & (((/* implicit */int) (signed char)-53))))))));
            }
            for (int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (unsigned char)85)) : (67108608))))) ? (((arr_11 [i_8] [10ULL] [i_8]) << (((-16) + (78))))) : (arr_37 [i_6] [i_6] [i_6] [i_6])));
                var_30 ^= ((((/* implicit */_Bool) (~(((arr_0 [13]) * (((/* implicit */unsigned long long int) var_6))))))) ? (arr_9 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) / (275289018)))));
                arr_38 [i_6] [i_6] = (+(((/* implicit */int) var_2)));
                arr_39 [4ULL] [i_8] [i_8] = ((/* implicit */int) (-(var_17)));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
            {
                arr_42 [i_6] [i_8] [i_11] = ((/* implicit */unsigned long long int) (signed char)-36);
                arr_43 [i_11] [i_8] [i_8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 4274352082318615328ULL)) ? (((/* implicit */unsigned long long int) arr_19 [i_6 + 2] [i_6])) : (var_14)));
            }
            for (int i_12 = 2; i_12 < 17; i_12 += 4) 
            {
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)9)) ? (17592186044415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170)))));
                var_32 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_35 [i_12 - 1] [i_12 - 1] [i_6 - 2])) - (((/* implicit */int) var_11))))));
                /* LoopSeq 4 */
                for (int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    var_33 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_6 + 3] [i_12 + 3]))))) ? ((-((-(((/* implicit */int) (signed char)40)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-25))))) ? (arr_40 [i_6 + 3] [i_8] [i_12 + 2] [i_13]) : (((/* implicit */int) ((signed char) var_17))))));
                    var_34 ^= ((/* implicit */unsigned long long int) arr_45 [i_12] [i_6] [i_6]);
                    var_35 ^= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 12253545651504174929ULL)) ? (((/* implicit */int) (signed char)-94)) : (arr_34 [i_6 + 1] [i_12 + 2] [i_12 + 3]))));
                }
                for (int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    arr_50 [i_6] [i_8] [i_12] [7] = ((/* implicit */unsigned char) (+(var_14)));
                    var_36 ^= ((/* implicit */int) arr_20 [i_6 + 3] [i_6 - 1]);
                }
                for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 3) 
                {
                    arr_54 [i_6] [i_6] [i_6] [i_15] = ((/* implicit */unsigned long long int) -12);
                    /* LoopSeq 3 */
                    for (int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        arr_57 [7ULL] [i_8] [i_12] [i_15] [i_12] [i_15] = ((/* implicit */unsigned long long int) var_6);
                        arr_58 [i_6 + 4] [i_16] [i_6 + 4] [(unsigned char)4] [i_16] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_6 [i_6 + 2] [i_12 - 1] [i_16])) << (((var_17) - (11232102549109376242ULL)))))));
                        arr_59 [i_6] [i_6] [i_8] [i_12] [i_15] [i_15] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_12] [i_12] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (arr_34 [i_12 + 1] [i_15 + 3] [i_6 + 1])))) ? (max((arr_11 [i_15] [i_12 - 2] [i_15 + 3]), (((/* implicit */unsigned long long int) ((690654521) - (var_13)))))) : (((/* implicit */unsigned long long int) 1329372608)));
                        var_37 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_26 [i_15 + 1] [i_12 + 2] [i_6])) ? (var_5) : (((/* implicit */int) arr_26 [i_15 + 1] [i_12 + 1] [i_8]))))));
                        arr_60 [i_16] [i_15] [i_12] [i_15] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (((~(arr_45 [i_6] [i_8] [7]))) ^ (((int) arr_27 [i_6] [i_8]))))) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) : (((((/* implicit */_Bool) arr_18 [i_6])) ? (arr_9 [i_12] [(signed char)5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_6] [i_8] [i_12 + 1] [i_8])))))))));
                    }
                    for (signed char i_17 = 2; i_17 < 19; i_17 += 4) 
                    {
                        arr_64 [(signed char)16] [i_8] [4] [i_15] [i_15] = ((/* implicit */unsigned char) var_13);
                        var_38 = ((/* implicit */signed char) min(((~(64636629))), (-64636661)));
                    }
                    for (int i_18 = 1; i_18 < 19; i_18 += 1) 
                    {
                        arr_67 [i_15] [18ULL] [18ULL] [i_8] [i_15] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_28 [i_15 + 1] [i_18 - 1]), (((/* implicit */int) arr_61 [i_6] [i_8] [i_12] [i_15] [i_18 + 1]))))), ((~(((((/* implicit */_Bool) arr_45 [i_6] [i_8] [i_6])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
                        arr_68 [i_15] = max((((/* implicit */int) arr_25 [i_6])), (((((/* implicit */_Bool) max((var_11), (arr_35 [i_6] [11] [i_15])))) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) var_2)))));
                    }
                    var_39 |= ((/* implicit */int) arr_44 [i_6 + 4] [i_15 + 1] [i_6 + 4]);
                    /* LoopSeq 4 */
                    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        var_40 = ((/* implicit */int) arr_27 [i_12] [i_6]);
                        var_41 += ((/* implicit */unsigned long long int) max(((unsigned char)170), (((/* implicit */unsigned char) arr_16 [i_6] [i_8] [i_12]))));
                        var_42 = arr_16 [i_15] [i_12] [i_15];
                        var_43 = ((/* implicit */int) arr_29 [i_6] [i_8]);
                        var_44 &= ((/* implicit */int) (signed char)41);
                    }
                    for (unsigned char i_20 = 1; i_20 < 18; i_20 += 1) 
                    {
                        var_45 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */int) (unsigned char)186)) : (((((/* implicit */_Bool) (-(arr_19 [i_6] [i_6])))) ? (((((/* implicit */int) arr_15 [i_6] [i_12] [18ULL])) / (((/* implicit */int) (unsigned char)81)))) : (((/* implicit */int) arr_30 [i_15] [i_8] [i_8] [i_6 - 1]))))));
                        arr_73 [i_6 - 1] [i_15] [i_15] [i_15] = ((int) (-(((((/* implicit */int) (unsigned char)161)) & (-1479104241)))));
                    }
                    for (signed char i_21 = 0; i_21 < 20; i_21 += 3) /* same iter space */
                    {
                        var_46 |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) 134217728))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (4194296))))) : ((((!(((/* implicit */_Bool) arr_2 [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (var_5) : (((/* implicit */int) (signed char)-83))))) : (arr_37 [i_15 + 2] [i_15 + 2] [i_15 + 3] [i_15 + 2])))));
                        var_47 = ((((/* implicit */_Bool) arr_36 [i_6] [i_6])) ? (var_5) : (((((/* implicit */int) (unsigned char)246)) + (((/* implicit */int) (signed char)-42)))));
                        arr_77 [i_6] [i_15] [i_6] [i_15] [i_21] = (~(((/* implicit */int) (signed char)-40)));
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1329372608)) ? (0) : (721348893)))) ? (min((((/* implicit */unsigned long long int) arr_55 [i_6] [i_6] [i_6 - 2] [4ULL] [i_12 - 2] [i_15 + 2] [4ULL])), (var_14))) : (((/* implicit */unsigned long long int) arr_55 [i_6] [i_6] [i_6 + 4] [i_12] [i_12 + 2] [i_15 + 3] [i_6]))));
                    }
                    for (signed char i_22 = 0; i_22 < 20; i_22 += 3) /* same iter space */
                    {
                        var_49 = ((/* implicit */int) 8747128296859408771ULL);
                        arr_80 [i_6] [i_8] [i_12] [i_6] [i_15] = ((/* implicit */unsigned char) (-(((64636629) - (((/* implicit */int) (signed char)-71))))));
                    }
                }
                for (int i_23 = 0; i_23 < 20; i_23 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_24 = 0; i_24 < 20; i_24 += 2) 
                    {
                        var_50 = ((/* implicit */signed char) ((781271553) < (16252928)));
                        arr_86 [7] [i_8] [i_12] [i_12] [i_12] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((arr_84 [i_6] [i_24] [i_23] [i_12 + 3] [i_8] [i_6] [i_6]) - (-16252928)));
                        arr_87 [i_6] [i_8] [i_8] [0] [i_24] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 32767)) ? (((/* implicit */int) (signed char)49)) : (839833308))))));
                    }
                    for (unsigned char i_25 = 1; i_25 < 16; i_25 += 3) 
                    {
                        arr_90 [i_23] |= arr_45 [i_8] [i_12] [i_23];
                        var_51 = ((/* implicit */signed char) ((781271553) - (((/* implicit */int) (signed char)-112))));
                    }
                    arr_91 [5] [5] [13] [(signed char)3] [(signed char)3] [i_6 + 2] = min((9036676674775211669ULL), (((/* implicit */unsigned long long int) 839833308)));
                }
                arr_92 [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (signed char)41)) << (((((/* implicit */int) (unsigned char)162)) - (139)))))))));
            }
            arr_93 [i_6 - 1] [i_6 + 4] = 839833297;
            arr_94 [i_6] [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)81))));
        }
        arr_95 [i_6] = min(((unsigned char)173), (((/* implicit */unsigned char) arr_89 [8ULL] [(signed char)14] [i_6 - 1] [i_6 - 2])));
    }
    for (unsigned long long int i_26 = 2; i_26 < 16; i_26 += 1) /* same iter space */
    {
        var_52 = ((((/* implicit */_Bool) 1017366781)) ? (min((-577977235), (((/* implicit */int) (unsigned char)95)))) : (577977246));
        var_53 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (min((((((/* implicit */_Bool) 16252921)) ? (((/* implicit */unsigned long long int) 839833282)) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1017366781)) ? (((/* implicit */int) var_2)) : (var_8))))))));
    }
}
