/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27047
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((((/* implicit */_Bool) 19ULL)) ? (18446744073709551585ULL) : (18446744073709551595ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_1])), (arr_0 [i_0] [i_1]))))))))))));
                    var_13 += ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)9492)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) : (6ULL))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_0))))))));
                        var_15 = ((/* implicit */long long int) var_4);
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        var_16 += ((/* implicit */long long int) ((18446744073709551604ULL) >> (((/* implicit */int) (_Bool)1))));
                        var_17 = ((/* implicit */_Bool) min((((unsigned char) 4294967295U)), (((/* implicit */unsigned char) min((arr_6 [i_0] [i_2 - 2] [i_0] [i_4 + 1]), (arr_6 [i_0] [i_2 - 1] [i_4 + 1] [i_4]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_6] [i_6] [i_0] [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_9 [i_6] [i_2] [i_2 - 2] [i_2 - 2])) ? (32ULL) : (((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_2 + 1] [i_2 - 1]))))));
                                var_18 *= ((/* implicit */signed char) ((unsigned long long int) 28ULL));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_8 [i_2 + 1] [i_1] [i_1] [i_5] [i_6] [i_2])) * (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)127))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((signed char) (_Bool)1))) + (((/* implicit */int) var_0))))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-32759)), (26ULL)));
    }
    for (short i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_8] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9 - 2] [i_9 - 2])))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(((/* implicit */int) arr_3 [i_8])))))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7107))) & (18446744073709551592ULL))))));
            var_25 = ((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) arr_10 [i_9 - 1] [i_9] [i_9] [i_9])) ? (var_6) : (var_6))) : ((-(1739490594389535293LL))));
        }
        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                arr_30 [i_8] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)47))));
                var_26 = ((/* implicit */unsigned char) (-(((unsigned long long int) var_9))));
                arr_31 [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) arr_8 [i_8] [i_10] [i_11] [i_8] [i_10] [i_10]);
            }
            for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                arr_35 [i_8] [20LL] [20LL] [i_8] = ((/* implicit */unsigned char) var_1);
                var_27 = ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_12] [i_10] [i_12] [i_8] [i_10])) < (((/* implicit */int) arr_7 [i_8] [16U] [i_10] [i_12] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)5)) >= (((/* implicit */int) (short)-32753)))))) : (((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
            }
            var_28 += ((/* implicit */short) ((unsigned long long int) ((arr_10 [i_10] [i_10] [i_8] [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)10] [i_10] [(short)10] [i_8] [i_8] [i_10]))) * (((min((((/* implicit */unsigned long long int) arr_17 [i_8])), (arr_10 [i_8] [i_8] [i_8] [i_10]))) * (arr_10 [i_10] [i_10] [i_8] [i_8])))));
        }
        var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~((+(var_3)))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33)))))));
        var_31 = ((/* implicit */unsigned short) arr_19 [i_8] [i_8]);
        var_32 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) 5836180193700523311ULL)))), (arr_16 [i_8] [i_8])));
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_14 = 2; i_14 < 18; i_14 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_15 = 1; i_15 < 19; i_15 += 1) 
            {
                arr_44 [i_13] [i_13] [i_15] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_14] [i_14])))))));
                arr_45 [i_13] [i_14] [i_13] = ((/* implicit */short) 8632365680860334192LL);
                var_33 = ((/* implicit */unsigned long long int) (~(((-1739490594389535289LL) / (var_11)))));
            }
            var_34 = ((((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_34 [i_13] [(unsigned short)5] [i_13] [i_13]))))) <= (var_3));
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) -1LL))));
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 3) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (long long int i_18 = 1; i_18 < 21; i_18 += 1) 
                    {
                        {
                            arr_54 [i_13] [i_13] [i_16 - 1] [i_16] [i_16 + 1] [i_17] [i_18] = ((/* implicit */unsigned char) var_11);
                            var_36 += arr_3 [i_14 + 1];
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18ULL)) ? (((((/* implicit */long long int) 2688698862U)) & (arr_40 [i_16] [i_17] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-11519)))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_19 = 0; i_19 < 22; i_19 += 4) 
        {
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_19] [i_13]))) * (arr_19 [i_19] [i_19]))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))))))));
            arr_58 [i_19] [i_13] [i_13] = 20ULL;
            arr_59 [i_13] [i_13] [i_19] = ((/* implicit */short) 3191265474745723372LL);
        }
        for (unsigned short i_20 = 3; i_20 < 20; i_20 += 1) 
        {
            var_39 = ((/* implicit */unsigned short) (-(var_2)));
            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (~(var_9))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_22 = 1; i_22 < 20; i_22 += 1) 
                {
                    for (long long int i_23 = 0; i_23 < 22; i_23 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_48 [i_20] [i_22] [i_22 + 1] [i_21] [i_20])) : (((/* implicit */int) ((var_10) || (arr_42 [i_21])))))))));
                            arr_71 [i_13] = ((/* implicit */unsigned char) ((var_11) >= (((/* implicit */long long int) arr_27 [i_20 - 2] [i_20 - 2] [i_20 - 1] [i_20]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_24 = 0; i_24 < 22; i_24 += 1) 
                {
                    arr_74 [i_13] [i_21] [i_20] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_47 [i_13] [i_20 + 2]))));
                    var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-11525))));
                }
                /* LoopNest 2 */
                for (short i_25 = 2; i_25 < 20; i_25 += 4) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */short) ((arr_19 [i_13] [i_13]) >> (((var_3) - (438675034686913964LL)))));
                            var_44 = ((/* implicit */_Bool) ((((arr_33 [i_21] [i_25] [i_21] [i_20]) / (((/* implicit */long long int) var_2)))) >> (((((/* implicit */long long int) arr_19 [i_13] [(_Bool)1])) / (var_6)))));
                            var_45 = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_75 [i_20 - 3] [2LL] [i_20 - 3] [i_25 + 2] [i_25 - 1]))));
                        }
                    } 
                } 
                var_46 += ((((/* implicit */unsigned long long int) var_2)) + (arr_64 [i_20 - 3] [i_21] [i_21] [i_20 - 3]));
            }
        }
        var_47 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)128)) >= (((/* implicit */int) arr_26 [i_13] [i_13] [i_13] [i_13]))));
        var_48 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12820995875799558418ULL))));
        var_49 = ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5217))) & (var_2)))) <= (arr_25 [i_13]));
    }
}
