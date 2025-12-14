/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37841
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
    var_10 = ((/* implicit */unsigned int) ((((var_0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) var_8))))) == ((~(((/* implicit */int) ((_Bool) var_1)))))));
    var_11 = ((/* implicit */_Bool) min((var_11), (((((var_0) ? (((/* implicit */int) max((var_0), (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) == ((((+(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_4))))))));
    var_12 *= ((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) * (arr_2 [i_0])))) ? (((/* implicit */int) var_0)) : (min((((((/* implicit */int) var_2)) / (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
            {
                var_13 = ((/* implicit */long long int) ((2147483647) >> (((((/* implicit */int) arr_5 [i_1] [i_2])) + (15744)))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_1] [i_0]))));
            }
            for (long long int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
            {
                var_15 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)159)))))))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_4] [i_0] [(short)9] [i_0] = (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_4])) : (((/* implicit */int) arr_6 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36374)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1])))))))));
                    var_16 = ((/* implicit */int) arr_0 [i_1] [i_1]);
                    var_17 = ((/* implicit */_Bool) min((var_5), ((~(((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */short) arr_10 [i_0] [i_0] [i_3] [i_4])))))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_5] [i_1])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    /* LoopSeq 4 */
                    for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_0 [i_6] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_17 [i_6 - 1] [i_6] [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 + 2])) : (((arr_11 [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) ^ (arr_1 [i_6] [i_6 - 1])));
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) arr_20 [i_1] [i_1]);
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(1545432161290381095LL))))));
                    }
                    for (short i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_3] [i_1] [i_3]))))))))));
                        var_25 -= ((/* implicit */_Bool) ((arr_2 [6U]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [8U] [i_5] [i_3] [i_1] [i_0])))));
                        var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0] [i_1] [i_3] [i_5] [i_8]))));
                    }
                    for (short i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        arr_32 [i_3] [i_3] [i_9] [(_Bool)0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2966955853U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? ((-(((/* implicit */int) arr_23 [i_5])))) : ((-(((/* implicit */int) (_Bool)1))))));
                        var_27 += ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) < (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9]));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_21 [i_10] [(unsigned char)18] [i_10] [(_Bool)1] [13LL])))) ? (((/* implicit */int) ((short) arr_33 [i_3] [i_5] [i_3] [i_1] [i_0]))) : (((/* implicit */int) arr_23 [i_10]))));
                        var_29 = ((/* implicit */int) (((~(arr_27 [i_0] [i_1] [i_3] [i_5] [i_3]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1] [i_1] [i_1])))));
                        arr_35 [i_10] [i_10] = ((/* implicit */_Bool) 1887747377U);
                        arr_36 [i_0] [i_10] [i_3] [i_5] [i_5] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [6U] [i_1]))));
                    }
                    arr_37 [i_5] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                }
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_3] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= ((~(((/* implicit */int) arr_33 [i_0] [i_0] [(_Bool)1] [i_1] [(short)14]))))))) : (((/* implicit */int) ((short) min((((/* implicit */int) arr_19 [i_1])), (arr_25 [i_0])))))));
            }
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_1] [i_0] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_31 [i_0] [i_1] [20] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [20U] [i_0] [i_0]))))) ? (((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_1] [11] [i_1])) + (((/* implicit */int) arr_31 [i_0] [6LL] [i_1] [6LL] [i_0] [6LL])))) : (((/* implicit */int) arr_31 [i_1] [(_Bool)1] [i_1] [i_0] [i_0] [(_Bool)1]))));
            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(var_0)));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                        {
                            arr_46 [(unsigned char)13] [i_12] [i_11] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((unsigned int) arr_10 [i_0] [i_0] [i_11] [i_13]))));
                            var_32 += ((/* implicit */unsigned short) max(((signed char)-122), (((/* implicit */signed char) (_Bool)1))));
                            var_33 = ((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */long long int) arr_14 [i_12 + 1] [i_12 - 1] [(signed char)5] [i_12] [i_12 + 2])) - (((((/* implicit */_Bool) arr_43 [i_0] [i_1] [i_12] [i_11])) ? (7941293599371151207LL) : (arr_0 [i_0] [11]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_10 [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 - 1])), (arr_15 [i_0] [i_1] [i_12 + 2] [i_13])))))));
                        }
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
                        {
                            arr_50 [i_0] [i_1] [i_0] [i_11] [i_11] [i_12] [i_11] = ((short) -1065073843);
                            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-8422))));
                        }
                        var_35 -= ((/* implicit */_Bool) (((_Bool)1) ? ((+(5638560040425440893LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56816)))));
                        var_36 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((arr_18 [i_0] [i_1] [(short)9] [14U] [i_12 - 1]), (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_11] [i_1]))))) / (arr_44 [i_0] [i_0] [i_1] [i_12] [i_11])))) ? (((/* implicit */int) ((((/* implicit */int) ((short) var_0))) > (arr_42 [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12 + 2])))) : (((/* implicit */int) arr_34 [i_0] [i_0] [(_Bool)1] [i_11] [i_12]))));
                    }
                } 
            } 
        }
        var_37 *= ((/* implicit */int) ((_Bool) arr_45 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0]));
    }
    for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        var_38 = ((/* implicit */unsigned int) min((var_38), (((((/* implicit */_Bool) arr_21 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_15] [18LL] [18LL] [i_15] [6U]))) ^ (arr_18 [i_15] [(_Bool)1] [(_Bool)1] [i_15] [i_15]))) : (max((arr_18 [7U] [i_15] [i_15] [7U] [i_15]), (arr_18 [i_15] [i_15] [i_15] [i_15] [i_15])))))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 1; i_16 < 17; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                {
                    arr_60 [i_15] [i_15] [i_17] = ((/* implicit */_Bool) ((signed char) ((long long int) arr_52 [i_16 - 1] [i_17])));
                    var_39 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_43 [i_16] [i_16] [i_16 - 1] [i_17]))))), (((((/* implicit */_Bool) min((arr_58 [i_17] [i_16 + 1] [i_17] [i_15]), (((/* implicit */unsigned char) (_Bool)0))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_29 [(short)5] [i_17] [i_15] [i_15] [i_15] [i_15] [i_15]) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)59671))));
                    arr_61 [(_Bool)1] [i_15] [i_16 - 1] [i_15] = (_Bool)1;
                }
            } 
        } 
        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_3 [i_15]), (arr_3 [i_15])))) ? (((((/* implicit */_Bool) (unsigned short)13520)) ? (((/* implicit */long long int) 627878825)) : (-7961078596352554736LL))) : (((/* implicit */long long int) min((arr_18 [i_15] [i_15] [19U] [i_15] [i_15]), (((/* implicit */unsigned int) arr_48 [i_15] [i_15] [i_15])))))));
        /* LoopSeq 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_42 &= ((/* implicit */unsigned int) ((int) max(((-(var_9))), (((/* implicit */unsigned int) ((int) arr_8 [i_15] [i_15]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) 
            {
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1140201384)) && (((/* implicit */_Bool) (signed char)-48))));
                arr_68 [i_15] [i_18] = ((/* implicit */short) ((unsigned char) (+(arr_53 [i_18] [i_18]))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 18; i_21 += 4) 
                {
                    for (int i_22 = 0; i_22 < 18; i_22 += 4) 
                    {
                        {
                            var_44 = (!((!(((/* implicit */_Bool) var_9)))));
                            var_45 -= min((((((/* implicit */_Bool) arr_34 [i_15] [i_18] [i_20] [i_21] [i_20])) ? (((/* implicit */int) arr_34 [i_21] [i_18] [i_18] [i_21] [i_22])) : (((/* implicit */int) arr_34 [i_15] [i_15] [i_15] [i_15] [i_15])))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(4294967271U))))))));
                            arr_78 [i_15] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_22] [i_21] [(signed char)15] [i_15])) == ((-((-(((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
                arr_79 [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_39 [i_20] [i_18] [i_15] [i_15])), (arr_59 [i_15])))) ? (((/* implicit */int) arr_62 [(unsigned char)12] [i_20])) : (((((/* implicit */_Bool) arr_62 [i_18] [i_20])) ? (((/* implicit */int) arr_39 [(_Bool)1] [(_Bool)1] [i_20] [i_20])) : (((/* implicit */int) arr_39 [i_15] [i_18] [i_18] [i_20]))))));
            }
            for (unsigned int i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [(short)12] [(short)12] [i_23])) ? (arr_7 [i_23] [i_15]) : (arr_7 [i_15] [i_18])))) ? (((/* implicit */unsigned int) arr_53 [i_23] [i_18])) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1507753785U))))))))));
                var_47 = ((/* implicit */unsigned short) arr_82 [i_18] [i_18] [i_23]);
            }
            /* LoopNest 2 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    {
                        arr_87 [i_18] = ((((((/* implicit */_Bool) arr_72 [i_25] [i_24] [i_18])) ? (((/* implicit */long long int) arr_7 [i_18] [i_18])) : (((long long int) (unsigned short)28439)))) - (((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [(unsigned short)8] [(unsigned short)8] [i_24]))) | (arr_11 [i_15]))), (((/* implicit */unsigned int) 770982286))))));
                        arr_88 [i_25] [i_18] [i_24] [4ULL] [i_18] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)98)) >> (((((/* implicit */int) (short)-12303)) + (12325)))));
                    }
                } 
            } 
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            var_48 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16513)) ? (((/* implicit */int) max((arr_3 [i_15]), (((/* implicit */short) var_4))))) : (((/* implicit */int) var_1))))) ? ((-(((((/* implicit */_Bool) (short)32767)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20110))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_15] [i_15] [i_15] [i_26] [i_26] [i_15])))));
            arr_91 [i_26] = ((/* implicit */unsigned char) arr_44 [i_15] [i_26] [10] [i_26] [i_26]);
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
        {
            var_49 = var_0;
            arr_96 [i_27] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(arr_42 [i_27] [(short)8] [i_27] [i_15])))), (724035844U)));
            arr_97 [14U] = ((/* implicit */unsigned int) arr_1 [i_15] [i_15]);
            arr_98 [i_27] = ((/* implicit */_Bool) min((((/* implicit */int) arr_13 [i_15] [i_27] [i_27])), (((((/* implicit */_Bool) arr_13 [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_13 [i_27] [(short)9] [i_15])) : (((/* implicit */int) arr_13 [i_27] [i_27] [i_15]))))));
            arr_99 [(short)4] [i_27] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((arr_54 [(unsigned char)1] [i_27] [i_27]) && (((/* implicit */_Bool) arr_12 [(signed char)21] [(short)5] [i_27] [i_27])))), (max(((_Bool)0), ((_Bool)1))))))));
        }
    }
}
