/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229732
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [(signed char)7] [i_1] [i_0 - 2] |= ((signed char) max(((signed char)126), ((signed char)-122)));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_2))) < (((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_0] [i_2 - 1]), (var_13)))) ? (((/* implicit */int) ((signed char) arr_1 [i_0 - 1] [i_1]))) : ((-(((/* implicit */int) arr_3 [i_2 - 1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(signed char)14] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) ((signed char) (signed char)-123))) : (((/* implicit */int) ((signed char) (signed char)122))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) (signed char)37))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_4])) ? (((/* implicit */int) arr_13 [(signed char)22] [i_3] [(signed char)22] [i_3] [i_4])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) (signed char)126)))))));
                                var_17 += ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_11 [i_4]))))))));
                                arr_15 [(signed char)21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (max((((/* implicit */int) min((arr_2 [(signed char)20]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)20])))), (((((/* implicit */int) var_12)) % (((/* implicit */int) arr_1 [i_0 + 1] [(signed char)6])))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)-123))))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-121)) / (((/* implicit */int) (signed char)-42))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((~(((/* implicit */int) (signed char)75)))) + (((((/* implicit */int) (signed char)-63)) / (((/* implicit */int) var_11)))))))));
                        arr_21 [i_2 - 1] [i_2 - 1] [i_2 - 1] [(signed char)21] [i_0 - 1] [i_2 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1] [i_5])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))) & (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [(signed char)12] [i_0]))))));
                    }
                    for (signed char i_6 = 4; i_6 < 21; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)24)) / (((/* implicit */int) (signed char)-26))))) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) (signed char)-126)))) : (((/* implicit */int) var_4))));
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)111)))));
                            arr_27 [i_0] [i_7] [i_2] [i_0] [i_7 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)0)))) & (((/* implicit */int) (signed char)-76))));
                        }
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            arr_30 [i_0] [(signed char)14] [i_0] [i_6] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) var_4)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-49)))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_1] [i_2 - 1] [i_2 - 1] [(signed char)14]))))))) ? ((+(((/* implicit */int) ((signed char) (signed char)3))))) : (min((((((/* implicit */int) var_1)) * (((/* implicit */int) var_9)))), (((((/* implicit */int) (signed char)-126)) / (((/* implicit */int) (signed char)89)))))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 1])) <= (((/* implicit */int) (signed char)126))))) & (max(((-(((/* implicit */int) arr_23 [i_0 + 2] [i_1] [i_0 + 2] [i_8])))), (((/* implicit */int) max(((signed char)-75), (var_2))))))));
                            arr_31 [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) (signed char)-1))) + (2147483647))) << (((((((/* implicit */int) ((signed char) ((signed char) arr_2 [(signed char)8])))) + (102))) - (3)))));
                        }
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-81))))) ? (((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (signed char)-122)))) : (((/* implicit */int) ((signed char) var_7))))))));
                            arr_36 [(signed char)3] [i_1] [i_2] [i_0 + 2] [i_6] [i_6] |= ((signed char) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_33 [i_0 + 1] [i_6] [i_6 - 4] [i_2] [i_1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_6 + 2]))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)7))));
                            var_25 = ((signed char) (~(((/* implicit */int) min((arr_9 [i_1] [i_2] [(signed char)19]), ((signed char)(-127 - 1)))))));
                            arr_37 [(signed char)1] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-121))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_2] [i_0])) ^ (((/* implicit */int) var_11)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                        }
                        var_26 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))))));
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_2] [i_1])) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_2] [i_1] [(signed char)13]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_19 [i_2] [i_1] [(signed char)20])))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-61))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (signed char)46))))))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((signed char) (signed char)-1)))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)64)) == (((/* implicit */int) (signed char)127))))))))));
                        arr_38 [i_0 + 1] [i_0 + 1] = ((signed char) ((signed char) (signed char)-123));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-54)) || (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (signed char)0))))))));
                        var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)-113))))))));
                    }
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        arr_51 [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-1))))) && (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)-64))))) <= (((((/* implicit */int) var_4)) % (((/* implicit */int) (signed char)-31))))))));
                        var_31 *= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-5)) && (((/* implicit */_Bool) (signed char)-114))))))));
                        var_32 = ((signed char) min((((/* implicit */int) arr_33 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [(signed char)6])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_2))))));
                    }
                    for (signed char i_15 = 1; i_15 < 11; i_15 += 1) 
                    {
                        arr_55 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)-103))) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) ((signed char) (signed char)88)))));
                        var_33 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-113)), (min((((/* implicit */int) ((signed char) (signed char)-104))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)0))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)-70))));
                                arr_62 [i_10] [(signed char)7] [i_12] [(signed char)7] [i_10] = ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) (signed char)4))) == (((/* implicit */int) ((((/* implicit */int) (signed char)-64)) <= (((/* implicit */int) (signed char)-125))))))), ((!(((/* implicit */_Bool) (signed char)-30))))));
                                arr_63 [i_10] [i_11 - 1] [i_10] [i_16] [(signed char)12] [i_17] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (signed char)37)))) % (((/* implicit */int) ((signed char) arr_26 [i_10] [i_10] [i_12] [i_16] [i_17]))))) <= (((/* implicit */int) ((signed char) arr_1 [i_10] [i_11 - 1])))));
                                var_35 = ((signed char) ((((((/* implicit */int) arr_6 [i_10])) & (((/* implicit */int) var_3)))) * (((/* implicit */int) ((signed char) (signed char)127)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10))))))))));
    /* LoopNest 2 */
    for (signed char i_18 = 0; i_18 < 16; i_18 += 2) 
    {
        for (signed char i_19 = 0; i_19 < 16; i_19 += 3) 
        {
            {
                var_37 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-114)) <= (((/* implicit */int) (signed char)-72))))) != (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)-15)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (signed char)-69))))))));
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 16; i_21 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)2))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_15)))))))));
                            arr_76 [i_20] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_24 [i_21] [i_20] [(signed char)7] [i_18])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (signed char)-52)))) : (((/* implicit */int) ((((/* implicit */int) arr_65 [(signed char)5] [i_21])) < (((/* implicit */int) var_10))))))) != (((((/* implicit */int) ((signed char) arr_71 [i_18] [(signed char)9] [i_18]))) * (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-27))))))));
                            var_39 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)27)) ^ (((/* implicit */int) (signed char)29)))) > (((/* implicit */int) ((signed char) (signed char)107)))));
                            arr_77 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) arr_34 [i_18] [(signed char)20] [(signed char)19] [i_20] [i_21] [i_21])) : (((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
