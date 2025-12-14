/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2611
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */int) min((max((((/* implicit */unsigned int) ((-1551132571) / (((/* implicit */int) arr_1 [i_0] [i_0]))))), (min((var_6), (((/* implicit */unsigned int) (unsigned short)31045)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_18 += ((/* implicit */unsigned char) min((((((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_0 [(unsigned short)8])))) + (((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_8))))))), ((+(((/* implicit */int) arr_0 [(unsigned short)8]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        var_20 = ((((/* implicit */_Bool) (unsigned short)34484)) ? (-1583076060) : (((/* implicit */int) arr_3 [i_1])));
    }
    var_21 = ((/* implicit */unsigned short) max((4211016562U), (var_6)));
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned short)31051))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 3; i_3 < 8; i_3 += 2) /* same iter space */
        {
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((arr_5 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) && (((/* implicit */_Bool) var_4)))))))), (((min((0LL), (((/* implicit */long long int) arr_5 [i_3])))) / (((/* implicit */long long int) ((int) arr_2 [i_2])))))));
            arr_10 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2])) + (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))))), ((-(((/* implicit */int) arr_7 [i_2]))))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        arr_16 [i_5] [i_4] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) arr_1 [i_2] [i_4])) ? (4175610449633631001LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 2])))))))));
                        var_23 = (+(((/* implicit */int) max((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) 33554432)))), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_4] [i_2] [i_2]))) > (6791838461479122935LL)))))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_11 [i_3 - 3] [i_3] [i_4] [i_5]), (arr_11 [i_3 - 3] [i_3 - 3] [i_4] [i_3 - 2])))) & (((/* implicit */int) min((arr_11 [i_3 - 3] [i_3] [i_4] [i_5]), (arr_11 [i_3 - 3] [(short)5] [i_4] [i_5]))))));
                        arr_17 [i_2] = ((/* implicit */unsigned char) -498374638);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_6 = 3; i_6 < 8; i_6 += 1) 
            {
                arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_6 - 1])) && (((/* implicit */_Bool) arr_6 [i_2])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-12023))))) : (arr_6 [i_2])));
                arr_21 [i_2] [3U] = ((/* implicit */int) (short)12022);
                var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned short)52148), (((/* implicit */unsigned short) arr_12 [i_3]))))), ((+(((/* implicit */int) arr_14 [i_2] [i_2]))))))) + (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_2]))))) ^ (min((arr_6 [i_3]), (12396800837750437256ULL)))))));
            }
            for (int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                arr_24 [i_7] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) max((max(((short)12004), (arr_8 [i_3 + 2]))), (((/* implicit */short) arr_5 [i_2]))));
                var_26 = arr_12 [i_3];
            }
            /* LoopSeq 2 */
            for (signed char i_8 = 3; i_8 < 9; i_8 += 1) 
            {
                arr_27 [i_8] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_2])), (4106190172778610977LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 1573824370)) == (var_6))))) : ((((_Bool)0) ? (1961617376U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))))))))));
                var_27 = 16893093891705609202ULL;
                arr_28 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_23 [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1553650182003942397ULL)) || (((/* implicit */_Bool) arr_2 [i_2])))))))) << (((min((9237184318930452980ULL), (((/* implicit */unsigned long long int) -4175610449633631014LL)))) - (9237184318930452977ULL)))));
            }
            for (long long int i_9 = 3; i_9 < 8; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_10 = 2; i_10 < 6; i_10 += 1) 
                {
                    var_28 |= ((((/* implicit */int) arr_0 [i_2])) ^ (((/* implicit */int) arr_12 [i_10])));
                    var_29 = ((/* implicit */unsigned int) (short)12023);
                }
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (signed char i_12 = 4; i_12 < 7; i_12 += 3) 
                    {
                        {
                            arr_39 [i_2] [i_3] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) && (((/* implicit */_Bool) arr_6 [i_11]))))), (arr_6 [i_9]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -5550523499053250334LL)) ? (arr_34 [i_11] [i_11] [i_9] [i_2] [i_3 - 1] [i_2]) : (((/* implicit */int) (unsigned short)58069)))) <= (((/* implicit */int) min((arr_14 [i_3] [i_12 - 4]), (((/* implicit */unsigned short) (unsigned char)203))))))))));
                            arr_40 [i_12] [i_11] [i_9] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) arr_0 [i_2])), (max((((/* implicit */long long int) var_11)), (-4175610449633630996LL))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) ((arr_22 [i_2]) | (((max((((/* implicit */unsigned long long int) var_9)), (arr_22 [i_3]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) <= (arr_29 [i_2] [i_2] [i_3 - 2] [i_2])))))))));
            }
        }
        for (int i_13 = 3; i_13 < 8; i_13 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_14 = 4; i_14 < 9; i_14 += 1) 
            {
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_2])) ? (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) arr_23 [4U] [i_2]))))) : (((/* implicit */int) (signed char)15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_14]))) : ((~(min((arr_25 [i_2]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_15 = 1; i_15 < 9; i_15 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_16 = 1; i_16 < 7; i_16 += 1) 
                    {
                        arr_52 [i_14] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_36 [i_2] [i_15 - 1] [i_15 - 1] [i_14] [i_13 + 1] [i_2])))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (-3LL) : (((/* implicit */long long int) -81775410))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9340)))))) : (var_7)));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        arr_55 [i_17] [i_14] [i_14 - 2] [i_13] [i_14] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) arr_44 [i_14])) : (((/* implicit */int) arr_1 [(unsigned char)10] [(unsigned char)10]))));
                        var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)12341))))) != ((-(arr_6 [i_17])))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        arr_58 [i_14] [i_13] [i_13 - 1] = ((/* implicit */long long int) (short)-12056);
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_35 [i_2] [i_13] [i_14 + 1])))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7461))) | (arr_47 [i_18] [i_14] [(unsigned char)1] [i_14] [i_2]))) : (((/* implicit */long long int) ((var_2) ? (arr_26 [7LL]) : (arr_26 [i_2]))))));
                    }
                    arr_59 [i_15] [i_14] [i_14] [i_14] [i_2] [i_2] = ((/* implicit */signed char) ((var_3) + (arr_26 [i_2])));
                    var_35 -= ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) / (arr_32 [i_2] [i_13 - 1] [i_14] [i_2])))));
                    arr_60 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) > (arr_29 [i_2] [i_2] [i_2] [i_2])));
                    arr_61 [i_14] [i_14] [i_14 + 1] [i_15] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) arr_12 [i_13])) : (((/* implicit */int) (unsigned short)29273)))) + (((/* implicit */int) arr_51 [i_2] [i_13] [i_14] [i_14] [i_15]))));
                }
                for (unsigned char i_19 = 1; i_19 < 8; i_19 += 1) /* same iter space */
                {
                    arr_64 [i_14] [i_2] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_15 [i_14] [i_13] [i_2]) + (2147483647))) << (((((/* implicit */int) var_12)) - (27297))))))))) + (((((/* implicit */int) (_Bool)0)) | ((-2147483647 - 1))))));
                    arr_65 [i_14] [i_14] = ((/* implicit */int) arr_41 [i_19 + 1] [i_14 + 1]);
                }
                for (unsigned char i_20 = 1; i_20 < 8; i_20 += 1) /* same iter space */
                {
                    arr_68 [i_14] = ((/* implicit */long long int) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) (short)31008)))), (((((/* implicit */int) arr_4 [i_2])) > (((/* implicit */int) arr_18 [i_13] [i_20])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 1; i_21 < 7; i_21 += 1) 
                    {
                        arr_73 [i_2] [i_14] [i_14] [i_20] [i_21 + 2] = ((/* implicit */int) arr_57 [i_13] [i_13 + 2] [i_14] [i_13] [i_13] [i_13 - 1] [i_13]);
                        arr_74 [i_21] [i_20 - 1] [i_14] [i_14] [i_13 - 3] [i_2] = ((/* implicit */unsigned int) (~((~(min((((/* implicit */int) arr_4 [i_2])), (arr_19 [i_2] [i_14 - 2] [i_2])))))));
                        arr_75 [i_14] [i_13] [i_13] [i_14] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_20]))) != ((-9223372036854775807LL - 1LL))));
                    }
                }
            }
            var_36 = ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), ((~(((/* implicit */int) arr_38 [i_2] [i_13] [i_13 - 3] [(signed char)6] [i_13] [i_13] [(_Bool)1]))))));
            var_37 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_36 [i_2] [i_13] [(unsigned char)5] [i_2] [i_13] [(unsigned char)5]))))));
        }
        var_38 |= ((/* implicit */unsigned char) (-(((((((/* implicit */int) arr_69 [i_2] [i_2] [i_2])) + (2147483647))) << (((((((((/* implicit */int) (unsigned short)7490)) ^ (arr_45 [i_2]))) + (55975969))) - (16)))))));
    }
    var_39 = ((/* implicit */unsigned int) var_11);
}
