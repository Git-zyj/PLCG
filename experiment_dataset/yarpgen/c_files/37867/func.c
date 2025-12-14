/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37867
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
    var_10 -= ((/* implicit */unsigned int) var_3);
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_6))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (-((-(((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_3)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-32005)) : (((/* implicit */int) (short)26471))))))));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_0))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (long long int i_3 = 3; i_3 < 15; i_3 += 3) 
            {
                {
                    var_14 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) (short)-26472)), (var_2)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), ((short)32004))))) | (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((16777215U), (((/* implicit */unsigned int) (signed char)-6)))))));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) (short)26471)) : (((/* implicit */int) (short)-1335))))), (max((((/* implicit */long long int) min((((/* implicit */short) var_5)), ((short)-26460)))), (min((5325150304412133393LL), (((/* implicit */long long int) (unsigned short)64389)))))))))));
                    var_16 = ((short) (+(((/* implicit */int) var_6))));
                    arr_10 [i_1] [i_2] [i_2] [i_3 - 2] = ((/* implicit */short) var_5);
                    arr_11 [(unsigned char)15] = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */short) (signed char)124)), ((short)-29746))))));
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_17 += ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) 2722648441U)), (7018306700102738572ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (var_4))))));
        arr_14 [i_4] = max((min((((((/* implicit */int) (signed char)25)) / (((/* implicit */int) var_5)))), (((/* implicit */int) var_1)))), (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) (signed char)-3)))))))));
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            arr_17 [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_1)) ? (16777152) : (784880037))))) + (((/* implicit */int) (signed char)25))));
            arr_18 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26460)) - (((/* implicit */int) var_9))))) ? (((min((((/* implicit */unsigned long long int) var_6)), (3055898047692945277ULL))) - (((/* implicit */unsigned long long int) min((var_3), (var_3)))))) : (((/* implicit */unsigned long long int) ((((unsigned int) var_5)) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-26472))))))));
        }
        /* vectorizable */
        for (signed char i_6 = 2; i_6 < 8; i_6 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) - (((/* implicit */int) var_5)))) <= (((((/* implicit */_Bool) -16777171)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
            arr_23 [i_6] [(signed char)4] [(_Bool)1] = ((/* implicit */short) 81932325U);
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26474))));
            var_20 = ((/* implicit */int) var_3);
            /* LoopSeq 3 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)29749))) : (var_2)));
                arr_26 [i_4] [(signed char)9] [i_6] [(unsigned short)0] = ((/* implicit */_Bool) var_0);
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) var_2);
                    var_23 -= ((/* implicit */int) ((signed char) var_3));
                }
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        arr_36 [i_4] [i_6] [(_Bool)1] [i_9] [i_10] = ((/* implicit */signed char) ((int) (short)-29182));
                        arr_37 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-32005)) - (((/* implicit */int) (signed char)-30))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((signed char) (unsigned char)31))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((unsigned long long int) 71916856549572608ULL))));
                        var_26 = ((/* implicit */long long int) ((unsigned char) -7142071938278763801LL));
                        arr_40 [9LL] [i_6] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)6414)) : (-730876341)));
                    }
                    for (long long int i_12 = 2; i_12 < 8; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) var_0);
                        arr_43 [i_4] [6ULL] [i_7] [i_9] [i_12] = ((/* implicit */unsigned long long int) ((signed char) var_5));
                    }
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_3))));
                    arr_44 [3] = ((int) var_8);
                    var_29 = ((/* implicit */_Bool) (unsigned short)63488);
                }
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 13426682386769145949ULL)))))))));
            }
            for (unsigned short i_13 = 2; i_13 < 9; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_31 ^= ((/* implicit */long long int) ((4362402522033871058ULL) >> (((var_4) - (7145845071841889413LL)))));
                    var_32 = ((short) var_8);
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)32767))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) var_4)))));
                }
                var_34 = ((/* implicit */signed char) -2147483630);
            }
            for (unsigned short i_15 = 2; i_15 < 9; i_15 += 3) /* same iter space */
            {
                arr_52 [(_Bool)1] [i_15] = ((/* implicit */unsigned short) ((signed char) var_1));
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 9; i_16 += 3) 
                {
                    for (short i_17 = 2; i_17 < 9; i_17 += 2) 
                    {
                        {
                            arr_59 [i_4] [i_15] [i_15] [(short)7] [(short)7] [i_16] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21040)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_35 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
            }
        }
        for (short i_18 = 1; i_18 < 8; i_18 += 1) 
        {
            arr_62 [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)11))));
            var_36 = ((/* implicit */long long int) var_1);
            /* LoopSeq 3 */
            for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_20 = 3; i_20 < 9; i_20 += 4) 
                {
                    var_37 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_2)))));
                    var_38 -= ((/* implicit */long long int) var_5);
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) -1538011174))));
                }
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-32765)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), (((signed char) 1745168089))))))))));
                arr_69 [i_4] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (unsigned short)45836)) : (((/* implicit */int) (_Bool)0))))));
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    for (signed char i_22 = 4; i_22 < 9; i_22 += 3) 
                    {
                        {
                            var_41 -= ((unsigned int) ((signed char) var_5));
                            var_42 = (-(var_4));
                        }
                    } 
                } 
            }
            for (int i_23 = 0; i_23 < 10; i_23 += 4) 
            {
                var_43 = ((/* implicit */int) min((((short) max((var_3), (((/* implicit */long long int) -376400478))))), (((/* implicit */short) var_5))));
                var_44 = ((/* implicit */unsigned long long int) var_1);
                /* LoopSeq 2 */
                for (unsigned int i_24 = 2; i_24 < 9; i_24 += 2) 
                {
                    var_45 = ((/* implicit */int) var_6);
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        arr_85 [(short)8] [(short)1] [7U] [7U] [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((17270312376096872653ULL), (1176431697612678959ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_2) ^ (var_4)))));
                        arr_86 [i_4] [(_Bool)1] = ((/* implicit */unsigned int) min((((int) ((((/* implicit */_Bool) (short)29599)) ? (((/* implicit */int) (signed char)27)) : (-1745168099)))), (((/* implicit */int) var_9))));
                        arr_87 [i_4] [i_4] [4LL] [0LL] [(signed char)7] = ((/* implicit */unsigned short) ((((-2548882319574421404LL) / (((/* implicit */long long int) -784880038)))) * (((/* implicit */long long int) min((-11), (((/* implicit */int) (unsigned char)58)))))));
                        arr_88 [i_4] [i_4] [i_4] [(short)6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) != (((((/* implicit */_Bool) 1772668267)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    }
                    var_46 = ((/* implicit */signed char) min((((unsigned int) 3426679281U)), (3426679281U)));
                }
                for (signed char i_26 = 0; i_26 < 10; i_26 += 1) 
                {
                    arr_92 [(short)5] [(short)5] [(unsigned short)9] [i_26] = ((/* implicit */unsigned short) ((unsigned int) (short)-19871));
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)19653)), ((unsigned short)47072)))) ? (((/* implicit */int) max((var_0), (var_0)))) : (((/* implicit */int) ((short) var_7)))));
                    arr_93 [i_4] = (signed char)-17;
                    var_48 = ((unsigned char) min((((/* implicit */unsigned long long int) var_5)), (var_7)));
                }
            }
            for (long long int i_27 = 3; i_27 < 9; i_27 += 4) 
            {
                arr_97 [i_4] [i_4] [4U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)198))));
                /* LoopNest 2 */
                for (unsigned char i_28 = 0; i_28 < 10; i_28 += 2) 
                {
                    for (signed char i_29 = 3; i_29 < 7; i_29 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) * (8413782075792606551ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                            arr_104 [i_4] [i_4] [(short)6] [9] [i_4] [i_29] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))))) : (((((((/* implicit */_Bool) -2147483641)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255)))))))));
                        }
                    } 
                } 
            }
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) < (((unsigned long long int) var_9))));
            var_51 = ((/* implicit */signed char) var_4);
        }
        for (unsigned int i_30 = 0; i_30 < 10; i_30 += 1) 
        {
            var_52 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_0)), (min((var_4), (var_3)))));
            var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) (-((~(((long long int) var_9)))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_31 = 3; i_31 < 8; i_31 += 3) 
            {
                var_54 *= ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                var_55 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-15278)), (min((var_7), (var_7)))));
            }
            for (unsigned long long int i_32 = 2; i_32 < 7; i_32 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_33 = 2; i_33 < 8; i_33 += 4) 
                {
                    var_56 = ((/* implicit */unsigned int) max(((signed char)30), ((signed char)-49)));
                    arr_114 [i_30] [7] [(short)0] [i_32] [(unsigned char)3] = ((/* implicit */_Bool) (-(15654236344414676406ULL)));
                    /* LoopSeq 1 */
                    for (signed char i_34 = 3; i_34 < 8; i_34 += 3) 
                    {
                        arr_117 [i_30] [4ULL] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_9)), (min((-2548882319574421404LL), (var_2))))) > (max((-2548882319574421412LL), (((/* implicit */long long int) (signed char)-49))))));
                        var_57 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-7397)), (((((/* implicit */_Bool) 8937305469013489451ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (var_4)))));
                        arr_118 [i_33] [i_30] [i_32] [2ULL] [i_34] [i_30] [(short)2] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((int) (unsigned char)16))), (min((min((((/* implicit */unsigned long long int) (short)15257)), (2644401023782223799ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-15258)))))))));
                        arr_119 [i_4] [i_4] [i_4] [i_30] [(signed char)9] [i_33 - 1] [i_34] = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned short) var_1)), (var_8))));
                    }
                }
                arr_120 [i_30] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) -2548882319574421404LL))), ((unsigned char)230)));
            }
        }
    }
    var_58 = ((/* implicit */signed char) -1259990180);
}
