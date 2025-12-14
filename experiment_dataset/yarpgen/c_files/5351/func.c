/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5351
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [(unsigned short)3] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */signed char) (((((~(arr_1 [3ULL] [i_0]))) * (((/* implicit */unsigned long long int) 1125865547104256LL)))) * (min((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_11))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                arr_11 [i_1] [i_2] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_1])) : (((((((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_3])) + (17338))) - (3)))))));
                var_21 = ((/* implicit */unsigned short) ((min((0U), (var_18))) | (((/* implicit */unsigned int) (-(arr_6 [i_1]))))));
            }
            for (short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                arr_14 [i_1] [i_2] = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_4] [i_4])) ? (1125865547104256LL) : (((/* implicit */long long int) arr_8 [i_1] [i_2] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29088))))))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) -126072945)) && (((/* implicit */_Bool) -1))))), (var_12)))))));
                arr_15 [(_Bool)1] [i_2] [i_4] = ((/* implicit */short) arr_12 [i_1] [i_2] [19ULL]);
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_20 [i_5] [i_2] [i_4] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (-126072960) : (((/* implicit */int) arr_5 [i_1])))))));
                            arr_21 [i_1] [i_2] [i_4] [i_4] [i_5] [i_6] [i_6] = ((((((/* implicit */_Bool) (-(var_17)))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_2] [i_4] [i_6]), (((/* implicit */int) arr_10 [i_2] [(_Bool)1] [i_5] [i_6]))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1044480U)) ? (((/* implicit */unsigned int) max((var_8), (((/* implicit */int) var_16))))) : ((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                            arr_22 [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_4] [i_4] [i_2] [i_2] [i_1])))))) == (max((((/* implicit */long long int) arr_9 [i_1] [i_1])), (-1125865547104257LL)))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((0ULL) + (24ULL)))) ? (4293922815U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    var_22 = ((/* implicit */short) 1044481U);
                    var_23 = ((unsigned long long int) ((short) arr_13 [i_1] [i_2]));
                }
                for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    arr_30 [i_2] [i_8] = ((/* implicit */short) ((signed char) arr_10 [i_1] [i_1] [i_4] [i_4]));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_24 -= ((/* implicit */short) var_9);
                        var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_32 [i_4] [i_2] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39117))) : (var_10))), (((/* implicit */unsigned int) arr_17 [i_1] [i_9] [(short)16] [i_8]))))) ? (((/* implicit */long long int) (~((+(((/* implicit */int) var_16))))))) : ((-(var_11)))))));
                    }
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_26 = arr_26 [i_2] [i_2] [i_2] [i_2];
                        var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [14] [14] [i_4]))));
                        arr_35 [i_1] [i_2] [i_4] [i_8] [i_4] [i_10] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -1091300921)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32758))) : (var_3))) << (((/* implicit */int) ((_Bool) var_10))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1091300934), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))));
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_29 [(short)2] [i_2] [21U] [i_8])) : (((/* implicit */int) arr_29 [15U] [i_2] [i_4] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : ((~(8126517342133980342LL))));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    arr_39 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_16 [i_1] [(_Bool)1] [7ULL] [i_4] [i_2]) == (var_17)))), (max((var_0), (((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) (-(var_15))))));
                    arr_40 [i_1] [i_1] [i_4] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_9 [i_2] [i_11]))) & ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
                    arr_41 [(unsigned short)17] = ((/* implicit */unsigned short) min((((/* implicit */int) (short)-29973)), (((int) var_3))));
                    arr_42 [12LL] |= ((/* implicit */short) min((((/* implicit */unsigned int) ((3237410993U) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_1] [(signed char)13] [i_1] [i_11]))))))))), (((((/* implicit */_Bool) (~(arr_7 [(short)0] [i_4] [i_2] [i_1])))) ? (arr_37 [i_2] [i_4] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    var_29 ^= ((/* implicit */short) (unsigned short)55549);
                }
                for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    arr_45 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned long long int) (-(var_18)));
                    arr_46 [i_1] [9] [9] = 1731924534249499488LL;
                }
                arr_47 [i_2] [(signed char)15] = 1451550234;
            }
            for (int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                arr_52 [i_2] [i_13] = ((/* implicit */int) arr_24 [i_1] [i_2] [i_13] [(signed char)7]);
                arr_53 [i_1] [i_1] [i_13] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) 2653302020962723733LL)) : (arr_27 [i_1] [i_2] [i_2] [i_1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((1731924534249499484LL) != (((/* implicit */long long int) var_0)))))) > (((long long int) var_5))))))));
            }
            arr_54 [i_1] [i_2] [i_2] = (~(((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */int) (unsigned char)46)))));
        }
        for (int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            var_30 |= ((((/* implicit */_Bool) ((max((arr_36 [i_1] [i_1] [i_1] [i_14]), (((/* implicit */unsigned long long int) arr_37 [i_1] [i_14] [i_14] [i_14])))) / (((/* implicit */unsigned long long int) 1374870737))))) ? ((~(((((/* implicit */int) arr_33 [i_1] [i_1] [(unsigned char)20] [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) (signed char)1)))))) : ((~(arr_7 [i_1] [i_14] [i_1] [i_14]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                var_31 = ((/* implicit */signed char) var_11);
                arr_60 [i_1] [i_14] = min((((/* implicit */int) ((((/* implicit */_Bool) ((int) var_12))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))))), (((int) 2087238031)));
                var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_1] [(short)15])) ? (((/* implicit */int) arr_24 [i_14] [(short)17] [(short)6] [i_14])) : (var_17))), (((/* implicit */int) var_9))))), (((var_15) >> (((((/* implicit */int) arr_29 [i_1] [i_14] [i_15] [i_15])) + (31068)))))));
                arr_61 [i_15] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_12)))))), (max((min((((/* implicit */unsigned int) var_1)), (3064594998U))), (((/* implicit */unsigned int) (unsigned short)52208))))));
                arr_62 [i_1] [(signed char)6] = ((((/* implicit */int) ((((/* implicit */unsigned int) -1492276952)) == (((var_14) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_1] [1U] [i_15] [i_15] [i_15] [i_15])))))))) << (((arr_7 [i_1] [i_1] [i_14] [i_14]) - (368125915))));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        arr_72 [i_1] [i_17] [i_17] [i_18] = (unsigned short)59861;
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21951)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_16] [i_16] [i_16] [i_18])))))) : (var_18)))))));
                    }
                    for (signed char i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        var_34 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_50 [i_1] [i_16] [i_17])) ? (((((/* implicit */_Bool) var_3)) ? (arr_31 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)1)))))))));
                        arr_75 [(unsigned short)0] [(unsigned short)0] [i_17] [i_19] &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_37 [i_1] [i_16] [i_17] [i_19]))))))) == (((/* implicit */int) (short)-4993))));
                        var_35 = ((/* implicit */long long int) ((max((arr_51 [i_1]), (arr_51 [i_1]))) / (((arr_51 [i_1]) << (((arr_51 [i_17]) - (9751696912345860813ULL)))))));
                    }
                    for (long long int i_20 = 0; i_20 < 22; i_20 += 1) 
                    {
                        var_36 = ((((/* implicit */_Bool) (short)-1)) ? ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_44 [i_1] [i_1] [i_17])))))) : (((/* implicit */int) var_1)));
                        var_37 = ((/* implicit */short) ((((arr_27 [i_1] [i_16] [i_17] [i_20]) & (((/* implicit */unsigned long long int) var_8)))) > (((((/* implicit */unsigned long long int) var_4)) ^ (arr_27 [i_1] [i_1] [i_17] [i_20])))));
                    }
                    var_38 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6165))) - (arr_27 [i_1] [i_16] [i_1] [i_17]))));
                    arr_79 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (-(131071)))) ? (((/* implicit */int) arr_44 [i_1] [i_16] [12LL])) : (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_8)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)16908)) | (((/* implicit */int) (short)31777))))))));
                    arr_80 [i_16] [i_16] [i_17] [i_17] = ((/* implicit */long long int) (-((-(((/* implicit */int) var_9))))));
                    /* LoopSeq 2 */
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        arr_85 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_70 [i_17] [i_16] [i_17])), (-131072)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_1])) ? (-324603669) : (((/* implicit */int) arr_70 [i_17] [i_16] [i_21]))))) : (((((/* implicit */_Bool) arr_70 [i_17] [i_17] [i_17])) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                        var_39 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)19831)) / (var_19)));
                    }
                    for (short i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        var_40 = ((/* implicit */int) max((var_15), (((/* implicit */unsigned long long int) ((int) arr_32 [i_16] [i_1] [19U] [i_1] [i_1] [19U])))));
                        arr_90 [i_17] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) arr_7 [i_16] [2] [i_16] [i_16])) ? (-1472756923) : (var_4))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_71 [i_1] [i_16] [i_16] [i_22])) || (((/* implicit */_Bool) -131070))))))));
                        arr_91 [i_1] [i_1] [i_1] [i_16] [i_17] [i_22] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
            } 
        } 
        var_41 -= ((/* implicit */unsigned char) arr_68 [i_1] [i_1]);
        arr_92 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-4386)), (arr_48 [i_1] [(unsigned char)8] [i_1]))))) - (max((9100670885963250412ULL), (((/* implicit */unsigned long long int) arr_57 [i_1] [i_1] [i_1] [i_1])))));
        var_42 = ((/* implicit */short) max((var_42), (min((((short) ((short) var_18))), (((/* implicit */short) arr_4 [i_1]))))));
    }
    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */unsigned long long int) var_17)))) * (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))))))) ? (min((min((var_15), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (+(var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_44 = min((((((/* implicit */_Bool) min((var_7), (772640919)))) ? (min((var_18), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)63))))))), (var_18));
    var_45 = ((/* implicit */short) ((unsigned long long int) 8872547735485035081ULL));
}
