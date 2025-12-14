/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219110
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0 + 2] [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1281120348)) ? (max((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)18246)) : (((/* implicit */int) (signed char)-55)))), (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned char)220)) : ((+(((/* implicit */int) (unsigned char)31))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 3])) ? (((/* implicit */long long int) arr_5 [i_0 + 2])) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */long long int) arr_5 [i_0 - 1])) : (var_5)))));
            var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3612351723U), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) max((arr_4 [i_0 + 2]), (arr_4 [i_0 - 2])))) : (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)31413)) : (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) arr_0 [(unsigned char)8])))))) : (((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (824281347) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))));
            var_18 = ((/* implicit */unsigned short) ((short) (signed char)48));
        }
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)47278)) : ((-(((/* implicit */int) arr_0 [i_0])))))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_10 [i_3 - 1] [i_2])))) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) min((var_14), ((short)25295))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2])))))))) : (((/* implicit */int) var_10))));
                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 + 1] [i_2 - 1]))) : (((((/* implicit */_Bool) var_7)) ? (arr_10 [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56)))))))) ? (((((/* implicit */_Bool) max((var_11), (((/* implicit */short) arr_6 [(unsigned char)3]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)224))));
                arr_11 [i_2 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_2] [i_3 - 4])))) : (((/* implicit */int) arr_6 [i_3 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 14196520438748827920ULL))) ? (((/* implicit */int) (short)10254)) : (((/* implicit */int) (signed char)-45))))) : (958712167U)));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) max((var_13), (((/* implicit */unsigned short) (unsigned char)221))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
    {
        arr_14 [i_4 + 1] = ((/* implicit */unsigned short) arr_12 [i_4] [i_4 + 2]);
        arr_15 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32762)) ? (((unsigned long long int) ((arr_13 [i_4]) & (((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) arr_13 [i_4 + 2]))));
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), (min((((/* implicit */int) min((var_0), (((/* implicit */unsigned char) arr_9 [i_4]))))), (min((209420263), (((/* implicit */int) var_6))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((134217726) / (((/* implicit */int) arr_17 [i_5] [(signed char)22])))) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)));
        var_25 = ((/* implicit */short) (-(((((/* implicit */int) var_2)) >> (((arr_16 [i_5] [i_5]) - (645597440916552444ULL)))))));
    }
    var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) ? ((((_Bool)1) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_10))))))) <= (((/* implicit */long long int) max(((-(((/* implicit */int) var_14)))), (((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (signed char)50))))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_21 [0ULL]), (max((((/* implicit */unsigned short) var_15)), ((unsigned short)47861))))))) : (max((arr_19 [i_6]), (var_9)))));
        /* LoopSeq 3 */
        for (int i_7 = 2; i_7 < 9; i_7 += 4) 
        {
            var_28 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (19344251)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7]))) / (arr_19 [i_6]))))));
            var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) && (arr_17 [i_7 - 2] [(short)9]))) ? (((/* implicit */int) min((max((((/* implicit */unsigned short) (short)30027)), (var_1))), (((/* implicit */unsigned short) arr_18 [i_6]))))) : (((/* implicit */int) var_2))));
            /* LoopNest 3 */
            for (short i_8 = 1; i_8 < 8; i_8 += 1) 
            {
                for (unsigned short i_9 = 2; i_9 < 9; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7 + 1] [i_6])) ? (arr_29 [i_6] [i_6]) : (((((/* implicit */_Bool) arr_27 [2U] [(signed char)8])) ? (arr_28 [i_10] [i_9] [i_8 + 1] [(signed char)2] [i_7 + 1] [i_6]) : (((/* implicit */long long int) 922571579))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_23 [i_6]), (((/* implicit */long long int) arr_20 [i_6]))))) ? ((((_Bool)0) ? (var_3) : (arr_24 [i_6]))) : (((/* implicit */int) var_10))))) : (var_5)));
                            var_31 = ((/* implicit */unsigned char) (-(((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_8)))))));
                            var_32 = ((/* implicit */signed char) ((((_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_7 - 1])))) >= (((/* implicit */int) ((unsigned short) var_14))))))) : (min((((/* implicit */long long int) min((((/* implicit */short) var_15)), (var_12)))), (arr_32 [i_9 + 1])))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-14)))))));
            /* LoopSeq 2 */
            for (int i_11 = 1; i_11 < 9; i_11 += 4) 
            {
                arr_35 [i_6] [i_6] [i_11 + 1] = ((/* implicit */unsigned long long int) min((min((min((((/* implicit */long long int) (unsigned short)8)), (arr_32 [i_6]))), (min((((/* implicit */long long int) var_14)), (arr_32 [i_11]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_11] [i_7 + 1] [i_6])) ? (((/* implicit */int) arr_8 [i_6] [i_6])) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)35), (((/* implicit */unsigned char) (_Bool)1)))))) : (((-6452485071128848434LL) | (var_5)))))));
                /* LoopSeq 3 */
                for (short i_12 = 1; i_12 < 7; i_12 += 1) 
                {
                    arr_40 [i_6] [i_7] [i_6] [i_12 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(unsigned short)3] [(signed char)5] [i_11] [i_6] [i_7 - 1] [i_6])) ? (((((/* implicit */_Bool) arr_27 [i_11 + 1] [i_7 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_27 [i_11 - 1] [i_7 + 1])))) : (((/* implicit */int) var_8))));
                    var_34 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_15)))))) != (((753551581U) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_12))))));
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    var_35 = ((((((/* implicit */_Bool) ((arr_42 [i_6] [i_7 + 1] [i_11 + 1] [i_6]) | (((/* implicit */int) var_13))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (var_7))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-50))))))) | (((/* implicit */unsigned int) max((arr_42 [i_6] [i_11 + 1] [i_7 - 2] [i_6]), (((/* implicit */int) (signed char)10))))));
                    var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_6] [i_13]))));
                }
                /* vectorizable */
                for (unsigned char i_14 = 2; i_14 < 9; i_14 += 4) 
                {
                    var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_14 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_7 + 1])))));
                    var_38 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_36 [i_6] [i_6] [i_11 + 1] [i_6]))));
                    arr_47 [i_7] [i_11] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_7] [i_14 + 1])) + (2147483647))) >> (((((/* implicit */int) var_12)) + (27614)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (3006597890072687580LL)));
                    arr_48 [i_6] [i_7 - 2] [i_6] [i_14] [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_15)))));
                    var_39 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_15)))));
                }
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_51 [i_6] [i_6] [i_15] [i_7 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_44 [i_6] [i_7 + 1] [i_7] [i_15]) + (2147483647))) >> (((((/* implicit */int) var_11)) + (13765)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) arr_33 [i_6] [i_6] [i_15])), (1662144286))) : (((/* implicit */int) arr_7 [i_7 - 1] [i_7 - 1]))))) : (((((/* implicit */_Bool) max((arr_27 [i_15] [i_6]), (((/* implicit */unsigned short) (signed char)-64))))) ? (arr_10 [i_7 - 1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)255))) != (arr_25 [i_15] [i_7 + 1] [i_6])))))))));
                var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_17 [i_15] [i_6]) ? (((/* implicit */unsigned long long int) 854456085)) : (min((3787390047238703708ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) 258048)) : (-6790602596124723159LL))), (((/* implicit */long long int) ((854456085) >> (((((/* implicit */int) var_12)) + (27607))))))))))))));
                arr_52 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_9)))));
            }
        }
        for (int i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            arr_56 [i_6] [i_6] = ((/* implicit */unsigned short) var_6);
            arr_57 [i_6] [i_16] [i_6] = ((/* implicit */long long int) var_3);
        }
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) (signed char)0))));
            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) var_11)))) : (((/* implicit */int) var_12))));
        }
        /* LoopNest 3 */
        for (long long int i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    {
                        arr_70 [i_6] [i_19] [i_18] [i_6] = ((/* implicit */int) var_2);
                        arr_71 [i_6] [i_6] [i_19] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(arr_45 [i_6] [i_20] [i_19 - 1] [i_6])))) : (((/* implicit */int) arr_45 [i_6] [i_6] [i_19 - 1] [i_20]))));
                        arr_72 [i_18] [i_19] [i_18] [i_18] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((var_9), (((/* implicit */long long int) arr_50 [i_6] [i_18] [i_20] [i_20])))) & (arr_28 [i_6] [i_18] [i_19 - 1] [i_6] [9ULL] [i_19])))) ? (((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) (signed char)28)))) : (((/* implicit */int) var_12))));
                        arr_73 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_45 [i_19] [i_19] [i_18] [i_6]) ? (((/* implicit */int) arr_62 [i_18] [i_18] [i_18])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((signed char) var_1))))) ? ((~(((/* implicit */int) arr_45 [i_6] [(unsigned char)3] [i_19 - 1] [i_19 - 1])))) : ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))))));
                    }
                } 
            } 
        } 
        arr_74 [i_6] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_41 [i_6])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_6])))))));
    }
}
