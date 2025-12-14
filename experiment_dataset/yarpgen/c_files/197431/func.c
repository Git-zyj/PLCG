/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197431
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
    for (signed char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (signed char)-108)) >= (((/* implicit */int) (unsigned short)51989))))) >= (((/* implicit */int) (signed char)97)))) || (((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)127)))) * (((/* implicit */int) (unsigned short)127)))))));
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max(((unsigned short)121), (((unsigned short) arr_10 [i_2 + 1] [i_0 - 3] [i_1 + 1] [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)46156)) ? (max((((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)17755)))), (((/* implicit */int) ((unsigned short) var_7))))) : ((+(((/* implicit */int) ((signed char) arr_14 [i_0 - 1])))))));
                                arr_17 [(unsigned short)3] [i_1 - 2] [i_4] [i_1] [i_4] [(signed char)15] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1 - 1] [(unsigned short)11] [i_3] [(signed char)5])) ? (((/* implicit */int) arr_14 [(signed char)0])) : (((/* implicit */int) (unsigned short)14787))));
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_1] = arr_9 [i_1] [i_1] [i_1];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    arr_26 [i_7] [i_6] [i_6] [i_5] = ((/* implicit */signed char) (unsigned short)47780);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_8 = 2; i_8 < 24; i_8 += 3) 
                    {
                        arr_29 [i_5] [i_6] [i_7] [(signed char)16] = arr_19 [i_5];
                        arr_30 [i_8 + 1] [i_6] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)9749)) ^ (((((/* implicit */int) arr_24 [i_7] [i_7] [i_7])) ^ (((/* implicit */int) var_9))))));
                        var_13 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)123)) || (((/* implicit */_Bool) arr_27 [i_5])))))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 2; i_9 < 22; i_9 += 3) 
                    {
                        var_14 ^= ((/* implicit */unsigned short) arr_23 [i_5] [i_5] [(unsigned short)21]);
                        arr_34 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) arr_22 [(signed char)8])) : (((/* implicit */int) arr_28 [i_5] [i_5]))))) ? (((/* implicit */int) ((signed char) (signed char)29))) : (((/* implicit */int) arr_22 [i_9 - 2]))));
                    }
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) (signed char)-43)) == (((/* implicit */int) ((signed char) (signed char)(-127 - 1))))))), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [i_5])), (arr_32 [i_5] [i_10] [(signed char)2])))) * ((~(((/* implicit */int) (signed char)-124))))))));
                        arr_37 [i_7] [i_7] &= ((/* implicit */unsigned short) (signed char)0);
                        var_16 = var_2;
                    }
                }
                for (signed char i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    var_17 = ((/* implicit */signed char) min(((((+(((/* implicit */int) (signed char)-84)))) | (((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6])))), (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) ((signed char) (signed char)-66))) : (((/* implicit */int) ((unsigned short) arr_36 [i_5] [i_6] [i_6] [i_5] [i_5])))))));
                    arr_40 [i_5] [i_5] [i_5] [(signed char)10] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_20 [(signed char)10])) ? (((/* implicit */int) ((unsigned short) (signed char)83))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)11)) && (((/* implicit */_Bool) (signed char)0))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        arr_45 [i_12] [i_11] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_41 [i_11])))))) : (((/* implicit */int) max((((unsigned short) (unsigned short)51730)), (((/* implicit */unsigned short) arr_44 [i_5] [i_6] [i_11] [i_11])))))));
                        var_18 = max(((signed char)-1), (var_3));
                    }
                    for (signed char i_13 = 1; i_13 < 24; i_13 += 4) 
                    {
                        arr_49 [i_5] [i_5] [i_11] [(signed char)4] = ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) arr_20 [i_5]))) & (((/* implicit */int) arr_36 [i_13 - 1] [i_11] [i_13] [i_13 + 1] [i_11])))), ((~(((/* implicit */int) (signed char)2))))));
                        arr_50 [i_11] [i_11] [i_11] [i_11] = (unsigned short)64348;
                    }
                    for (signed char i_14 = 1; i_14 < 23; i_14 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_35 [i_11] [i_14] [(signed char)14] [i_14 + 1] [i_14 + 2]))) * (((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)-87)))))))))));
                        var_20 *= ((/* implicit */signed char) min((((/* implicit */int) arr_20 [i_14 + 1])), (((((/* implicit */int) arr_20 [i_14 + 2])) & (((/* implicit */int) (signed char)4))))));
                        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16256)) & (((/* implicit */int) (unsigned short)65403))))) || (((/* implicit */_Bool) arr_41 [i_5])))))));
                        arr_54 [i_5] [i_5] [i_5] [(signed char)6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(signed char)5] [(signed char)5] [i_11] [i_14 + 2] [(signed char)22])) ? (((/* implicit */int) (unsigned short)20351)) : (((/* implicit */int) arr_52 [i_5] [i_6] [i_14 + 2]))))))) ? (((/* implicit */int) arr_22 [i_14])) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_11] [i_11] [(signed char)24] [i_11]))))) && (((/* implicit */_Bool) max(((signed char)-4), ((signed char)-109)))))))));
                    }
                    for (signed char i_15 = 3; i_15 < 23; i_15 += 3) 
                    {
                        arr_59 [i_5] [i_6] [(unsigned short)18] [i_6] [i_15] = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) arr_24 [(unsigned short)23] [i_15 - 1] [i_11]))))) | (((/* implicit */int) ((((/* implicit */int) arr_46 [i_5] [i_5] [(signed char)19] [i_15 + 1] [i_11])) >= (((/* implicit */int) arr_25 [i_15] [(unsigned short)6] [i_5])))))))));
                        var_22 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_43 [(signed char)6] [i_6] [i_11] [(unsigned short)5])) * (((/* implicit */int) var_4)))) > (((((/* implicit */_Bool) (unsigned short)65408)) ? (((/* implicit */int) (unsigned short)65408)) : (((/* implicit */int) (signed char)63)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_6] [i_6] [(signed char)20] [i_6])) & (((/* implicit */int) arr_43 [i_15 - 3] [i_15 - 3] [(signed char)11] [(signed char)11]))))) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) var_5))));
                        var_23 = (signed char)-84;
                        arr_60 [i_5] [i_6] [i_6] [i_15 + 2] = arr_36 [(unsigned short)18] [i_6] [i_6] [i_6] [i_6];
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_5] [i_11] [i_11]))))) ? (((/* implicit */int) arr_52 [i_15] [i_6] [i_5])) : (((/* implicit */int) min(((signed char)-64), (arr_33 [(unsigned short)18] [i_15 + 1] [i_15] [i_11]))))))) ? (max((((/* implicit */int) min(((unsigned short)65419), ((unsigned short)26501)))), (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_5] [i_5])) : (((/* implicit */int) arr_38 [(signed char)0] [(signed char)0] [i_11] [(unsigned short)17])))))) : (max((((/* implicit */int) ((((/* implicit */int) arr_58 [i_15])) > (((/* implicit */int) (signed char)-120))))), (((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (unsigned short)60788)) - (60788)))))))));
                    }
                }
                for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 1; i_18 < 21; i_18 += 3) 
                        {
                            {
                                var_25 += ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_5])) ? (((/* implicit */int) arr_33 [i_5] [i_6] [i_17] [i_16])) : (((/* implicit */int) arr_57 [i_5] [i_6] [i_16] [i_17]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_36 [i_5] [i_5] [(unsigned short)7] [(unsigned short)7] [i_18])) + (2147483647))) >> (((((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5])) + (23))))))))), (max((((/* implicit */int) min((((/* implicit */unsigned short) arr_39 [i_18 + 4] [(signed char)14] [(signed char)20])), ((unsigned short)47768)))), (((((/* implicit */int) (unsigned short)24703)) ^ (((/* implicit */int) arr_19 [(signed char)24]))))))));
                                var_26 ^= ((/* implicit */signed char) (unsigned short)65535);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_36 [i_5] [(unsigned short)12] [i_6] [(signed char)13] [(unsigned short)12]), (((signed char) arr_47 [i_16] [i_6] [i_5] [i_5]))))) <= (((((/* implicit */int) ((signed char) arr_47 [i_5] [i_6] [i_16] [(signed char)22]))) & (((/* implicit */int) (signed char)30))))));
                    var_28 = ((/* implicit */signed char) min((((((/* implicit */int) max(((signed char)0), (arr_64 [i_6] [i_6])))) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_53 [i_5] [i_5] [(unsigned short)24] [i_16])), ((unsigned short)50768)))))), ((~(((((/* implicit */int) arr_64 [i_5] [i_5])) | (((/* implicit */int) (signed char)-45))))))));
                    arr_68 [i_16] [i_5] [i_5] = ((/* implicit */unsigned short) arr_33 [i_5] [i_5] [i_5] [i_16]);
                    var_29 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)32)) * (((/* implicit */int) arr_25 [i_5] [i_6] [i_5])))) < (((/* implicit */int) ((((/* implicit */int) arr_53 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] [(signed char)11])) >= (((/* implicit */int) (signed char)103)))))));
                }
                var_30 = ((/* implicit */unsigned short) min((var_30), (min(((unsigned short)19555), ((unsigned short)17767)))));
                arr_69 [i_5] [(signed char)19] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-69)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_5] [(signed char)22] [i_6] [i_5])))))));
                var_31 += ((/* implicit */unsigned short) (signed char)23);
            }
        } 
    } 
}
