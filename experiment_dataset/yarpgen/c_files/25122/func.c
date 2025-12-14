/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25122
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
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) /* same iter space */
    {
        var_14 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_1 [i_0 + 4]))) == (((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 2]))));
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) ((min((2511238916048367847ULL), (18446744073709420544ULL))) == (2511238916048367847ULL)))), (((((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1]))) / (((/* implicit */int) ((unsigned short) arr_3 [i_0] [0ULL])))))));
        var_16 = arr_2 [10ULL] [i_0 + 2];
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((arr_1 [i_1 + 2]) <= (274877775872ULL)));
        var_18 = ((/* implicit */unsigned short) var_10);
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [(unsigned char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (18446744073709420544ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))));
        var_20 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (9400335013024432527ULL));
    }
    for (unsigned short i_2 = 1; i_2 < 7; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((unsigned char)226), (var_12)))), ((~(((/* implicit */int) var_11))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (2288354906170955698ULL) : (arr_17 [i_2 + 3] [i_3 + 1] [i_4] [i_5] [i_5]))), (((((/* implicit */_Bool) 2288354906170955711ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709420544ULL)))))) ? (((((/* implicit */_Bool) min((9400335013024432527ULL), (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)5)) == (((/* implicit */int) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)112))))))) : (((/* implicit */int) ((var_6) < (((((/* implicit */_Bool) 4112955223362111761ULL)) ? (274877775872ULL) : (var_3))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((((min((((/* implicit */unsigned long long int) (unsigned short)0)), (16322444081625660238ULL))) < (min((2511238916048367847ULL), (var_3))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_2 + 4] [i_3] [i_4] [(unsigned char)1]), (arr_14 [i_3 + 1]))))) >= (((((/* implicit */_Bool) arr_14 [i_3 - 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46753)))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2 + 1]))))) ? (((/* implicit */int) min((arr_11 [i_2 + 2]), (arr_11 [i_2 + 4])))) : (((/* implicit */int) min(((unsigned char)14), (arr_11 [i_2 + 1]))))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)29)), (arr_15 [i_2] [i_2] [i_4] [i_2]))))))) ? (((/* implicit */int) (unsigned short)61944)) : ((-(((/* implicit */int) var_13))))));
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((14333788850347439854ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_3]), ((unsigned short)18781))))))));
                            var_27 = ((/* implicit */unsigned short) 7703405324952167259ULL);
                        }
                        var_28 = ((/* implicit */unsigned short) 16158389167538595931ULL);
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned char)98)) ? (arr_0 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_30 = ((/* implicit */unsigned short) (unsigned char)3);
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((16158389167538595937ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 16158389167538595917ULL))))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_2]))) : (((/* implicit */int) ((arr_1 [i_2 + 2]) >= (arr_1 [i_2 + 4])))))))));
    }
    for (unsigned short i_10 = 1; i_10 < 7; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 2) 
        {
            var_32 = ((/* implicit */unsigned char) ((arr_0 [i_10 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))));
            var_33 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_10 - 1])) - (((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) arr_18 [i_10] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11]))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            var_34 = ((/* implicit */unsigned char) arr_28 [i_12] [i_12] [i_12] [i_12]);
            var_35 = ((/* implicit */unsigned char) ((var_6) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10 + 2] [i_10 + 2] [i_12]))) : (var_10))) - (72ULL)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7796648504756719393ULL))));
                var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7796648504756719393ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56546)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446743798831775743ULL)) ? (((/* implicit */int) (unsigned short)31297)) : (((/* implicit */int) var_2))))) : (arr_6 [i_13]));
            }
            for (unsigned char i_14 = 1; i_14 < 10; i_14 += 4) 
            {
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_10 + 2])))));
                var_39 = ((/* implicit */unsigned char) var_6);
                var_40 = ((/* implicit */unsigned char) (unsigned short)26943);
            }
            for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_40 [i_12] [i_12] [i_12]))) ? (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))));
                var_42 = ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)56546))));
                var_43 = ((/* implicit */unsigned short) var_11);
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 4; i_16 < 9; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 3; i_17 < 10; i_17 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned char) 14869773831620742939ULL);
                        var_45 = ((/* implicit */unsigned char) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_10 + 4] [i_10 + 4] [(unsigned short)10] [i_16 - 3] [i_17 - 1])))));
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)165)) ? ((-(((/* implicit */int) (unsigned char)183)))) : (((/* implicit */int) ((unsigned short) var_11)))));
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709420543ULL)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (unsigned char)172))));
                    }
                    var_48 = ((/* implicit */unsigned char) ((18446744073709420534ULL) < (((131078ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                }
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    var_49 += ((/* implicit */unsigned char) (+(arr_9 [i_10 + 2] [i_10 + 4] [i_15])));
                    var_50 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (var_10)));
                }
            }
            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073709420537ULL)))) ? (18446744073709420545ULL) : ((~(18446744073709420543ULL)))));
            /* LoopNest 2 */
            for (unsigned char i_19 = 3; i_19 < 10; i_19 += 2) 
            {
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    {
                        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) var_4))));
                        var_53 = ((/* implicit */unsigned char) ((unsigned long long int) arr_35 [i_10] [i_12] [5ULL]));
                    }
                } 
            } 
        }
        var_54 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)137))) ? (min((16918008005072005731ULL), (((/* implicit */unsigned long long int) arr_40 [6ULL] [i_10 + 2] [i_10 + 1])))) : (min((((/* implicit */unsigned long long int) ((unsigned char) var_5))), (var_3)))));
        var_55 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)56690)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10 + 2]))) : (18446744073709420537ULL))), (min((((/* implicit */unsigned long long int) min(((unsigned short)53454), (((/* implicit */unsigned short) var_4))))), (2288354906170955698ULL)))));
    }
    var_56 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + ((+(var_3))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_57 = var_13;
}
