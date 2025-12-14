/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47288
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
    var_13 = var_8;
    var_14 = (~(var_0));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0ULL) : (18446744073709551613ULL)));
        var_15 += ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3)))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    var_16 += var_11;
                    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2]))))) : ((-(0ULL)))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))) : ((-(((var_7) * (((/* implicit */int) var_3))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            arr_14 [(short)11] [(short)11] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 699016574)))) ? (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (0ULL)))))) : (((((/* implicit */int) (unsigned char)123)) ^ (((/* implicit */int) (_Bool)1))))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) | ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-925897755)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551596ULL)) && (((/* implicit */_Bool) var_11))))) : (((((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */int) (unsigned char)155)) ^ (((/* implicit */int) arr_5 [i_4])))) - (29966)))))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(var_1))))));
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                arr_17 [i_4] [i_1] &= ((/* implicit */short) ((((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))))) * (((/* implicit */unsigned long long int) (-(var_6))))));
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) (+(((arr_18 [i_1] [i_1] [12ULL] [i_4] [i_5] [i_1]) % (((/* implicit */int) arr_3 [i_1] [i_1]))))));
                    arr_20 [i_1] [(_Bool)1] [i_5] [(_Bool)1] [i_6] [(unsigned char)5] = ((/* implicit */unsigned long long int) var_8);
                }
                for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    arr_23 [i_1] [i_1] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */int) 7614210452251393340ULL);
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_7 [i_4] [i_4])) + (((/* implicit */int) arr_13 [(_Bool)1]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) - (var_12))) + (((((/* implicit */int) (_Bool)1)) - (var_0)))))) : (18446744073709551611ULL)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_26 [i_4] = ((/* implicit */int) var_11);
                    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_12) : (((/* implicit */int) (short)-24074))));
                }
                var_23 = (((_Bool)1) && (((/* implicit */_Bool) 10ULL)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    arr_30 [i_9] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_4 [i_1]))));
                    arr_31 [i_1] [i_1] [12] [i_1] = ((((((/* implicit */_Bool) 0ULL)) && ((_Bool)1))) ? (((/* implicit */int) ((18446744073709551592ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)31705)) && (((/* implicit */_Bool) (unsigned char)255))))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 31)) ? (33ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (short i_10 = 2; i_10 < 12; i_10 += 4) 
                {
                    arr_35 [i_1] [i_1] [i_5] [i_10 + 2] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_1] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_10 + 1]))) : (17702853307083352003ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [(short)5] [i_10 + 2])))))));
                    var_25 += var_4;
                    arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)8)) < (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) var_8)) : (((((-1927969821) + (2147483647))) << (((var_1) - (9245786360603881935ULL)))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    arr_39 [i_1] [8] [i_5] [(unsigned char)0] [i_5] [3] &= ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-423))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_26 &= ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        arr_44 [i_1] [i_1] [i_1] [i_12] [i_11] [i_12] = ((/* implicit */_Bool) (~(arr_32 [i_1] [i_4] [i_5] [i_5] [i_1])));
                    }
                }
            }
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                arr_48 [3ULL] [i_13 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((~(255))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        arr_55 [i_14] [6] [i_14] = ((/* implicit */int) ((arr_33 [i_1] [i_4] [(_Bool)1] [i_14 + 1] [i_15]) == (var_2)));
                        arr_56 [i_14] = ((((/* implicit */_Bool) (short)9537)) ? (((/* implicit */int) arr_52 [i_14 + 1] [(unsigned char)9] [i_4] [i_13] [i_4])) : (((/* implicit */int) (unsigned char)255)));
                        arr_57 [i_1] [i_14] [i_14] [10ULL] [i_15] = ((/* implicit */unsigned char) arr_37 [i_1] [i_4] [i_4] [12] [i_4]);
                        var_28 = ((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) (unsigned char)141)))) / (((/* implicit */int) arr_28 [i_1] [i_4] [i_13 - 1] [i_14 + 1] [i_15])));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_60 [i_1] [i_4] [i_13] [i_4] [i_14] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_47 [i_16 - 1] [1] [i_1]))));
                        arr_61 [(unsigned char)8] [i_14] [i_13 - 1] [(_Bool)1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(17000746507792891951ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(short)11] [i_4] [i_16 - 1]))) : (((((/* implicit */_Bool) (short)-22055)) ? (15333413402231440275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) 16246382423525929700ULL))));
                    var_30 &= ((/* implicit */unsigned long long int) var_4);
                }
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                var_31 = (!(((/* implicit */_Bool) (+(var_1)))));
                var_32 = ((/* implicit */short) (((_Bool)1) ? (var_0) : (((/* implicit */int) arr_53 [i_4] [13ULL] [i_17] [i_17] [i_1]))));
                var_33 -= (~(((/* implicit */int) (short)2964)));
            }
        }
        for (int i_18 = 3; i_18 < 13; i_18 += 3) 
        {
            var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (var_1)));
            arr_67 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12))));
            arr_68 [i_1] [(_Bool)1] [i_18] = ((/* implicit */int) ((var_1) & (((arr_52 [i_1] [i_18 - 2] [i_18] [i_1] [i_18 - 2]) ? (5746047717870694763ULL) : (((/* implicit */unsigned long long int) 1086326227))))));
        }
        for (short i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            var_35 *= ((/* implicit */unsigned char) arr_24 [(_Bool)1] [i_19]);
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 2; i_20 < 13; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    for (short i_22 = 0; i_22 < 14; i_22 += 4) 
                    {
                        {
                            var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (var_0))))))) ? (((arr_15 [i_19] [i_20 - 1] [(unsigned char)1]) | ((((_Bool)1) ? (((/* implicit */int) (unsigned char)72)) : (arr_45 [i_1]))))) : (((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_21]))))))));
                            arr_80 [i_1] [i_1] [(unsigned char)13] [i_1] [i_20] [i_21 + 1] [i_1] = ((/* implicit */_Bool) arr_33 [i_1] [i_19] [i_20] [i_1] [i_22]);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_50 [i_19] [i_20] [i_21 + 1] [(_Bool)1] [(_Bool)1] [i_20 + 1])));
                        }
                    } 
                } 
            } 
            arr_81 [i_1] [i_1] = (!(((/* implicit */_Bool) 1445997565916659664ULL)));
            /* LoopSeq 1 */
            for (short i_23 = 1; i_23 < 13; i_23 += 1) 
            {
                var_38 = ((/* implicit */short) (unsigned char)208);
                var_39 *= var_2;
                /* LoopNest 2 */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        {
                            arr_88 [i_1] [i_23] [5ULL] [i_24] [i_25] = (-(((1445997565916659664ULL) & (arr_71 [i_1] [i_23 + 1] [i_1]))));
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (_Bool)1)))))) : (((arr_64 [i_23 + 1] [i_24 - 1] [i_24 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (int i_26 = 0; i_26 < 14; i_26 += 4) 
        {
            for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
            {
                for (int i_28 = 1; i_28 < 11; i_28 += 4) 
                {
                    {
                        var_41 -= ((/* implicit */unsigned long long int) ((18446744073709551578ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180)))));
                        var_42 -= ((/* implicit */short) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
    }
}
