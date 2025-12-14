/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46988
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [14] &= ((/* implicit */int) arr_0 [(unsigned char)8]);
        arr_3 [i_0] = arr_0 [i_0];
    }
    for (int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        arr_7 [i_1] = ((((/* implicit */int) ((unsigned char) var_5))) / (arr_4 [i_1]));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_6)))) ? (arr_5 [i_1]) : (((((/* implicit */int) (unsigned char)3)) << (((arr_5 [i_1]) - (792164794))))))) < (((/* implicit */int) ((((int) (unsigned char)60)) == (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned char)1])) && (((/* implicit */_Bool) arr_5 [i_1]))))))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_13 [i_2] [i_1] [i_2] = ((/* implicit */int) var_9);
            arr_14 [i_2] [i_2] = ((unsigned char) ((((/* implicit */int) (unsigned char)3)) + (arr_9 [i_2] [i_1 - 1] [i_2])));
        }
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((((((/* implicit */int) (unsigned char)77)) + (min((arr_9 [12] [i_3] [i_3]), (arr_5 [i_1 + 2]))))) & (max((arr_9 [14] [i_1 + 2] [14]), (((/* implicit */int) (unsigned char)105))))))));
            var_18 = arr_11 [i_1];
            /* LoopSeq 3 */
            for (int i_4 = 2; i_4 < 18; i_4 += 1) 
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned char) (unsigned char)114)))));
                arr_20 [i_1] [i_1 + 1] [(unsigned char)6] [i_4] = ((((/* implicit */int) var_15)) | (max((max((-1459168635), (((/* implicit */int) (unsigned char)167)))), (((var_13) & (var_6))))));
                var_20 = ((/* implicit */unsigned char) ((arr_10 [i_3] [i_3] [i_3]) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4 - 2] [i_4] [i_4 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)14))))))))));
                var_21 = ((((min(((-2147483647 - 1)), (arr_11 [i_3]))) / (((/* implicit */int) var_16)))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) arr_12 [i_4] [i_4 - 1] [i_4]))))));
                var_22 = ((/* implicit */int) max((var_22), (var_6)));
            }
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    var_23 = (-(arr_5 [i_6]));
                    var_24 = ((((((/* implicit */int) (unsigned char)191)) >= (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */int) ((unsigned char) 1336088707))) : (((/* implicit */int) ((unsigned char) (unsigned char)14))));
                }
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_31 [i_1] [i_3] [i_3] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) arr_24 [i_1 + 1])) ? (((/* implicit */int) ((unsigned char) ((arr_21 [i_5] [i_3] [i_5] [i_5]) & (arr_19 [i_1] [i_3] [i_8]))))) : (((arr_12 [i_8] [i_1 + 2] [i_8]) ^ (arr_12 [i_8] [i_1 + 1] [i_8]))));
                        var_25 = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)167)) * (-23))), (((/* implicit */int) (unsigned char)167))));
                    }
                    var_26 = arr_27 [i_5 - 1];
                    var_27 = ((((var_13) & ((~(-12))))) + (min((min((((/* implicit */int) (unsigned char)52)), (arr_12 [6] [i_3] [6]))), (((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned char)3)))))));
                }
                var_28 -= ((/* implicit */int) ((unsigned char) (unsigned char)178));
                var_29 ^= arr_19 [i_1] [(unsigned char)1] [i_5];
            }
            /* vectorizable */
            for (unsigned char i_9 = 4; i_9 < 18; i_9 += 2) 
            {
                var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) 23))));
                var_31 = ((/* implicit */unsigned char) ((int) ((arr_30 [(unsigned char)14] [(unsigned char)14] [i_3] [i_3] [i_9] [i_9]) / (var_5))));
                arr_34 [i_1] [i_3] [i_1] = arr_30 [i_1 + 2] [i_1] [i_1] [i_1 - 1] [(unsigned char)1] [i_9 + 2];
            }
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max(((-2147483647 - 1)), (((/* implicit */int) ((arr_11 [i_3]) >= (((838146006) + (var_13)))))))))));
            arr_35 [(unsigned char)2] [i_3] [(unsigned char)15] = ((/* implicit */unsigned char) -14);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                var_33 = ((((/* implicit */_Bool) arr_30 [i_1] [i_1 + 2] [i_1 + 2] [i_10] [i_10] [19])) ? (arr_30 [17] [i_1 + 2] [i_11] [17] [i_11] [i_11]) : (arr_30 [i_1] [i_1 - 1] [11] [(unsigned char)19] [i_10] [(unsigned char)13]));
                var_34 ^= (unsigned char)0;
            }
            for (int i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                var_35 ^= ((2121617278) & (((/* implicit */int) (unsigned char)8)));
                arr_43 [(unsigned char)8] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (unsigned char)89)) >> (((2088960) - (2088944))))));
                arr_44 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_10])) && (((/* implicit */_Bool) arr_18 [i_12]))));
            }
            for (int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                var_36 = ((int) (unsigned char)126);
                arr_47 [i_1] [i_13] [i_13] = ((/* implicit */int) arr_33 [i_10] [i_13]);
                var_37 = ((/* implicit */unsigned char) var_13);
            }
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                arr_50 [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)2)) | (((/* implicit */int) arr_26 [i_1] [i_10] [i_10] [i_14])))) << (((((/* implicit */int) (unsigned char)87)) - (68)))));
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_14] [i_1 + 2] [i_14])) ? (-764553009) : (((/* implicit */int) ((((/* implicit */_Bool) -232130767)) && (((/* implicit */_Bool) (unsigned char)89)))))));
            }
            var_39 = ((((/* implicit */int) arr_45 [i_10] [i_1 + 1] [i_10] [6])) + (arr_21 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 2]));
            arr_51 [i_10] = arr_10 [i_1 + 2] [i_1] [i_10];
            /* LoopNest 2 */
            for (int i_15 = 4; i_15 < 16; i_15 += 3) 
            {
                for (int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    {
                        arr_58 [i_16] [i_15] [i_15] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_15] [15] [i_16])) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) var_0)))) < (((arr_41 [i_1] [i_10] [i_1 - 1]) - (((/* implicit */int) var_12))))));
                        arr_59 [i_15] [i_15] [i_10] [i_15] [i_15] = ((/* implicit */int) ((((-1497971933) + (var_1))) > (((/* implicit */int) ((((/* implicit */_Bool) -96390999)) || (((/* implicit */_Bool) 23)))))));
                        arr_60 [i_1] [i_1] [2] [i_15] [19] = (-(((/* implicit */int) var_12)));
                        /* LoopSeq 2 */
                        for (int i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)75)))))));
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) -878436889)) || (((1040384) != (((/* implicit */int) arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                            arr_63 [i_15] [i_10] [i_10] [(unsigned char)2] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_17] [i_15 - 2] [3] [i_1 + 2])) || (((/* implicit */_Bool) arr_33 [i_15 - 2] [i_1 - 1]))));
                            var_42 = ((/* implicit */int) (unsigned char)0);
                        }
                        for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            arr_67 [i_1] [i_15] [i_15] [i_16] [i_15] = ((arr_9 [i_15] [i_10] [i_15 + 3]) / (arr_9 [i_15] [i_15 + 3] [i_15]));
                            var_43 = (+(arr_39 [i_1 + 2] [i_15 + 3] [i_1 + 2]));
                            arr_68 [i_1] [i_10] [i_15 + 4] [i_16] [i_15] = ((((/* implicit */_Bool) (+(arr_54 [i_15 + 4])))) ? (-1983144062) : (arr_28 [i_10] [0]));
                        }
                    }
                } 
            } 
            arr_69 [i_10] [i_10] [i_1] = ((((/* implicit */_Bool) 477939665)) ? (((/* implicit */int) (unsigned char)207)) : (((((/* implicit */int) var_15)) | (-24))));
        }
    }
    var_44 = max((((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */int) var_3)) & (var_1))) : (((/* implicit */int) ((var_6) > (((/* implicit */int) var_0))))))), (var_4));
    var_45 = ((/* implicit */int) var_3);
}
