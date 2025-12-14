/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53906
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
    var_10 = ((/* implicit */short) max((var_0), (((/* implicit */long long int) (!(((/* implicit */_Bool) 7064284490795045854LL)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) ((long long int) ((unsigned int) ((7064284490795045854LL) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_2] [8ULL] [i_0])))))));
                        arr_12 [i_2] [i_1] [i_1] [i_3] [14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_6 [i_0] [i_2] [7]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)-63))))) - (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) -7064284490795045855LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [22LL] [22LL])) ? (arr_9 [i_0] [i_0] [11U] [3LL] [i_0]) : (-7064284490795045855LL))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */short) (~(min((((/* implicit */long long int) (unsigned short)42871)), (max((var_0), (arr_14 [i_4])))))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_2) < (-1233026233)))) << (((/* implicit */int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 3)) : (arr_15 [i_4]))), (((/* implicit */long long int) var_3)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                for (signed char i_7 = 3; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_14 = max((var_4), (arr_22 [i_4] [i_5] [i_6] [i_7 + 3]));
                        arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) 7064284490795045854LL);
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        arr_26 [i_8] = ((/* implicit */_Bool) ((((max((((/* implicit */unsigned long long int) -448091269)), (12847470402343795030ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62828))))) / (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) 448091270)), (2763885995U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8] [i_8]))))))));
        arr_27 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((7064284490795045869LL), (((/* implicit */long long int) -100145756))))) ? (((arr_19 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_19 [i_8] [i_8] [(short)1] [(unsigned short)16])) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8]))))));
        /* LoopSeq 4 */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
        {
            var_15 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) - (11668131041818556254ULL));
            var_16 *= ((/* implicit */unsigned char) ((max((max((var_9), (((/* implicit */int) (_Bool)1)))), (var_2))) - (((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? ((~(((/* implicit */int) var_7)))) : (max((786228941), (((/* implicit */int) (_Bool)1))))))));
            arr_30 [i_8] = ((/* implicit */int) (~(((((((/* implicit */_Bool) arr_5 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) -988194786)) : (var_5))) << (((min((((/* implicit */long long int) -1605182821)), (var_8))) + (1605182829LL)))))));
        }
        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) max((((/* implicit */int) arr_19 [i_8] [i_10] [i_10] [19ULL])), ((~(((/* implicit */int) (unsigned short)62828))))));
            var_18 = ((/* implicit */_Bool) (((_Bool)1) ? (-399871699) : (((((/* implicit */int) arr_28 [i_8] [i_10])) << (((arr_29 [i_8] [i_10] [i_10]) - (618861728)))))));
        }
        for (long long int i_11 = 1; i_11 < 9; i_11 += 4) 
        {
            arr_35 [i_8] [7ULL] [i_8] = ((/* implicit */short) (~(min((((/* implicit */int) arr_11 [i_11] [i_11])), (arr_29 [i_11 + 4] [i_11 + 3] [i_8])))));
            var_19 = -676062876;
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_9 [i_11] [11] [11] [i_8] [i_8])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8] [i_8])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8] [i_8])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)10755))))) : (((unsigned long long int) arr_28 [i_11] [(signed char)9])))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                arr_38 [i_8] [i_11] [i_8] [(signed char)3] = ((/* implicit */unsigned char) arr_5 [i_11] [i_11 - 1] [i_11]);
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) arr_10 [i_11 + 2] [i_11] [i_11 - 1] [i_11] [i_11 + 4] [i_11]))));
                    var_22 = -448091270;
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)32)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_33 [i_12]))))));
                    arr_41 [i_13] [i_11] [i_12] [i_11] = ((/* implicit */int) ((unsigned int) arr_22 [i_11 - 1] [i_11 - 1] [i_13] [i_13]));
                }
            }
            for (long long int i_14 = 1; i_14 < 10; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    for (int i_16 = 3; i_16 < 12; i_16 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */long long int) ((((var_2) - (((/* implicit */int) var_1)))) / (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54334)) - (var_9)))) ? (((/* implicit */int) ((short) var_1))) : (arr_29 [i_8] [(short)1] [3ULL])))));
                            var_25 &= ((/* implicit */unsigned short) ((((arr_19 [i_11 + 1] [i_11] [i_16 - 1] [i_14 + 1]) && (((/* implicit */_Bool) ((int) var_8))))) ? (max(((-(arr_42 [i_8] [i_8] [4U] [4U]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_8]))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            arr_50 [i_14] [i_14] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_8]))))) * (((/* implicit */int) (!((_Bool)1)))))));
                            var_26 = ((/* implicit */long long int) ((arr_49 [i_8] [i_14] [i_14 + 3]) & (((((/* implicit */_Bool) arr_6 [i_14 - 1] [i_11 - 1] [i_14 - 1])) ? (((/* implicit */int) arr_2 [i_11] [i_11 + 3])) : (((/* implicit */int) (signed char)-127))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned int i_18 = 3; i_18 < 12; i_18 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */long long int) ((((arr_6 [i_11 + 2] [i_14 + 1] [i_18 - 2]) & (((/* implicit */unsigned int) 0)))) <= (((((/* implicit */_Bool) arr_6 [i_11 + 2] [i_14 + 1] [i_18 + 1])) ? (arr_6 [i_11 + 4] [i_14 + 3] [i_18 - 1]) : (arr_6 [i_11 + 3] [i_14 - 1] [i_18 - 1])))));
                            var_28 = ((/* implicit */int) (-(min((arr_5 [i_14 - 1] [i_14 + 3] [20]), (((/* implicit */unsigned long long int) arr_33 [i_11 - 1]))))));
                        }
                    } 
                } 
                arr_56 [i_8] [i_11] [i_14] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_48 [i_11 + 2] [i_14] [i_14 + 1] [i_14] [i_14])), ((~(var_5)))));
            }
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)7)), (1603940708)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [5ULL] [5ULL] [i_11 + 3] [(unsigned short)2]))) : (min((arr_6 [i_11] [7ULL] [i_11 + 1]), (((/* implicit */unsigned int) 2147483647))))));
        }
        for (signed char i_19 = 0; i_19 < 13; i_19 += 2) 
        {
            var_30 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_19] [i_8])) ? (arr_0 [i_8]) : (((/* implicit */unsigned long long int) arr_18 [i_19] [i_8]))))) ? (min((((/* implicit */unsigned long long int) (signed char)0)), (arr_0 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91)))));
            /* LoopNest 2 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                for (int i_21 = 1; i_21 < 9; i_21 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                        arr_64 [i_8] [i_20] [i_20] [i_21] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned short) arr_16 [i_20] [i_20] [i_20]))) >> ((((+(((/* implicit */int) (short)85)))) - (82))))) << (((min((arr_29 [i_21 + 4] [i_19] [i_20 - 1]), (arr_29 [i_21 + 2] [i_21 + 2] [i_20 - 1]))) - (618861728)))));
                        arr_65 [i_20] [i_21] [i_20] [i_19] [i_19] [i_20] = ((/* implicit */_Bool) (-(min((arr_3 [i_8] [i_19] [i_20]), (((/* implicit */long long int) ((((/* implicit */_Bool) -2132689148)) || (((/* implicit */_Bool) arr_6 [i_21] [i_8] [i_8])))))))));
                        var_32 *= ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0));
                    }
                } 
            } 
            arr_66 [i_8] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_0))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_48 [i_8] [i_8] [i_8] [i_19] [i_8])) : (((/* implicit */int) arr_48 [i_19] [i_19] [i_8] [i_19] [i_8])))) : (((((/* implicit */_Bool) arr_48 [i_8] [i_19] [i_19] [i_19] [i_19])) ? (-1605182821) : (var_4)))));
            arr_67 [i_8] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_19])) ? (arr_17 [i_8]) : (((/* implicit */long long int) arr_21 [i_8] [(signed char)15] [i_8] [i_8] [19ULL] [i_8]))))));
        }
        var_33 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8]))) & (((2322435276U) | (((/* implicit */unsigned int) 1419985899))))))));
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 20; i_22 += 4) 
    {
        var_34 = ((/* implicit */signed char) (+(arr_0 [21U])));
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_18 [i_22] [i_22])) : (var_0)));
    }
    var_36 = 3698084792U;
}
