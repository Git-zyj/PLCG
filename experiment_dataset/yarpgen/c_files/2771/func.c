/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2771
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0])))))));
                    arr_11 [1] [12] [i_0] [i_2] = (((!(((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0])))) ? (((0ULL) * (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)121), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_0] [i_0] = min((((((/* implicit */_Bool) (unsigned char)88)) ? (min((10569148868824999684ULL), (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) > (var_6))))))), (max((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_0])) ? (-1052418955) : (((/* implicit */int) var_5))))))));
                                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned char)16] [i_0])), (((((/* implicit */_Bool) var_8)) ? (arr_8 [i_3] [i_0] [i_3] [i_3]) : (arr_8 [i_0] [i_0] [i_0] [i_0])))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) arr_9 [i_3] [i_2] [i_0])))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [i_0] [i_2] = (-(var_8));
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))), (((signed char) (signed char)74))));
        arr_21 [i_0] = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [2ULL]);
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
    {
        arr_24 [(signed char)6] = ((/* implicit */int) (-((~(((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])) ? (var_8) : (arr_12 [i_5] [20] [i_5])))))));
        arr_25 [i_5] = ((/* implicit */unsigned char) arr_2 [6] [6]);
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] [i_6] = ((arr_14 [0ULL] [i_6] [i_6] [i_6] [i_6] [i_6]) << (((var_14) - (12922837226668435852ULL))));
        arr_29 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(arr_0 [6] [6])))) == (arr_8 [i_6] [(unsigned char)14] [i_6] [i_6]))) ? (max((((/* implicit */unsigned long long int) arr_27 [i_6])), (arr_22 [i_6] [i_6]))) : (((/* implicit */unsigned long long int) min(((-(0))), ((-(((/* implicit */int) var_4)))))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_36 [i_6] [i_6] [i_7] [(signed char)0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_8] [i_6] [i_8])) ? (((/* implicit */int) arr_9 [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_9 [i_6] [i_6] [i_6])))) & (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (signed char)2)) : (-1121461664)))));
                    /* LoopSeq 2 */
                    for (int i_9 = 2; i_9 < 18; i_9 += 1) 
                    {
                        arr_41 [i_6] [i_7] [i_7] [i_9] &= ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-12))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_14)))) ? (min((arr_5 [i_6] [i_8] [i_9]), (((/* implicit */int) arr_37 [i_6] [i_7] [i_8] [i_8])))) : (((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) arr_33 [i_8])) : (((/* implicit */int) (signed char)9))))))) : ((+(arr_22 [i_9 + 1] [i_9 + 2]))));
                        arr_42 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_7] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1052418932)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1439662678) : (-1439662679))) : (((-1696674776) + (((/* implicit */int) var_3))))))) : (max((var_6), (((/* implicit */unsigned long long int) arr_26 [i_9 + 3] [i_9 + 3]))))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 20; i_10 += 3) 
                    {
                        arr_45 [i_6] [i_6] [i_10] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 5514477342647375320ULL)) ? (arr_35 [i_6] [i_7] [i_7]) : (2048091026))))) ? (((((unsigned long long int) -779870456)) & (((/* implicit */unsigned long long int) arr_34 [i_8] [i_10 + 1] [i_8] [i_10 + 1])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
                        arr_46 [i_6] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (12932266731062176275ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69)))));
                        arr_47 [i_10] [19ULL] [19ULL] [(signed char)20] = ((unsigned long long int) (-(arr_30 [i_6] [i_10 + 1] [i_10])));
                        arr_48 [i_6] [i_7] [i_10] [i_8] [i_7] [i_10 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) 2753299180690880221ULL)))));
                    }
                    arr_49 [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (((unsigned long long int) arr_34 [i_8] [i_8] [(signed char)20] [i_7])) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-35))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (1152921504606846848ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        for (signed char i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            {
                                arr_55 [i_8] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_11])) ? (arr_3 [i_8]) : (arr_3 [i_7]))), (((((/* implicit */_Bool) arr_3 [i_8])) ? (arr_3 [i_7]) : (arr_3 [i_11])))));
                                arr_56 [i_6] = ((/* implicit */signed char) (+((+(1696674785)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
    {
        arr_59 [i_13] = arr_12 [i_13] [i_13] [i_13];
        arr_60 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_13] [(signed char)12] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_8 [i_13] [i_13] [i_13] [i_13])))) || (((((/* implicit */int) arr_40 [i_13] [i_13] [i_13] [i_13] [i_13])) != (((/* implicit */int) arr_40 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
        arr_61 [i_13] [i_13] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)41))));
    }
    var_18 = ((/* implicit */unsigned char) ((var_8) >> (((var_0) - (1850675171)))));
    var_19 = var_11;
}
