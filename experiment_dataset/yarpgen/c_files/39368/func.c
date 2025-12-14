/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39368
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
    var_14 = var_1;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */signed char) (-(((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_0 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_3)))) >= ((+(((/* implicit */int) (unsigned short)8842)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)22])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1]))) : (3311583617U)))) ? ((-(0))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))) & (min((arr_5 [i_0] [i_1 + 2]), (((/* implicit */long long int) 1002406026))))));
                        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) -523825923)))));
                    }
                    var_18 = ((/* implicit */signed char) (~(((((_Bool) (unsigned char)24)) ? ((-(arr_5 [i_0] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)4))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    arr_16 [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_4]))))) ? (arr_11 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-50)) + (((/* implicit */int) arr_13 [i_5] [i_4]))))))) == (max((0U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0])))))))));
                    var_19 = ((min((((/* implicit */int) arr_7 [i_0])), (((((/* implicit */_Bool) arr_12 [i_5] [i_4] [i_0])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) arr_4 [i_0])))))) * (((/* implicit */int) (!(arr_4 [i_4])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_6 = 4; i_6 < 21; i_6 += 2) 
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_6 + 1])) || (((/* implicit */_Bool) (unsigned short)8842)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))))) : (arr_5 [i_0] [i_6 - 2]))))));
            var_21 = ((/* implicit */signed char) arr_11 [i_0] [i_0]);
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_6] [i_6 - 4] [i_6 - 4] [i_6])) ? (((/* implicit */int) arr_6 [i_6 + 2] [i_6 + 1] [i_6 - 2])) : (((/* implicit */int) arr_7 [i_6 + 2]))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56693)) <= (((/* implicit */int) arr_19 [i_6 - 4] [i_6 - 4])))))));
                        var_24 |= ((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)1) || (arr_4 [i_0]))))));
                        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_6] [i_6 + 1] [i_6 - 4] [i_6]))));
                    }
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((_Bool) ((3311583617U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8849))))));
                        arr_33 [i_0] [i_6] [i_7] [i_8] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 523825908)) ? (((/* implicit */int) arr_31 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_31 [i_0] [i_6 - 3] [i_7] [i_8] [i_7] [i_10]))));
                        arr_34 [i_0] [i_0] [i_7] [i_8] [i_8] [i_7] = ((/* implicit */int) arr_10 [i_10] [i_6 + 2] [i_10] [i_6 + 2] [i_10]);
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_6] [i_0])) ? (arr_20 [i_0] [i_6 - 3] [i_7] [i_10]) : (((/* implicit */unsigned long long int) 499896729U))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_38 [i_0] [i_0] [i_7] [i_8] [i_11] [i_8] [i_0] = ((/* implicit */unsigned char) ((var_6) << (((((/* implicit */int) (signed char)66)) - (66)))));
                        var_28 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [i_0] [i_0]))));
                        var_29 -= ((/* implicit */unsigned int) (_Bool)1);
                    }
                    var_30 = ((/* implicit */signed char) 2147483635);
                    var_31 = ((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_6] [i_7] [i_8]);
                }
            }
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                var_32 = arr_14 [i_12] [i_12] [i_12];
                arr_41 [i_0] [i_0] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (arr_12 [(short)1] [(short)1] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (unsigned short)32687)) : (((/* implicit */int) arr_40 [i_0] [i_6 - 1])));
                arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_6])) <= (((/* implicit */int) (unsigned short)56686)))))));
            }
        }
        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            arr_46 [i_13] [i_0] = ((/* implicit */unsigned char) var_10);
            var_33 = ((/* implicit */int) max((var_33), ((~(((((/* implicit */int) arr_17 [i_0])) ^ (((/* implicit */int) arr_17 [i_13]))))))));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) arr_12 [i_0] [i_13] [i_13]))));
        }
        for (short i_14 = 1; i_14 < 22; i_14 += 3) 
        {
            var_35 = (((!(((/* implicit */_Bool) arr_24 [i_14 + 1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_14] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)26541)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_0]))) : (arr_43 [i_0] [i_0]))));
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) min((((/* implicit */int) (!(arr_40 [i_14 - 1] [i_14 + 1])))), (((arr_40 [i_14 + 1] [i_14 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_40 [i_14 - 1] [(signed char)17])))))))));
        }
    }
    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 2) 
    {
        arr_51 [i_15] [19LL] = max((((/* implicit */int) ((signed char) arr_17 [i_15]))), (((((/* implicit */_Bool) arr_49 [i_15])) ? (((/* implicit */int) arr_6 [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_6 [i_15] [i_15] [i_15])))));
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 18; i_16 += 3) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */int) (!(arr_13 [i_15] [i_16 + 2])))) + (var_6))))));
                    var_38 = ((((/* implicit */int) arr_13 [i_16 + 3] [i_16 - 1])) * (min((((((/* implicit */int) var_2)) + (var_1))), (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_15] [i_15] [i_16 - 2] [i_16 + 1] [i_17])) || (((/* implicit */_Bool) var_13))))))));
                }
            } 
        } 
        arr_58 [i_15] = (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)4)));
        arr_59 [i_15] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_37 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) - (arr_55 [i_15] [i_15] [i_15]))) & (((/* implicit */int) max((arr_37 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]), (arr_37 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))));
        arr_60 [i_15] = ((/* implicit */int) arr_6 [i_15] [i_15] [i_15]);
    }
    var_39 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) (unsigned short)11933)))) : (-1508447781))) : (((((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned short)38995)) : (-2046596172))) - ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)47)))))));
    var_40 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        for (int i_19 = 0; i_19 < 20; i_19 += 4) 
        {
            {
                var_41 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)38994))));
                /* LoopSeq 2 */
                for (signed char i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    arr_71 [(short)15] [i_19] [i_19] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 523825908)) ? (((((/* implicit */_Bool) 2392913468028396LL)) ? (-1391599664) : (((/* implicit */int) (unsigned short)4087)))) : ((-(((/* implicit */int) (unsigned char)214))))))));
                    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_61 [i_19] [i_18])) ? ((((_Bool)1) ? (((/* implicit */unsigned int) arr_57 [i_20])) : (arr_43 [i_18] [i_20]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_32 [i_20] [i_20] [i_18] [i_18] [i_18] [i_18]))))))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_27 [i_18] [i_20] [i_19] [i_18] [i_18] [i_18]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_48 [(unsigned short)11]))))))))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_43 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_19] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) min((arr_30 [i_21] [i_21] [i_19] [i_18] [i_18]), (((/* implicit */int) (unsigned char)217)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_23 = 0; i_23 < 20; i_23 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_50 [i_18] [i_19])))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((arr_74 [i_18] [i_18] [i_21] [i_22] [i_21] [i_18]), (((95992582U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32705)))))))) : ((+(arr_57 [i_22])))));
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16384)) || (((/* implicit */_Bool) (unsigned short)16384))))) % (((/* implicit */int) ((signed char) arr_62 [i_22]))))))));
                            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (((/* implicit */int) var_10)))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_25 [i_22] [i_23] [i_22] [i_21] [i_19] [(signed char)2])) : (((/* implicit */int) (signed char)54))))))) ? (max((arr_27 [i_18] [i_19] [i_19] [i_22] [i_22] [i_23]), (((/* implicit */unsigned int) 0)))) : (arr_61 [i_21] [i_23])));
                        }
                        for (unsigned short i_24 = 0; i_24 < 20; i_24 += 3) 
                        {
                            var_47 = ((((/* implicit */int) arr_70 [i_22])) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_21])))) ? (((/* implicit */int) arr_47 [i_19])) : (arr_14 [i_18] [i_18] [i_18]))));
                            arr_83 [i_18] [i_19] [i_21] [i_22] [i_22] = ((_Bool) (+(((/* implicit */int) arr_32 [i_18] [i_19] [i_19] [i_18] [i_22] [i_24]))));
                            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_1 [i_19]))) <= (((int) arr_13 [i_18] [(short)0])))))));
                        }
                        var_49 = ((/* implicit */int) arr_23 [i_18] [i_18] [i_21] [i_18]);
                        arr_84 [i_22] [i_22] [i_22] [i_22] [i_18] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 125150392)) ? (((/* implicit */long long int) arr_14 [i_18] [i_18] [i_21])) : (arr_80 [i_22] [i_22] [i_21] [i_19] [i_18]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)116)))))))) ? (((((/* implicit */_Bool) 125150382)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) min(((signed char)-2), (((/* implicit */signed char) (_Bool)1))))))));
                        var_50 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) -1016354942)))));
                    }
                }
                arr_85 [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_65 [i_19]), (arr_65 [i_18])))) + (((/* implicit */int) (signed char)-14))));
                /* LoopSeq 2 */
                for (int i_25 = 1; i_25 < 17; i_25 += 3) 
                {
                    var_51 = ((/* implicit */_Bool) (signed char)14);
                    var_52 = ((/* implicit */_Bool) (+(0)));
                    var_53 -= ((/* implicit */unsigned short) (_Bool)1);
                }
                /* vectorizable */
                for (int i_26 = 0; i_26 < 20; i_26 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_27 = 2; i_27 < 17; i_27 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned int) ((arr_62 [i_27 - 1]) | (((/* implicit */int) arr_70 [i_27 + 2]))));
                        arr_93 [(_Bool)1] [i_27] [i_26] [i_19] [i_18] = ((/* implicit */signed char) ((4730174989962998840LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_89 [i_18] [i_19] [i_26] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_19]))) : (arr_1 [i_18])));
                }
            }
        } 
    } 
}
