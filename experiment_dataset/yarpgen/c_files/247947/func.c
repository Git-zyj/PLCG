/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247947
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (3601711087U) : (2558214443U)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (var_18)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 693256209U))))) : (((/* implicit */int) arr_2 [i_0]))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (3601711089U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        var_22 = ((/* implicit */long long int) 3601711086U);
        var_23 = ((/* implicit */_Bool) (~(var_14)));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_24 = ((/* implicit */_Bool) (((~(max((978837152927717895LL), (((/* implicit */long long int) arr_2 [i_2])))))) & ((~(7676541490944998595LL)))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 3; i_5 < 9; i_5 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(max((((((/* implicit */_Bool) (short)-5878)) ? (arr_6 [i_2]) : (arr_5 [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_16))))))))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17)))) >> (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139))) & (2558214443U)))))), (max((((/* implicit */long long int) var_16)), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3601711102U)))))))))));
                    }
                    for (short i_6 = 3; i_6 < 9; i_6 += 3) /* same iter space */
                    {
                        arr_19 [i_6 - 3] [i_4] [i_4] [i_2] = ((/* implicit */signed char) arr_9 [i_2] [i_3]);
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 2; i_7 < 10; i_7 += 2) 
                        {
                            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) 3601711088U);
                            var_27 = ((/* implicit */unsigned int) (unsigned short)2295);
                        }
                        for (int i_8 = 2; i_8 < 10; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */short) (unsigned char)139);
                            var_29 = ((/* implicit */unsigned long long int) ((min((((693256220U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)5858))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_5))))))) == (max((((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned char) (signed char)10))))), (((var_11) >> (((var_0) + (1548367067)))))))));
                            var_30 = ((/* implicit */unsigned int) var_18);
                            var_31 = ((/* implicit */unsigned long long int) (short)-5841);
                            var_32 = ((/* implicit */unsigned char) var_1);
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 3; i_9 < 12; i_9 += 2) 
                        {
                            var_33 *= ((/* implicit */unsigned char) ((unsigned int) var_4));
                            var_34 = ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */int) (short)-24021)) : (((/* implicit */int) var_1))))));
                            var_35 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_18))) + (((/* implicit */unsigned long long int) ((unsigned int) -1766092303415679699LL)))));
                            var_36 = ((/* implicit */unsigned int) arr_9 [i_3] [7LL]);
                        }
                    }
                    var_37 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)175))))), (((((/* implicit */unsigned long long int) arr_1 [i_2] [i_4])) + (var_10))))) + (((/* implicit */unsigned long long int) (-(-1766092303415679699LL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        arr_32 [i_4] [i_3] [i_3] = var_6;
                        var_38 = ((/* implicit */unsigned short) var_12);
                        var_39 |= ((/* implicit */_Bool) ((unsigned short) var_11));
                        var_40 = (short)2744;
                    }
                    for (long long int i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3189)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (14526272574161250293ULL)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_11])) : (((/* implicit */int) (unsigned char)154))))))) : (min((((/* implicit */long long int) var_15)), (arr_33 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4])))));
                            var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                        }
                        for (signed char i_13 = 2; i_13 < 12; i_13 += 4) 
                        {
                            var_43 &= ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) (~(1125762467889152LL)))));
                            var_44 = ((/* implicit */long long int) ((((var_17) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))) * (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (unsigned char)17)))))));
                            arr_43 [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) arr_37 [i_4] [i_4])) + (var_11))) + (((/* implicit */unsigned int) ((/* implicit */int) min((max((((/* implicit */unsigned short) (unsigned char)81)), ((unsigned short)4589))), (((/* implicit */unsigned short) (unsigned char)189))))))));
                        }
                        /* LoopSeq 4 */
                        for (short i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_5)) >> (((-1439463148) + (1439463176))))) + (((/* implicit */int) var_16)))) == (((/* implicit */int) ((((unsigned int) arr_14 [i_14])) == (((/* implicit */unsigned int) (~(((/* implicit */int) var_16))))))))));
                            var_46 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)52721)) : (49322228))))) == (((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_2] [i_4] [i_4] [i_4])) == (((/* implicit */int) (!(arr_26 [i_4])))))))));
                            var_47 = ((/* implicit */int) ((((/* implicit */unsigned int) var_0)) + (((((((/* implicit */int) (unsigned char)117)) == (arr_0 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) : (max((((/* implicit */unsigned int) arr_21 [i_2] [i_4] [i_4] [i_14] [i_14])), (var_11)))))));
                            var_48 = ((/* implicit */_Bool) ((((((/* implicit */int) min(((_Bool)1), (arr_10 [i_11] [i_11])))) + (((/* implicit */int) arr_23 [i_4] [i_4])))) + (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)137)) ? (2134404817028343251ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2] [i_2] [(signed char)6] [i_4] [i_2] [i_14]))))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_2] [i_4] [i_4] [i_4] [i_15]))));
                            var_50 = ((/* implicit */short) ((signed char) ((unsigned int) (signed char)70)));
                        }
                        for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 3) /* same iter space */
                        {
                            var_51 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_48 [i_4] [i_2]))))))), (max((min((var_15), (arr_29 [i_16] [i_4] [i_4] [i_2]))), (((/* implicit */unsigned char) ((_Bool) (signed char)76)))))));
                            arr_52 [i_2] [i_2] [i_3] [8ULL] [i_3] [i_4] = ((/* implicit */int) 2558214443U);
                            var_52 = ((/* implicit */unsigned char) arr_50 [i_2] [(short)9] [i_2] [i_2] [i_2] [4]);
                            var_53 = ((/* implicit */unsigned char) (signed char)-59);
                        }
                        for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 3) /* same iter space */
                        {
                            var_54 = ((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) 2558214443U)) : (16923565644220278905ULL)))));
                            var_55 = ((unsigned char) ((arr_7 [(_Bool)1]) ? (((/* implicit */long long int) (~(arr_1 [i_2] [i_2])))) : (min((((/* implicit */long long int) (signed char)127)), (-1766092303415679707LL)))));
                            var_56 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_12)))) + (((/* implicit */int) ((unsigned char) arr_28 [12U] [i_3] [i_11 - 1] [i_3] [i_17])))));
                        }
                    }
                    for (long long int i_18 = 1; i_18 < 11; i_18 += 3) /* same iter space */
                    {
                        var_57 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
                        arr_57 [i_4] [i_3] [i_4] [i_4] [i_3] [(signed char)3] = ((/* implicit */unsigned char) var_5);
                        var_58 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2]))))) + (((/* implicit */int) (_Bool)1))))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_19 = 4; i_19 < 10; i_19 += 3) 
    {
        var_59 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_19] [i_19] [(signed char)0] [i_19]))) - (min((-785490800079743526LL), (((/* implicit */long long int) var_15))))))) == (((arr_11 [i_19 - 2] [i_19 - 2] [i_19]) / (((/* implicit */unsigned long long int) var_14))))));
        var_60 = ((/* implicit */int) max((var_60), ((+(((/* implicit */int) min((((/* implicit */short) var_9)), ((short)31101))))))));
        arr_61 [i_19] = ((/* implicit */unsigned long long int) ((int) min(((unsigned char)240), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_19])))))));
    }
    /* LoopNest 2 */
    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
    {
        for (short i_21 = 2; i_21 < 10; i_21 += 1) 
        {
            {
                var_61 = ((/* implicit */unsigned long long int) var_0);
                arr_66 [i_20] [i_21] |= ((/* implicit */signed char) max((var_0), (((((((/* implicit */int) var_9)) << (((arr_27 [i_20] [i_21] [4] [i_21] [i_21]) - (147632341U))))) | (((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) arr_7 [i_21]))))))));
                var_62 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_20] [i_20] [i_20] [i_20] [(_Bool)1]))))) | (var_10))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_63 [i_20] [i_21]), (((/* implicit */unsigned long long int) arr_22 [i_20] [i_20]))))) ? (max((((/* implicit */unsigned int) arr_7 [i_20])), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                var_63 = (((+(-3120816000520221681LL))) + (((/* implicit */long long int) arr_64 [i_20] [i_21])));
            }
        } 
    } 
}
