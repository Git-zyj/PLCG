/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19888
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
    var_14 -= ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [(signed char)8] = 2151350850U;
        var_15 = ((/* implicit */unsigned int) ((signed char) max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] = ((signed char) arr_6 [i_1] [i_1]);
        var_16 = ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1] [i_1]))) ? (arr_6 [i_1] [i_1]) : ((+(var_5))));
        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2040453687U)))) && (((/* implicit */_Bool) (+(arr_4 [(signed char)2] [(signed char)2]))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [(signed char)19]) : (var_11)));
        arr_9 [i_1] = ((/* implicit */signed char) arr_6 [i_1] [i_1]);
    }
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((unsigned int) var_6))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (signed char)-112))));
        var_20 *= ((/* implicit */signed char) (+(((/* implicit */int) ((arr_6 [i_2 - 1] [i_2 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))))))));
    }
    var_21 = ((/* implicit */signed char) (+((-(max((((/* implicit */unsigned int) var_3)), (2526978064U)))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    arr_20 [i_3] [i_4] [i_4] &= ((/* implicit */signed char) 3498749635U);
                    var_22 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [6U] [i_3])) ? (var_1) : (var_1))));
                }
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_23 *= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_22 [i_3] [i_3])) ? (2027867740U) : (var_8))), (((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_10)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_22 [i_3] [i_4])))) ^ (var_7))) : (max((3867785085U), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))))));
                    var_24 = ((((var_11) ^ (var_7))) - (((var_1) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (arr_16 [i_3] [i_6] [i_6]))) - (1662637485U))))));
                    arr_23 [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((max((var_7), (((/* implicit */unsigned int) arr_17 [i_3])))), (((/* implicit */unsigned int) max((arr_17 [i_3]), (arr_17 [i_3]))))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_3))));
                }
                /* vectorizable */
                for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_7 - 1] [i_7] [i_7 + 1])) ? (arr_19 [i_7 - 1] [i_7 - 1] [i_7 + 1]) : (arr_16 [i_7 - 1] [i_7] [i_7 + 1])));
                    arr_26 [i_3] = ((((/* implicit */_Bool) ((arr_19 [i_3] [19U] [i_3]) % (1884461683U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7 + 1] [i_7 - 2] [i_7 - 2]))) : (((((/* implicit */_Bool) (signed char)4)) ? (arr_25 [i_3] [i_4] [(signed char)4] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
                }
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    var_27 ^= max(((-(3857132688U))), (((/* implicit */unsigned int) ((signed char) arr_24 [i_8] [i_4] [i_3] [i_3]))));
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((signed char) min((var_0), (((/* implicit */unsigned int) (signed char)-32))))), (arr_18 [(signed char)6] [i_4]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 2; i_9 < 20; i_9 += 3) 
                    {
                        arr_32 [i_8] [i_4] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (((+(2255297447U))) > (((unsigned int) var_0))))) + (((/* implicit */int) min((((signed char) (signed char)-89)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3])) && (((/* implicit */_Bool) (signed char)95))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_29 *= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_30 [(signed char)5] [(signed char)17] [i_8] [i_8] [i_9] [i_10]) : (var_7))) | (max((var_2), (var_4))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3])))));
                            arr_36 [(signed char)4] [i_8] [i_8] [i_9] [(signed char)4] = arr_22 [11U] [i_8];
                            var_30 *= ((/* implicit */unsigned int) (~(((/* implicit */int) max(((signed char)-22), (arr_13 [i_9 - 1]))))));
                            arr_37 [i_3] [i_3] [i_8] [i_9] [i_4] &= ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_28 [i_3] [i_4] [i_8])) ? (var_11) : (2531396477U))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))))));
                        }
                    }
                    var_31 ^= ((/* implicit */signed char) 2247371823U);
                }
                /* LoopSeq 4 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_0))));
                    var_33 = ((/* implicit */signed char) min((var_33), (arr_17 [i_4])));
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    arr_43 [(signed char)5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16))))))) * (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(signed char)4] [(signed char)2] [i_12] [(signed char)20]))) < (1767892738U)))) % (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-105)) && (((/* implicit */_Bool) (signed char)83)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        var_34 += ((signed char) arr_14 [i_3]);
                        arr_46 [i_4] [i_4] [i_4] [i_4] [i_4] &= ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_12]))) : (var_4)))) ? (((arr_39 [(signed char)2] [i_4] [i_12]) % (arr_39 [i_3] [i_4] [(signed char)1]))) : (((1037629094U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4] [6U])))))));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (max((1108699513U), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) ^ (749597122U)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        arr_49 [i_3] [i_4] [i_4] [2U] = ((/* implicit */signed char) ((unsigned int) var_8));
                        var_36 ^= ((/* implicit */unsigned int) ((arr_39 [i_3] [i_3] [i_12]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [13U] [i_3])))));
                        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) var_6))));
                        arr_50 [i_3] [(signed char)0] [i_12] [i_12] [i_14] [i_14] &= var_13;
                    }
                }
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                {
                    arr_54 [i_3] [i_3] [i_4] [i_15] = ((/* implicit */signed char) (((+(var_1))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_3] [i_3] [i_3] [i_3])))))));
                    arr_55 [i_3] [i_3] [7U] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (var_7)))));
                }
                for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
                {
                    var_38 ^= ((((/* implicit */_Bool) arr_33 [i_4] [i_4] [(signed char)18] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-24), (arr_40 [i_3] [i_3] [i_4] [i_16])))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) % (2542887762U))));
                    var_39 |= ((/* implicit */signed char) (+(min((((arr_39 [18U] [i_4] [18U]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_16] [i_16] [i_3] [i_3]))))), (((var_1) ^ (var_0)))))));
                    var_40 += ((/* implicit */signed char) arr_57 [i_3] [i_4]);
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        for (unsigned int i_18 = 1; i_18 < 21; i_18 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */signed char) min((var_41), (((signed char) (((~(var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_3])))))))))));
                                var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_30 [i_18 - 1] [i_17] [6U] [i_16] [6U] [i_3]))))))) * ((+(var_8))))))));
                                var_43 = ((/* implicit */unsigned int) max((var_43), (((unsigned int) max((((/* implicit */unsigned int) var_12)), (arr_48 [i_18 - 1] [i_18] [i_18 + 1] [(signed char)3] [i_18 - 1] [i_18 + 1]))))));
                                arr_65 [i_3] [i_4] [i_16] [i_16] [i_17] [i_3] = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    for (signed char i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) max((((min((((/* implicit */unsigned int) (signed char)117)), (var_4))) & (3430433932U))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) != (1331632789U))))))))))));
                            var_45 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(var_4)))) ? (max((var_0), (((/* implicit */unsigned int) arr_44 [17U] [i_3] [i_3] [(signed char)10])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))))));
                            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) max((((/* implicit */unsigned int) max((arr_53 [i_3] [i_4] [i_20]), (arr_53 [i_3] [i_20] [i_3])))), (var_0))))));
                            arr_73 [i_3] [i_3] [i_19] [i_20] [i_19] [i_19] = ((((/* implicit */_Bool) max((arr_68 [i_4] [i_20]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)98)) || (((/* implicit */_Bool) arr_63 [i_19] [i_4] [i_4] [i_19] [i_20] [i_20])))))))) ? (((((/* implicit */_Bool) 2036771291U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [(signed char)15] [i_4]))))) : ((+(arr_52 [(signed char)8] [i_4] [i_19] [i_20]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
