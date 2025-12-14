/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220490
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    var_15 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((var_10) + (var_8)))) ? (max((((/* implicit */unsigned int) var_6)), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) max((arr_2 [i_2 + 2]), (((/* implicit */int) var_6))))))));
                    var_16 = ((unsigned long long int) ((var_1) != (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_0] [i_0])))))));
                }
                for (int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 4; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((((long long int) arr_5 [i_0] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((long long int) arr_4 [i_0]))))))));
                                var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */_Bool) (signed char)-84)) && (((/* implicit */_Bool) 4936290907481348947ULL)))) && (((((/* implicit */_Bool) (short)-13755)) && (((/* implicit */_Bool) (unsigned char)180)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_3 - 1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_14)))) && (((((/* implicit */_Bool) arr_15 [9ULL] [9ULL] [i_7 + 2] [i_0] [i_7 + 2] [i_0 + 1] [i_3])) && (((/* implicit */_Bool) var_8))))));
                                var_21 &= ((/* implicit */short) arr_18 [i_0] [i_0 - 1] [12U] [i_0 - 1] [i_0]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1] [(unsigned short)9] [i_3])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3]))))))))));
                }
                for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    var_23 = ((/* implicit */short) ((long long int) (((((~(((/* implicit */int) arr_6 [i_0] [i_0] [0])))) + (2147483647))) >> (((((((/* implicit */int) (short)12217)) << (((((/* implicit */int) (unsigned char)232)) - (220))))) - (50040828))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) ((short) arr_21 [0] [i_1] [i_10] [12]))) >= (((/* implicit */int) arr_6 [i_8] [(unsigned short)2] [i_10])))))));
                                var_25 = ((/* implicit */short) (+((-(arr_18 [i_0] [i_1] [i_8] [i_8] [1ULL])))));
                                var_26 -= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13))))))), (((int) -2115143826))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((unsigned long long int) arr_2 [i_0])))) | (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_1] [i_1] [i_8] [(short)4]))))), (min((arr_3 [i_0] [i_1] [i_8]), (((/* implicit */unsigned long long int) var_10))))))));
                    arr_26 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) 16777208)) : (10U))));
                    var_27 = ((/* implicit */long long int) ((var_8) | (((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (var_2)))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_6 [i_0 - 1] [11ULL] [i_8])))) : (max((var_3), (var_9)))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((16777204) / (((/* implicit */int) ((_Bool) (signed char)-109)))))) >= (7299634805166860750ULL))))));
                    arr_29 [9ULL] [i_1] [i_0] [9ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]))) ? (arr_24 [i_0 - 1] [i_0 + 1] [i_0 - 1] [7LL] [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)3] [i_1] [i_11]))))))))) ? (((/* implicit */int) ((unsigned char) max((arr_22 [(_Bool)1] [(unsigned char)1]), (((/* implicit */unsigned short) var_0)))))) : (((((((/* implicit */_Bool) (short)13755)) ? (var_2) : (((/* implicit */int) (short)13750)))) | (((((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_0] [4ULL] [i_11])) << (((((/* implicit */int) var_12)) - (28711))))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) ((_Bool) (-(var_9))));
        arr_33 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [(short)13]))))) ? (((unsigned long long int) arr_31 [i_12])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_12])))))) ? (((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_12]))))) | (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_12])))));
        var_30 = ((/* implicit */unsigned int) arr_31 [i_12]);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 2; i_14 < 21; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) max((max((arr_36 [i_14] [i_14] [i_14 + 1]), (arr_36 [i_14 - 1] [i_14 - 1] [i_14 - 1]))), (arr_34 [i_15])));
                    var_32 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) != (arr_35 [i_15]))))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 19; i_16 += 4) 
                    {
                        for (short i_17 = 1; i_17 < 20; i_17 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */int) (!(((_Bool) ((var_11) >= (arr_44 [i_13] [i_14] [i_13] [i_13] [i_17 - 1] [1LL]))))));
                                arr_47 [i_13] [(_Bool)1] [(short)0] [i_16] [i_13] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) arr_45 [i_13] [i_13] [9] [i_13])))) : (((((/* implicit */_Bool) arr_39 [i_16])) ? (((/* implicit */int) arr_30 [(unsigned char)4])) : (var_3))))))));
                                arr_48 [i_13] [i_13] [(unsigned short)1] [i_16 + 1] [i_17] [i_14] = ((/* implicit */long long int) ((short) ((((/* implicit */int) ((_Bool) var_4))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_41 [i_13])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((short) var_9);
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_35 -= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_46 [i_18] [18U] [4] [i_18] [i_18] [i_18])) : (((/* implicit */int) var_6))))))) || (((/* implicit */_Bool) var_4)));
        arr_52 [i_18] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_18] [(unsigned short)2] [i_18] [i_18] [i_18] [i_18])) & (((/* implicit */int) arr_38 [i_18] [i_18] [i_18]))))) > (max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((unsigned short) var_2))))));
        var_36 = ((signed char) (((~(arr_36 [i_18] [(unsigned char)5] [i_18]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_3)) : (arr_44 [i_18] [i_18] [i_18] [i_18] [i_18] [(unsigned char)5]))))));
    }
    var_37 = ((/* implicit */int) ((((((((/* implicit */long long int) var_2)) + (var_14))) & (max((var_11), (((/* implicit */long long int) var_12)))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_2) == (((/* implicit */int) var_4))))) > (var_3)))))));
}
