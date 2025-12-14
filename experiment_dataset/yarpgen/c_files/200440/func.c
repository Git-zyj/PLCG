/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200440
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
    var_14 &= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11)))))) ? (var_13) : (var_6));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_15 &= ((unsigned short) (+(3542543460U)));
        var_16 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (1778410830U))));
        var_17 = ((/* implicit */short) ((unsigned int) 9223372036854775807LL));
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))) / (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0 - 2]) : (var_11)))));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) var_12);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775787LL)) ? (((arr_4 [i_1 + 1]) & (var_11))) : (max((((((/* implicit */_Bool) (short)-32614)) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) (short)-23434))))));
        var_19 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8726223529737797325LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9596))) : (arr_6 [i_1])))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_13) != (var_3)))))));
        var_20 = -1337907856361453176LL;
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_2]) : (((/* implicit */long long int) var_9))));
        arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) arr_3 [i_2])));
        var_22 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)55931))))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_23 = arr_10 [i_3];
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_16 [i_4] = ((/* implicit */unsigned int) max((((3597253649115941855LL) & (-3597253649115941859LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-32617))))) : ((+(var_8))))))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (max((var_2), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) var_7)) ? ((~(-4710950406280862951LL))) : (((/* implicit */long long int) 3067306070U)))) : (((/* implicit */long long int) (~(var_13))))));
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_4]) : (arr_10 [i_3])))) ? (((/* implicit */long long int) var_4)) : (((((((/* implicit */_Bool) 3597253649115941866LL)) ? (8504988673607886584LL) : (((/* implicit */long long int) 4294967290U)))) << (((arr_6 [i_4]) - (1112964772U)))))));
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                var_25 &= ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (unsigned short)2951)))));
                /* LoopSeq 4 */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1165502819U)) ? (3597253649115941866LL) : (4945051936089068059LL)));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((unsigned int) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) var_2)))))));
                    arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_10);
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (unsigned short)17937))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_29 [i_3] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) var_9);
                        arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned short) var_12));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((5512158930538424685LL), (((/* implicit */long long int) (unsigned short)65517)))))));
                        var_30 = ((((/* implicit */_Bool) var_3)) ? (min((arr_12 [i_3]), (((/* implicit */unsigned int) (unsigned short)40724)))) : (var_6));
                        arr_31 [i_5] [i_5] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) -8504988673607886584LL);
                    }
                }
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))), (((arr_34 [i_3] [i_5] [i_5] [i_5]) - (((/* implicit */long long int) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_5])))))) : ((+(-641517726451741446LL)))));
                    var_32 &= ((/* implicit */unsigned int) min(((unsigned short)10481), ((unsigned short)59659)));
                    var_33 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) 1630682154U)), (arr_0 [i_3]))) : ((~(-7870350830372744996LL)))))));
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)10)) ? (152623848U) : (2227014112U))) & (max((((((/* implicit */_Bool) var_10)) ? (var_4) : (var_8))), (max((((/* implicit */unsigned int) var_0)), (var_13)))))));
                    arr_39 [i_5] [i_3] [i_5] [i_5] [i_6] [i_10] = ((/* implicit */short) max((((((((/* implicit */long long int) var_8)) & (arr_15 [i_6] [i_10]))) & (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_37 [i_3] [i_5] [i_6] [i_10])), (min((var_0), (var_0))))))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0)))))));
                }
                for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_12 = 2; i_12 < 8; i_12 += 2) 
                    {
                        arr_44 [i_3] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) var_4);
                        arr_45 [i_3] [i_5] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (816211667U) : (2683845U)));
                    }
                    arr_46 [i_11] [i_5] [i_5] [i_3] = ((/* implicit */unsigned int) ((unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (max((-3597253649115941844LL), (((/* implicit */long long int) arr_21 [i_5] [i_5] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (short)-5030)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_36 &= ((/* implicit */long long int) arr_23 [i_3] [i_6] [i_11]);
                        var_37 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_5])) ? (var_8) : (var_9)))), (((arr_19 [i_3] [i_5] [i_5]) - (((/* implicit */long long int) var_13))))));
                    }
                    var_38 = ((/* implicit */short) var_11);
                }
            }
            for (unsigned short i_14 = 3; i_14 < 8; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    for (long long int i_16 = 2; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */short) (-((~(((var_4) ^ (var_13)))))));
                            var_40 = ((/* implicit */short) var_12);
                            var_41 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 836512734U)) ? (max((8504988673607886605LL), (((/* implicit */long long int) (unsigned short)24820)))) : (((/* implicit */long long int) (-(arr_5 [i_3]))))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) -1263852470460126842LL)) ? (-847022189719923401LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))))))));
                arr_56 [i_5] [i_5] [i_14] = ((unsigned int) ((((4294967295LL) - (-5713920894860870708LL))) + (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                var_43 = ((/* implicit */unsigned short) ((long long int) max((-9223372036854775806LL), (((/* implicit */long long int) (short)22)))));
                var_44 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_47 [i_14 - 2] [i_5] [i_14 + 3] [i_14 - 3] [i_14 - 1])), (((3135064685U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14029)))))))) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_9))))) : (((unsigned int) (unsigned short)45678)));
            }
            var_45 = ((/* implicit */unsigned int) max(((short)5029), (((/* implicit */short) (!(((/* implicit */_Bool) -8504988673607886609LL)))))));
        }
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
        {
            arr_60 [i_3] [i_3] = ((/* implicit */long long int) (+(arr_6 [i_17])));
            arr_61 [i_17] = (+(arr_25 [i_3] [i_3] [i_3] [5LL]));
        }
    }
    for (short i_18 = 0; i_18 < 20; i_18 += 4) 
    {
        var_46 = ((/* implicit */long long int) min((var_46), (((long long int) (~(max((2067953161U), (((/* implicit */unsigned int) (unsigned short)10026)))))))));
        var_47 = ((/* implicit */unsigned int) (unsigned short)26913);
        arr_65 [i_18] &= ((/* implicit */unsigned int) (unsigned short)11061);
    }
    var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047))) | (var_8))) | (((((/* implicit */_Bool) (short)-5020)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))), (((((/* implicit */long long int) var_13)) | (-1834993886263186366LL))))) : (((/* implicit */long long int) var_3))));
}
