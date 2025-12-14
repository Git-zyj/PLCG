/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232972
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) ? (((/* implicit */int) (!(var_14)))) : (((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) var_5)) - (52406)))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_12)), (var_7)))) : ((~(((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_2), (var_6))), (((/* implicit */long long int) (short)32107))))) && (((/* implicit */_Bool) var_13))));
                var_16 ^= var_6;
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                arr_13 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 459893183U)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)41))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_19 [i_3] [i_3] [i_3] [7LL] [i_3] = ((/* implicit */short) (((~(var_4))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32198)))));
                            var_17 = ((/* implicit */unsigned char) (unsigned short)40647);
                            var_18 = ((/* implicit */long long int) arr_18 [i_0] [i_1] [i_3] [i_1] [i_5]);
                        }
                    } 
                } 
            }
        }
        var_19 = ((/* implicit */int) min(((+(((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21249))))))), (((/* implicit */unsigned long long int) min(((signed char)-115), (((/* implicit */signed char) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned int) arr_3 [i_0]);
        var_21 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) arr_16 [(signed char)1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (max((((/* implicit */unsigned long long int) (unsigned char)0)), (var_9))))), (((/* implicit */unsigned long long int) 8323072))));
        arr_20 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) var_1)) <= (arr_16 [1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((-1) * ((+(((/* implicit */int) var_0))))))));
    }
    for (long long int i_6 = 3; i_6 < 8; i_6 += 3) 
    {
        var_22 ^= ((/* implicit */short) (-((~((-(-8846208196306665617LL)))))));
        arr_23 [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) var_13)) : (-6057778953433635334LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))) != (((var_8) & (var_9))))))));
        /* LoopSeq 3 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            arr_27 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (796778045811232634LL) : (((/* implicit */long long int) var_13))))) - (((((/* implicit */unsigned long long int) -741611878)) % (var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    {
                        arr_33 [i_6 + 1] [i_6] [i_6 + 2] = ((/* implicit */unsigned short) var_4);
                        arr_34 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */short) var_1)), (arr_10 [i_9] [i_8] [i_7] [i_6])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        arr_40 [i_6] [i_10] [i_10] [i_10] [(short)10] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1861980834)) ? (max((((/* implicit */unsigned long long int) -3399506871621496926LL)), (8140039138841186173ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15512)) | (((/* implicit */int) (unsigned short)7680))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6])) ? (1464999128U) : (((/* implicit */unsigned int) -2147483642)))))));
                        arr_41 [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(arr_28 [i_10] [9ULL] [i_6] [i_10])))), (var_9)));
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 1; i_12 < 10; i_12 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 10; i_13 += 2) 
            {
                for (unsigned char i_14 = 2; i_14 < 8; i_14 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) max((1107422847682463285ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)226)) != (((/* implicit */int) var_11))))), (183815609654213117LL))))));
                        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */int) (unsigned short)54481)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            arr_50 [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967277U)), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_6 + 1] [i_12 + 1]))) : (arr_42 [i_6 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_43 [i_6 + 3] [(unsigned short)4])) == (arr_1 [i_6 + 2] [i_6]))))));
            arr_51 [i_6] = (+(max((arr_9 [(unsigned short)19] [i_6 - 3] [i_12 + 1]), (arr_9 [i_6] [i_6 + 2] [i_12 - 1]))));
        }
        /* vectorizable */
        for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) /* same iter space */
        {
            var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_15 + 1] [3LL] [i_6 + 1])) ? (18446744073709551609ULL) : (arr_5 [i_15 + 1] [i_6 + 1] [i_6 + 1])));
            arr_54 [i_6] [i_6] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)0))));
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) var_12);
                        arr_61 [i_6] [i_6] [2U] [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-32767))));
                        var_27 = ((/* implicit */long long int) var_1);
                    }
                } 
            } 
            arr_62 [i_6] = ((/* implicit */signed char) (~(3921139936U)));
            /* LoopSeq 4 */
            for (unsigned short i_18 = 2; i_18 < 9; i_18 += 1) 
            {
                arr_65 [i_6] = ((/* implicit */signed char) var_13);
                arr_66 [7U] [i_15 - 1] [i_18 + 2] [i_6] = ((/* implicit */unsigned char) 0U);
                arr_67 [i_6 - 1] [i_15] [i_6] = ((/* implicit */unsigned char) var_9);
                /* LoopNest 2 */
                for (unsigned int i_19 = 3; i_19 < 9; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_72 [i_20] [i_20] [i_20] [i_6] [i_20] = ((/* implicit */_Bool) (((+(arr_14 [i_6] [i_15] [i_18 + 1] [i_18] [(_Bool)1] [i_20]))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-34))))))));
                            arr_73 [i_6] [i_6] [i_18] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (unsigned short)32297)))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) 2368832303U)) ? (var_13) : (((/* implicit */unsigned int) var_3)))) << (((((/* implicit */int) ((unsigned char) 11087022))) - (153)))));
                            var_29 = ((/* implicit */short) (((+(1333395404U))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_23] [(unsigned char)6] [(short)3] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) arr_37 [i_6] [i_6] [i_22] [i_23])))))));
                            arr_81 [i_6 + 3] [i_15] [i_23] [i_22] [i_6 + 3] &= ((/* implicit */unsigned long long int) 4294967295U);
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13)))))));
                            arr_82 [(unsigned char)8] [i_21] [i_21] [i_6] [i_21] [3U] = ((/* implicit */unsigned short) (~(5352153766074061658LL)));
                        }
                    } 
                } 
                var_31 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10529422986117700218ULL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (signed char)1)))))));
            }
            for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)219))));
                arr_86 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_35 [i_6 + 2] [i_6 + 3] [i_15 - 1])) : (((/* implicit */int) arr_35 [i_6 + 1] [i_6 + 1] [i_15 - 1]))));
                arr_87 [i_6] [i_15] [i_15] = ((/* implicit */_Bool) ((unsigned char) arr_30 [i_6] [i_15 - 1] [i_6] [i_6]));
            }
            for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) /* same iter space */
            {
                var_33 -= (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))));
                arr_92 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-(1275943504934497741ULL))) : (((/* implicit */unsigned long long int) var_3))));
                /* LoopSeq 1 */
                for (unsigned short i_26 = 0; i_26 < 11; i_26 += 2) 
                {
                    arr_96 [(signed char)3] [i_6] [i_25] [i_26] = ((/* implicit */unsigned long long int) arr_37 [i_6 - 2] [i_6 - 2] [i_25] [i_6 - 2]);
                    var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_12 [i_15] [i_15 - 1] [i_15 - 1])) : (((/* implicit */int) var_10))));
                    arr_97 [3U] [i_6] [i_25] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2129486016U)) ? (((/* implicit */int) (short)8083)) : (0)));
                    var_35 = ((/* implicit */short) ((((/* implicit */long long int) 1345703920)) & (-6140059348300706033LL)));
                }
                var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                arr_98 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_84 [i_6 - 3] [i_6])) | (((/* implicit */int) arr_84 [i_6 - 2] [i_6]))));
            }
        }
        var_37 += var_5;
        /* LoopSeq 1 */
        for (short i_27 = 1; i_27 < 9; i_27 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_28 = 0; i_28 < 11; i_28 += 4) 
            {
                for (unsigned int i_29 = 2; i_29 < 10; i_29 += 3) 
                {
                    for (int i_30 = 0; i_30 < 11; i_30 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-29)) + ((+(((/* implicit */int) arr_0 [i_30] [i_27]))))))) ? ((+((+(((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_13))))) ? (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (unsigned char)37)))) : (((/* implicit */int) var_1))))));
                            var_39 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (var_3) : (((/* implicit */int) var_11))))));
                            var_40 = ((/* implicit */unsigned long long int) ((short) (signed char)63));
                            arr_108 [i_6] [i_6] [7LL] [7LL] [(_Bool)1] [i_29 - 2] [i_30] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_95 [i_6] [i_29] [i_28] [i_6] [i_6])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_27] [i_27] [i_6])))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_99 [i_6]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) 1248811647U)) ? (((/* implicit */int) ((signed char) -776089750726800787LL))) : (((arr_24 [i_29] [i_27]) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
            arr_109 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)31)) || (((/* implicit */_Bool) -1079062195860955934LL))))), ((short)-32753)))) : (((/* implicit */int) var_11))));
            arr_110 [i_27] [(short)0] [6ULL] &= ((/* implicit */_Bool) ((unsigned int) (short)-14226));
        }
    }
}
