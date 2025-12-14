/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53550
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
    var_14 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (unsigned char)99)) + (((/* implicit */int) var_10)))) : (((((/* implicit */int) var_1)) + (((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_13 [i_2] [i_2] [i_1 + 3] [i_2] = ((/* implicit */int) arr_7 [i_2] [i_3]);
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
                            arr_17 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                        }
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((var_10) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    }
                } 
            } 
        } 
        arr_19 [i_0 + 1] [i_0 - 2] &= ((/* implicit */unsigned int) var_2);
        arr_20 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_13))));
    }
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        arr_25 [(signed char)1] |= ((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5] [i_5]))) : (var_4))), (((/* implicit */unsigned long long int) (+(-486927376)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        arr_33 [i_5] [i_5] [i_5] [i_8] [i_5] [4ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) + (var_9)))))))) & (((((/* implicit */unsigned int) (+(-486927376)))) + (var_6)))));
                        arr_34 [i_5] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (+((((-(((/* implicit */int) var_12)))) + (((/* implicit */int) var_10))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_37 [i_5] [i_5] [i_9] [6LL] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_9] [i_6 + 2]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            arr_40 [i_5] = (-(((486927375) & (var_11))));
                            arr_41 [i_5] [i_5] [(short)3] [i_9] [i_10] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_10))))));
                            arr_42 [i_9] [i_9] [i_7] [i_5] [i_9] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_29 [i_6 + 3] [1] [i_6 + 2])) ? (arr_29 [i_6 - 1] [i_6] [(unsigned short)10]) : (arr_29 [i_6 + 3] [i_10 - 1] [(signed char)9])))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            arr_46 [i_11] [i_11] [i_9] [i_7] [i_7] [i_11] [i_5] = ((/* implicit */int) var_8);
                            arr_47 [i_5] [i_11] &= ((/* implicit */short) var_3);
                            arr_48 [(short)6] [i_11] [i_11] |= -1904983946957197996LL;
                        }
                        arr_49 [i_9] [10ULL] [i_9] = ((/* implicit */unsigned long long int) -486927401);
                        arr_50 [i_9] [i_6] [9] [i_9] [i_9] = ((/* implicit */short) var_0);
                        arr_51 [i_5] [i_6 + 1] [i_7] [i_7] [i_7] [4] = ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) 486927375)) & (var_4))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (var_10))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                    arr_52 [i_6] = ((/* implicit */long long int) var_13);
                    arr_53 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */short) var_12);
                }
            } 
        } 
        arr_54 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) -1214955301)) ? (((/* implicit */unsigned long long int) 1191875720)) : (2305842734335787008ULL))) : (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_55 [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_5] [i_5] [i_5]))) + (var_6)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13)))) : (min((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    for (unsigned char i_12 = 1; i_12 < 7; i_12 += 1) 
    {
        arr_60 [i_12] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 268431360U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34205)) ? (((/* implicit */int) arr_7 [(signed char)0] [(signed char)0])) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_12 + 2])) + (((/* implicit */int) arr_22 [i_12 + 1])))))));
        arr_61 [8LL] = (-(((/* implicit */int) (_Bool)1)));
        /* LoopNest 3 */
        for (short i_13 = 2; i_13 < 7; i_13 += 1) 
        {
            for (unsigned short i_14 = 4; i_14 < 9; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_69 [i_15] [i_14] [i_12 + 1] [i_14] [i_12 + 1] = ((/* implicit */int) (!((_Bool)1)));
                        arr_70 [i_13] [i_13] [i_13] [i_14 - 3] [i_14 - 3] [i_15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_2)), ((-(430029080U)))));
                        arr_71 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_31 [i_12] [i_13 + 1] [i_14 + 1] [i_12 - 1] [i_13])), (var_3)))) ? (((((/* implicit */_Bool) 2739381266U)) ? (6398971468010345041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17200))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [i_12 + 2] [i_13] [i_14] [i_15] [(unsigned short)5])))))));
                    }
                } 
            } 
        } 
        arr_72 [(short)1] [6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
}
