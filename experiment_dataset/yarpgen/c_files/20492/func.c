/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20492
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
    var_20 = ((/* implicit */int) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (-(((/* implicit */int) (_Bool)1)));
        var_21 = min((arr_1 [i_0]), (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_22 = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) -3845525218300102764LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_12))))) < (min((((/* implicit */long long int) arr_0 [i_1] [i_1])), (var_19))))))) : (((((((/* implicit */unsigned long long int) var_6)) < (var_16))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)25848)), (var_8)))) : (arr_5 [(_Bool)1] [i_1])))))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (max((((/* implicit */long long int) max((-1703993992), (((/* implicit */int) arr_0 [i_1] [i_1]))))), (arr_4 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) -508508713);
                    var_25 = ((/* implicit */long long int) var_8);
                    var_26 = ((/* implicit */unsigned short) arr_3 [10U]);
                    arr_12 [i_1] [i_2] [2LL] |= ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (int i_7 = 3; i_7 < 16; i_7 += 2) 
                {
                    {
                        arr_26 [(unsigned short)3] [i_4] [i_6] [i_6] [i_4] [i_4] = ((/* implicit */unsigned int) ((short) ((unsigned long long int) ((var_4) ^ (((/* implicit */unsigned long long int) 687239575))))));
                        arr_27 [i_4] [i_4] [(unsigned short)4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) arr_14 [i_7 + 1]);
                        arr_28 [i_5] [i_5] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */long long int) max((((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4])) : (-1703993992)))), (((/* implicit */unsigned char) (!(((((/* implicit */int) arr_16 [i_4])) < (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
        arr_29 [i_4] = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (short)-1284))))) && (min(((_Bool)1), ((_Bool)0)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_21 [i_4] [i_4] [i_4])), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)2428)))) : (((long long int) arr_20 [i_4] [i_4] [i_4])))));
    }
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_40 [i_8] [i_9] [i_10] [6LL] = ((/* implicit */long long int) arr_31 [i_8]);
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
                        {
                            arr_48 [8LL] [i_11] [i_11] [i_11] [i_11] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)30705)))));
                            arr_49 [i_8] [i_10] [i_10] [6LL] [i_12] = ((/* implicit */unsigned int) var_19);
                        }
                        for (short i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
                        {
                            arr_54 [i_8] [i_8] [i_10] [i_10] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_15 [i_10] [i_13]), (((/* implicit */int) arr_37 [11LL] [i_10] [i_11] [i_13]))))), (((arr_7 [i_8] [i_9]) ? (var_2) : (((/* implicit */long long int) arr_22 [(_Bool)1] [i_10] [(_Bool)1] [(_Bool)1]))))))) ? (min((((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) var_17))))), (min((var_1), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) arr_51 [i_10] [i_10]))));
                            var_27 ^= ((/* implicit */unsigned short) arr_47 [5LL] [i_9 + 1] [i_10] [i_11]);
                        }
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            arr_58 [i_10] [(unsigned char)10] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_5 [i_11] [i_10]) == (((/* implicit */long long int) 1703993991)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_18 [i_11] [i_11])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((3645825978286841488LL), (((/* implicit */long long int) arr_53 [i_8] [i_10]))))));
                            arr_59 [i_14] [i_10] [i_10] [i_10] [i_8] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_3 [i_9 + 1])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_15 = 1; i_15 < 12; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 4294967271U)) ? (-971139798) : (((/* implicit */int) (short)-7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)223))))))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_17) : (((/* implicit */int) (short)-9252))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_8] [i_8] [i_8] [i_10] [i_11] [i_11] [i_15]))))) : (((/* implicit */int) arr_55 [i_9 + 1] [i_9 + 1])))))));
                            var_30 |= ((((/* implicit */_Bool) arr_14 [i_9 + 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_15 - 1]))));
                            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_9 + 1] [i_9 + 1])) | (((/* implicit */int) arr_7 [i_9 + 1] [i_9 + 1]))));
                            arr_64 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_10] = var_6;
                        }
                        var_32 = min((max((((((/* implicit */_Bool) arr_11 [1U] [i_9] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (short)1268))) : (arr_35 [i_8] [i_9 + 1]))), (((/* implicit */long long int) max((((/* implicit */int) var_11)), (54574512)))))), (((/* implicit */long long int) min(((unsigned char)61), (((/* implicit */unsigned char) ((_Bool) arr_22 [i_11] [11U] [i_9 + 1] [i_8])))))));
                    }
                    for (unsigned short i_16 = 1; i_16 < 12; i_16 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) arr_62 [i_8] [i_8] [i_9 + 1] [i_10] [(unsigned char)1] [i_10] [i_16]);
                        var_34 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_52 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1])))), (arr_65 [i_8] [i_10] [i_10] [i_16 - 1])));
                    }
                    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
                    {
                        arr_72 [i_10] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) var_2))), (((((/* implicit */int) arr_50 [6U] [7ULL])) + (((/* implicit */int) arr_16 [(short)0]))))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_10] [i_10])) | (((/* implicit */int) (unsigned char)160))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(unsigned short)2] [i_17]))) : (var_8)))))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) 1671201731U)), (var_19))) ^ (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), (arr_67 [i_10] [i_9] [i_9 + 1] [11U] [i_17])))))))) ? ((((!(((/* implicit */_Bool) (short)-1284)))) ? (arr_8 [i_9 + 1] [i_9] [i_9 + 1]) : (((/* implicit */int) arr_53 [i_8] [i_10])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9252)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_8] [i_10] [(short)4])) ? (((/* implicit */int) arr_23 [i_10] [i_10])) : (((/* implicit */int) arr_53 [i_8] [i_10]))));
                        arr_75 [i_10] = ((/* implicit */unsigned char) ((arr_11 [i_9 + 1] [i_9 + 1] [i_9 + 1]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_45 [i_8] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])) + (var_13)));
                        arr_76 [i_10] = ((/* implicit */long long int) -1703993992);
                    }
                }
            } 
        } 
    } 
}
