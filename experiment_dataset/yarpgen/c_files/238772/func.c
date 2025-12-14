/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238772
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
    var_20 = ((/* implicit */_Bool) 3901668797U);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (max((var_1), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (1580856212) : (((/* implicit */int) var_8)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) max((var_3), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_4 [i_2] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)54249))))))))));
                        var_22 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_0))))), (((/* implicit */long long int) (-(min((var_16), (((/* implicit */unsigned int) (signed char)-84)))))))));
                        arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [2U] [i_2] [i_0])) : (((/* implicit */int) (signed char)84))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_0]))) : (arr_0 [i_0] [i_0]))))) | (829207564267266307LL)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [i_2] [i_2] [i_3] [i_1]) : (arr_12 [i_0] [i_1] [i_2] [i_2] [i_2]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        var_23 |= ((/* implicit */int) ((short) ((unsigned int) arr_12 [i_4] [i_4] [i_4] [i_4] [i_4])));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) var_2);
        /* LoopSeq 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_24 = ((/* implicit */int) arr_21 [i_4]);
            arr_23 [i_4] [i_5] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_8 [i_4] [i_4] [i_5 - 1] [(unsigned char)4]))))));
            var_25 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7588)) ? (393298498U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_17)), (arr_1 [i_4])))) ? (((((/* implicit */_Bool) 829207564267266329LL)) ? (((/* implicit */unsigned long long int) -829207564267266307LL)) : (14824858160736501223ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30549)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) var_12))))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_26 = ((/* implicit */_Bool) (~(arr_3 [(short)12])));
            arr_26 [i_4] = ((/* implicit */unsigned int) (-(arr_3 [12])));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((arr_1 [11U]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))))));
        }
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            arr_30 [i_4] [i_4] [i_7] = ((/* implicit */_Bool) ((unsigned char) arr_27 [i_4]));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) 
            {
                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3606758524U))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 2) 
                {
                    var_29 = ((/* implicit */int) max((((((/* implicit */_Bool) 3606758535U)) ? (((((/* implicit */_Bool) (short)-14196)) ? (((/* implicit */unsigned long long int) var_9)) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_11)))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_7]))) : (3606758526U))))))));
                    var_30 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_7] [i_8 - 1] [9U])), (max((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) max((((/* implicit */int) (short)-32765)), (-408580462)))) : (max((((/* implicit */unsigned int) var_18)), (4294967295U)))))))))));
                    arr_37 [i_4] [(_Bool)0] [(_Bool)1] [i_8] [i_4] = ((/* implicit */short) (~(max((((((/* implicit */_Bool) 0U)) ? (18446744073709551615ULL) : (9013201675906136276ULL))), (((((/* implicit */_Bool) 829207564267266307LL)) ? (arr_5 [i_7]) : (((/* implicit */unsigned long long int) var_14))))))));
                    var_32 = ((/* implicit */unsigned int) var_3);
                }
                var_33 = ((short) ((((/* implicit */_Bool) 5796466724360810207ULL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)117)) > (((/* implicit */int) (unsigned char)117)))))));
            }
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                arr_40 [i_4] [i_7] [i_10] [i_4] |= ((/* implicit */unsigned int) ((unsigned char) ((arr_0 [i_7] [i_7]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_32 [i_4] [i_4] [0] [i_4])) : (((/* implicit */int) var_19))))))));
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_45 [1ULL] [13LL] [i_4] [i_4] [i_4] [(unsigned short)1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((arr_9 [i_10] [i_7] [i_10]) - (2094263870U)))))) || (((/* implicit */_Bool) ((short) (_Bool)0))))) ? (min((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_19))))), (((/* implicit */long long int) ((short) arr_16 [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_4] [i_7] [i_10])) ? (((/* implicit */int) arr_43 [i_4] [i_7] [i_10])) : (((/* implicit */int) (unsigned short)15219)))))));
                    arr_46 [i_4] = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_33 [i_4] [i_7] [i_4]))))));
                    var_34 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2)) ? (-829207564267266307LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14210)))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((3985545721364799934LL) < (((/* implicit */long long int) ((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(unsigned short)13] [i_4])))))))))));
                    arr_47 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 688208769U))) ? (((unsigned int) (short)21655)) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    var_36 = ((/* implicit */short) arr_10 [i_12] [(short)2] [i_7] [i_7] [(unsigned short)8] [i_4]);
                    var_37 += ((/* implicit */short) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) / (127U))), (((3964751372U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)12)))))))));
                    var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 2) 
                {
                    arr_54 [i_13] [i_7] [i_13] [i_13] &= ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_33 [i_4] [i_7] [i_7]))) - (((((/* implicit */_Bool) arr_21 [i_13 + 3])) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_2))))) : (max((arr_27 [i_7]), (((/* implicit */long long int) (_Bool)1))))))));
                    arr_55 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)0))))) : (min((((/* implicit */unsigned int) (short)-8192)), (var_9))))), (((/* implicit */unsigned int) ((arr_17 [i_4] [i_13]) ? (((/* implicit */int) arr_10 [i_4] [i_7] [i_7] [i_7] [i_4] [i_7])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_31 [10] [10] [i_10] [10])))))))));
                    var_39 = ((/* implicit */unsigned int) (+(-8789822266038972901LL)));
                    var_40 = ((/* implicit */unsigned int) arr_5 [i_4]);
                }
                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)68)), (2147483647)))) ? (829207564267266307LL) : (((/* implicit */long long int) ((int) (unsigned char)215)))))) ? (var_15) : (((/* implicit */int) arr_48 [7LL] [i_7] [i_10] [13LL]))));
            }
            var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= ((~(arr_35 [i_4] [i_4] [13U] [i_4] [(signed char)5]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_1 [6U]) : (582333848U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_33 [i_7] [i_4] [i_4])))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-21656)) || (((/* implicit */_Bool) (short)-29286))));
            var_44 = ((/* implicit */unsigned int) (short)21655);
            var_45 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_17))) < ((-(min((arr_22 [i_14]), (((/* implicit */long long int) var_1))))))));
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                for (short i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    {
                        arr_68 [i_14] [i_15] [1ULL] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) 1123379554U)) ? (((((/* implicit */_Bool) arr_60 [i_15])) ? (arr_60 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        var_46 = ((/* implicit */unsigned char) ((((((_Bool) var_15)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_6 [i_17]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned char) (signed char)-81)))))) < ((~(var_1)))))))));
                    }
                } 
            } 
            arr_69 [i_14] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)3393)));
        }
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                {
                    var_47 = ((/* implicit */unsigned int) -950867090);
                    var_48 = ((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20075))) : (3267534373U))), (max((arr_35 [(short)12] [i_18] [i_19] [i_19] [i_14]), (arr_0 [i_14] [i_14])))));
                }
            } 
        } 
    }
    for (signed char i_20 = 0; i_20 < 15; i_20 += 3) 
    {
        arr_77 [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-84))))));
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned char i_22 = 0; i_22 < 15; i_22 += 2) 
            {
                {
                    arr_84 [i_20] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_20] [i_20])), (max((((/* implicit */long long int) ((_Bool) (short)(-32767 - 1)))), (((((/* implicit */_Bool) 3211987731U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1724420234575474967LL)))))));
                    arr_85 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_21] [i_20]), (4294967169U)))) ? (((0ULL) >> (((8030830601886462004ULL) - (8030830601886461946ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)249))))));
                    var_49 = ((/* implicit */unsigned char) 1582938254U);
                }
            } 
        } 
        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_83 [(unsigned char)12] [i_20] [i_20] [(unsigned char)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4294967169U)))) : (min((arr_0 [i_20] [6U]), (((/* implicit */unsigned int) var_11)))))))))));
    }
}
