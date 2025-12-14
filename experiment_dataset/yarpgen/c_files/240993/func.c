/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240993
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_16 |= ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) arr_2 [i_0])), (min((var_14), (((/* implicit */long long int) arr_0 [i_0]))))))));
            arr_5 [i_0] [i_1] &= ((/* implicit */long long int) (unsigned char)7);
            var_17 = ((/* implicit */signed char) arr_2 [i_0]);
            var_18 = ((/* implicit */signed char) 2746082178U);
            var_19 ^= ((/* implicit */int) min((max((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_13)))), ((+(arr_1 [i_0])))));
        }
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_20 &= ((/* implicit */unsigned char) (+(min((max((arr_0 [i_2]), (((/* implicit */unsigned int) (unsigned short)19374)))), (((/* implicit */unsigned int) arr_2 [i_0]))))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (arr_1 [i_0])))));
                arr_12 [i_3] = ((/* implicit */unsigned char) ((((arr_0 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) arr_2 [20LL])))))))) ? (max((arr_3 [i_0] [i_2] [i_2]), (((/* implicit */unsigned int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)207))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    var_21 = ((/* implicit */signed char) (unsigned short)37639);
                    arr_17 [i_0] [i_2] [i_4] [i_2] [i_4] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (var_12)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_3] [i_0]))));
                        var_23 *= ((/* implicit */unsigned int) (!(arr_16 [i_0] [i_2] [i_3] [i_4])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 1; i_6 < 23; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6] [(unsigned char)6] [i_6 + 2] [i_6 + 1] [(signed char)10])) ? (((((/* implicit */int) arr_9 [i_6] [i_2] [16ULL] [i_4])) / (arr_10 [i_2] [i_2]))) : ((-(((/* implicit */int) arr_13 [i_3]))))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */signed char) arr_14 [i_6 + 2] [i_6 - 1] [i_3] [i_4] [i_6]);
                        arr_24 [i_0] [i_2] [i_2] [i_2] [i_4] [i_2] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6] [i_6]))) + (arr_21 [i_6 - 1] [i_6] [i_6] [i_6] [(unsigned char)13])));
                        arr_25 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_22 [i_0] [i_2] [i_3] [i_0] [i_4] [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (var_14)))) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_4] [i_6 - 1] [i_6] [i_6] [i_6 - 1])) : ((+(((/* implicit */int) var_7))))));
                    }
                    var_25 = ((/* implicit */long long int) (+(arr_0 [i_4])));
                }
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_32 [i_3] [i_2] [i_2] [i_7] [i_8] = (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) < (((/* implicit */int) max((arr_30 [i_3] [i_2] [i_3]), (((/* implicit */unsigned char) var_7)))))))));
                        arr_33 [i_8] [i_7] [i_3] [i_3] [i_2] [6] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                        var_26 = ((/* implicit */short) (((~(min((((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_2] [i_2] [i_3] [i_7] [i_8])), (arr_18 [i_0] [i_2] [i_2] [i_2] [i_3] [i_7] [i_7]))))) | (((/* implicit */unsigned int) (((((-(((/* implicit */int) var_3)))) + (2147483647))) << (((arr_0 [i_8]) - (3016820498U))))))));
                    }
                    var_27 -= ((/* implicit */signed char) max((max((((/* implicit */int) ((var_14) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))), ((~(((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_7] [i_7])))))), (min(((-(((/* implicit */int) arr_29 [i_7] [i_3] [i_3] [i_2] [6])))), (((/* implicit */int) (!(arr_29 [i_0] [i_0] [i_2] [i_3] [i_7]))))))));
                }
            }
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                arr_36 [14] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_9] [i_2] [i_0])) << (((((/* implicit */int) arr_35 [i_0] [i_0] [i_0])) - (47095)))))) >= (((arr_1 [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9] [i_0] [i_0]))))))) ? (((/* implicit */int) min((arr_26 [i_9] [i_2]), (((/* implicit */unsigned short) arr_6 [i_0]))))) : (((((/* implicit */int) arr_4 [i_2])) * (((/* implicit */int) arr_4 [i_9]))))));
                var_28 *= ((/* implicit */unsigned char) (~(min((((((/* implicit */int) arr_2 [i_2])) * (((/* implicit */int) arr_35 [i_0] [i_0] [i_9])))), (min((((/* implicit */int) arr_13 [i_2])), (arr_7 [(unsigned short)21] [i_9])))))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 4; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */int) arr_1 [i_0]);
                    /* LoopSeq 2 */
                    for (int i_11 = 1; i_11 < 23; i_11 += 1) 
                    {
                        arr_43 [i_0] [i_2] [i_9] [i_9] [i_9] [i_10 + 3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_26 [i_10 - 1] [i_11]))))))));
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) min((max((min((arr_27 [i_0] [i_2] [i_9] [i_10 - 3] [i_11 + 1] [i_10 - 3]), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((arr_22 [i_0] [i_0] [i_9] [i_9] [i_10] [i_10] [i_11]) || (((/* implicit */_Bool) arr_20 [i_0] [i_2] [i_10 - 4] [i_11 + 1]))))))), (((/* implicit */unsigned int) arr_39 [i_0] [i_0] [i_0] [i_10] [i_11 + 2] [i_11 + 2]))));
                    }
                    for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1666439309))));
                        var_31 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_40 [i_10] [i_10] [i_10 + 2] [i_10 + 2])))) && (((/* implicit */_Bool) arr_19 [i_10] [i_10] [i_10] [i_10 + 4] [i_10]))));
                    }
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_0 [i_9]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        arr_52 [i_0] [i_13] [i_0] [11] [i_13] = ((/* implicit */signed char) max((((arr_21 [i_9] [i_10 - 2] [i_10 - 1] [i_13] [i_13]) << (((arr_21 [i_0] [i_10 - 1] [i_10 - 2] [i_13] [i_13]) - (1540766526692705961LL))))), ((+(arr_21 [i_9] [i_9] [i_10 + 4] [i_13] [i_9])))));
                        var_33 ^= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_9] [i_10 + 3] [i_10 - 4] [(unsigned short)15])))))));
                        arr_53 [i_0] [i_2] [i_13] [4U] [i_10] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_0] [i_2] [i_9]))))), (arr_18 [i_13] [i_13] [i_13] [i_13] [i_10 + 4] [i_9] [i_2])))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)120)) : (1214300202)))), (1548885094U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) min((-774609820), (((/* implicit */int) arr_9 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_10]))))) >= (max((((/* implicit */unsigned int) var_8)), (var_10)))))))));
                        arr_54 [i_13] [i_10] [i_9] [i_0] [i_0] |= ((/* implicit */signed char) ((max((((((/* implicit */int) var_6)) + (arr_49 [i_13]))), (((((/* implicit */_Bool) arr_51 [i_13] [9] [i_9] [i_2] [i_0])) ? (var_12) : (((/* implicit */int) arr_22 [i_13] [(unsigned char)18] [i_9] [i_9] [i_9] [i_0] [i_0])))))) != ((-(var_12)))));
                    }
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        arr_57 [i_0] [21] [21] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_10] [i_2] [i_10] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_14] [i_10 + 4] [i_14] [i_10 - 1] [i_10 + 4]))) : (((unsigned int) max((var_5), (((/* implicit */short) var_6)))))));
                        arr_58 [i_14] [i_2] [i_14] = ((/* implicit */signed char) ((((((/* implicit */int) arr_38 [i_9] [(short)3] [i_9] [i_9])) * (((/* implicit */int) var_3)))) << (((((((/* implicit */int) arr_38 [i_0] [(unsigned char)17] [i_9] [i_10 + 3])) * (((/* implicit */int) var_11)))) - (21372)))));
                    }
                    arr_59 [i_0] [i_2] [i_9] = ((/* implicit */unsigned short) arr_46 [i_2] [i_10] [i_10 + 1] [i_2] [i_2]);
                }
                for (unsigned char i_15 = 4; i_15 < 21; i_15 += 4) /* same iter space */
                {
                    var_34 *= ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) (signed char)27)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_9] [i_9])) || (((/* implicit */_Bool) arr_20 [(signed char)0] [(signed char)0] [i_2] [i_2]))))) : (((/* implicit */int) arr_55 [i_0] [i_2] [i_0]))))));
                    arr_62 [i_15 + 4] [i_2] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_39 [i_15 - 2] [i_15 + 2] [i_15 + 4] [i_15 - 3] [i_15 - 2] [i_15 + 2])) == (((/* implicit */int) arr_39 [i_15 + 3] [i_15 - 4] [i_15 + 2] [i_15 - 4] [i_15 + 4] [i_15 - 4]))))) < ((-(((/* implicit */int) arr_38 [i_15 + 3] [i_15] [i_15 - 1] [(_Bool)1]))))));
                }
                for (unsigned char i_16 = 4; i_16 < 21; i_16 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (((~(var_13))) + (((arr_8 [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))))));
                    var_36 |= ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))) >> (((((/* implicit */int) arr_39 [i_0] [i_2] [i_2] [i_2] [i_16 + 3] [i_16])) - (26850))))) < (((/* implicit */int) arr_2 [i_0]))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 3) /* same iter space */
                    {
                        arr_68 [i_0] [i_0] [i_2] [i_9] [i_0] [24U] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_2)))) ? (((/* implicit */int) arr_46 [i_0] [i_0] [i_9] [i_16] [i_17])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_60 [i_0]))))))));
                        arr_69 [i_0] [i_2] [i_17] [i_16] [(signed char)8] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) arr_41 [i_0] [i_2] [i_9] [i_16] [i_17]))), (max((arr_18 [i_0] [i_2] [i_0] [i_0] [i_9] [i_0] [i_17 + 2]), (((/* implicit */unsigned int) var_6))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((signed char)-23), ((signed char)-30)))) ? (max((arr_28 [i_2]), (((/* implicit */unsigned int) arr_13 [i_17])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_2] [i_9] [i_17] [i_0] [i_17 - 1] [i_16]))))))));
                    }
                    for (unsigned long long int i_18 = 2; i_18 < 23; i_18 += 3) /* same iter space */
                    {
                        arr_73 [i_0] [11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_12))))))));
                        var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_40 [i_0] [i_16 + 4] [i_18 + 2] [i_16 + 4])), (max((-3018556934607107420LL), (((/* implicit */long long int) (_Bool)1))))))) ? (min((((/* implicit */unsigned long long int) min((var_2), ((unsigned char)33)))), (((((/* implicit */_Bool) arr_4 [i_16])) ? (arr_61 [i_0] [i_2] [i_9] [i_9] [i_16 + 1] [i_18 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25459))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40737)) ? (256523396U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))))));
                    }
                    for (short i_19 = 1; i_19 < 24; i_19 += 2) 
                    {
                        var_38 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_19 - 1] [i_2] [(unsigned char)9] [i_16 - 2]))) : ((+(arr_72 [i_19] [i_19] [i_19] [i_19] [i_19])))))));
                        arr_77 [i_19] = ((/* implicit */unsigned char) (+(((arr_16 [i_16 + 4] [i_16] [i_16 - 2] [i_16 - 4]) ? (((/* implicit */int) arr_16 [i_16 - 3] [i_16 - 3] [i_16 - 4] [i_16])) : (((/* implicit */int) arr_16 [i_16 + 2] [i_16] [i_16 - 3] [i_16]))))));
                    }
                    for (signed char i_20 = 1; i_20 < 24; i_20 += 4) 
                    {
                        var_39 += ((/* implicit */unsigned short) var_13);
                        var_40 |= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_45 [i_0] [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1])), (arr_18 [i_0] [i_20 - 1] [i_2] [i_9] [i_20] [i_16 - 4] [i_9]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0] [i_20 + 1] [i_0] [i_16] [i_20])))));
                        arr_81 [i_0] [i_0] [i_2] [i_2] [i_20] [i_20 + 1] = ((/* implicit */signed char) (unsigned char)133);
                    }
                }
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (~(arr_7 [i_0] [i_9]))))));
            }
            var_42 = ((((/* implicit */int) var_1)) * (((/* implicit */int) var_7)));
        }
        arr_82 [(short)2] = ((/* implicit */unsigned int) 5332034792256989750ULL);
        var_43 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_76 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_0])) || (((/* implicit */_Bool) -1073741824)))))))));
    }
    var_44 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_13))))))), (((((/* implicit */int) ((((/* implicit */int) var_15)) >= (814626430)))) << ((((~(var_12))) - (1329559508)))))));
}
