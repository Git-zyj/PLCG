/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195871
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((-284027411), (((/* implicit */int) var_0)))))));
    var_17 = ((/* implicit */int) var_13);
    var_18 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_0 [2])), (((((/* implicit */_Bool) arr_0 [(unsigned short)16])) ? (395634202) : (((/* implicit */int) var_13)))))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [20] [i_0 - 1])) != (((/* implicit */int) arr_1 [8] [i_0 - 3])))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_21 = 284027411;
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1] [i_2 - 1])) * (((/* implicit */int) arr_2 [6U] [i_1 - 1]))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_13)) != (arr_7 [i_2] [12U])))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 2) 
            {
                arr_10 [i_1] [i_1 - 3] [(unsigned char)6] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_1]))) : (var_15))));
                var_24 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_2]))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_15 [18ULL] [i_1 + 1] [i_3] [i_4] [12] [i_4] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [6U] [i_2 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [(unsigned short)14] [i_2] [i_3]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        arr_19 [i_3] [i_3] [i_4] [i_4] [13] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_14 [i_1] [i_1] [i_3] [i_4] [i_4]))) > (((((arr_8 [i_1] [i_2] [0ULL]) + (2147483647))) << (((((/* implicit */int) arr_6 [i_3 - 4] [i_4] [i_4])) - (45285)))))));
                        var_25 = ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (arr_13 [i_1 - 3] [12ULL] [i_1] [12ULL]) : (((/* implicit */int) arr_3 [i_1 - 3] [i_1])));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    var_26 = 1943676596;
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) 284027405))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (16264485045010547595ULL))))));
                    var_29 = ((/* implicit */int) arr_1 [i_6] [(unsigned char)20]);
                }
            }
            var_30 = ((/* implicit */long long int) ((-1328530665) / (((/* implicit */int) (unsigned short)51313))));
        }
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 2; i_8 < 21; i_8 += 2) 
            {
                arr_28 [i_8] [i_8 + 1] [i_7] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_7] [i_1 - 1]);
                var_31 = (((!(((/* implicit */_Bool) arr_0 [i_8])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_1] [i_7] [i_8])));
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) : (2926958294U)))) / (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8] [i_7]))) : (arr_22 [i_1] [i_1] [i_8 - 1]))))))));
                var_33 |= ((/* implicit */unsigned long long int) ((arr_24 [i_1] [i_1 - 1] [i_8 + 1] [i_8 + 1]) / (arr_24 [(unsigned short)20] [i_1 - 1] [i_8 - 1] [i_8])));
            }
            arr_29 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) 395634202)) : (((((/* implicit */_Bool) arr_8 [i_1] [(unsigned char)17] [i_7])) ? (17700334675771032036ULL) : (((/* implicit */unsigned long long int) -2060941817))))));
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((3159521736751425683LL) / (((/* implicit */long long int) arr_21 [i_1 - 1] [i_7] [i_7] [i_1 - 1]))))) ? (((var_1) >> (((((/* implicit */int) arr_2 [0U] [i_1])) - (185))))) : (((((/* implicit */_Bool) (short)3412)) ? (var_10) : (((/* implicit */unsigned long long int) 284027411))))));
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [6U] [i_1 - 2])) ? (((/* implicit */long long int) var_12)) : (((long long int) 4294967295U))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_9 = 2; i_9 < 20; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 2; i_10 < 22; i_10 += 3) 
        {
            var_36 += ((/* implicit */short) arr_35 [8ULL] [i_10]);
            var_37 = ((unsigned char) arr_31 [i_9]);
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (-(1152358554653425664LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9] [(short)10]))) : (16264485045010547595ULL)));
            arr_36 [i_9] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_30 [i_9 - 1]))));
        }
        var_39 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */int) (unsigned short)51305)) : (((/* implicit */int) (short)-3413))));
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 13; i_11 += 2) 
    {
        var_40 = ((/* implicit */short) ((((16264485045010547595ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3398))))) ? (((unsigned long long int) (short)3398)) : (((/* implicit */unsigned long long int) arr_7 [i_11 + 2] [i_11]))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            for (unsigned short i_13 = 1; i_13 < 12; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            var_41 *= ((/* implicit */unsigned char) var_10);
                            var_42 |= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_27 [i_11] [i_13 + 1] [i_11])) << (((arr_7 [i_11] [i_11]) + (875017822))))) / (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) arr_6 [i_12] [i_13 + 2] [i_15]))))));
                            arr_48 [i_11] [i_12] [i_13] [i_14] [i_13] = (-(var_3));
                            arr_49 [i_11] [i_11] [i_11] [11ULL] [i_11 + 1] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)13))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 3) 
                        {
                            var_43 = ((/* implicit */int) arr_25 [9LL] [i_13 + 2] [i_14] [i_14 + 2]);
                            arr_54 [i_14 - 1] [i_12] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)46)) ? (284027411) : (((/* implicit */int) (short)-760)))) ^ (((/* implicit */int) ((284027395) > (((/* implicit */int) var_11)))))));
                        }
                        for (int i_17 = 0; i_17 < 15; i_17 += 1) 
                        {
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((arr_52 [i_13] [i_17] [i_13 + 1] [i_13] [i_11 + 2]) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_11] [i_17])) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) var_2))))))))));
                            var_45 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 10426809370450016257ULL))))));
                        }
                        var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_14])))))));
                        var_47 = ((/* implicit */unsigned short) arr_21 [i_11] [i_12] [i_11] [i_14]);
                        /* LoopSeq 4 */
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 2) 
                        {
                            var_48 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)7] [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) arr_50 [13LL] [i_12] [i_12] [(unsigned short)7] [i_18] [i_14])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)210)) != (((/* implicit */int) var_0)))))));
                            var_49 = ((/* implicit */unsigned short) var_0);
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
                        {
                            var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) (~(arr_55 [i_14] [i_14 + 1] [i_13] [i_13] [i_13]))))));
                            arr_63 [i_19] [i_19] [i_14 - 1] [i_12] [i_12] [i_19] [i_11] = ((/* implicit */unsigned short) (((+(arr_5 [i_11]))) << (((var_14) - (6209138564275706402LL)))));
                            var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_27 [i_12] [i_13 - 1] [i_14]))))))));
                            var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) ((var_1) << (((((/* implicit */int) arr_6 [i_14 + 2] [i_13 + 1] [i_11 + 2])) - (45280))))))));
                            var_53 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_46 [i_14 - 2] [i_14 + 3] [i_14 + 1] [i_14]))));
                        }
                        for (unsigned long long int i_20 = 2; i_20 < 13; i_20 += 3) 
                        {
                            var_54 = ((/* implicit */unsigned short) var_3);
                            arr_68 [i_11 + 1] [i_12] [i_14] [12LL] [i_20] [i_14] [i_14] = ((/* implicit */unsigned short) arr_12 [i_20 + 2] [i_20 - 1] [i_20 + 1] [i_20 + 2] [i_20]);
                            var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) arr_14 [i_20] [i_14] [i_13] [i_12] [i_11]))));
                        }
                        for (unsigned short i_21 = 1; i_21 < 14; i_21 += 2) 
                        {
                            var_56 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_0 [i_21]))));
                            var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_13 - 1] [i_21 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_13 - 1] [i_21 - 1]))));
                        }
                        var_58 = ((/* implicit */long long int) var_12);
                    }
                } 
            } 
        } 
        arr_73 [i_11] &= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_8 [18U] [i_11 - 1] [i_11 + 2])) : (arr_5 [i_11 + 2])));
    }
}
