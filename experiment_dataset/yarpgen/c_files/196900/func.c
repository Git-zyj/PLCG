/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196900
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2]))))), (((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) var_15)))) == ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))) | (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_15 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1925171858U))));
                    arr_16 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0])) ^ (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))) ? (((/* implicit */int) max((var_11), (var_5)))) : (((/* implicit */int) min((arr_1 [i_0 + 1] [i_0]), (arr_1 [i_0 + 1] [i_2]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_3] [i_3]))));
        arr_20 [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_3]))) == (arr_17 [i_3]))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned short) var_15)))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_26 [i_3] [i_4] |= ((/* implicit */unsigned long long int) (+((~(2374951178U)))));
                    arr_27 [i_3] [i_3] [i_4] [i_5] = ((arr_24 [i_4] [i_4 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                }
            } 
        } 
        arr_28 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -5834782251079456260LL)) / (7317755049068234149ULL)));
        arr_29 [i_3] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (var_12) : (((/* implicit */long long int) var_17)))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_40 [i_6] [8U] [i_7] [i_8] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_6] [i_7] [i_8] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6]))) : (arr_38 [10U] [i_7] [10U])))));
                    arr_41 [i_6] [(unsigned char)4] [i_6] [(unsigned char)4] = ((/* implicit */unsigned short) ((min((max((((/* implicit */unsigned int) var_8)), (2972171819U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_16))))))) >> (((((((/* implicit */_Bool) (~(arr_25 [i_7])))) ? ((+(var_9))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_6] [i_6] [i_6]))) : (arr_0 [i_6]))))) - (3687270357616364884ULL)))));
                    arr_42 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */signed char) (+(min((arr_36 [i_6] [i_7] [i_8]), (arr_36 [i_6] [i_6] [i_6])))));
                    arr_43 [i_6] [i_7] [i_7] [4ULL] &= ((/* implicit */unsigned short) max((((unsigned int) -9204617822427479288LL)), ((-(((((/* implicit */_Bool) arr_7 [i_6])) ? (arr_14 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                }
            } 
        } 
        arr_44 [i_6] [i_6] |= ((/* implicit */unsigned char) (-((-(max((((/* implicit */unsigned long long int) arr_7 [i_6])), (var_3)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_9 = 2; i_9 < 11; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        {
                            arr_54 [i_11] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)38772))));
                            arr_55 [i_9] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9 - 1] [i_9 - 2] [i_10 - 2])) ? (((/* implicit */int) arr_35 [i_9 + 1] [i_9 - 1] [i_10 + 1])) : (((/* implicit */int) arr_35 [i_9 - 1] [i_9 + 1] [i_10 + 1]))));
                        }
                    } 
                } 
            } 
            arr_56 [i_6] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (~(9204617822427479275LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (arr_10 [i_9] [i_9 - 1])));
        }
    }
    /* LoopNest 2 */
    for (long long int i_13 = 2; i_13 < 16; i_13 += 4) 
    {
        for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            {
                arr_61 [i_13] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_60 [i_13] [i_14])))) ? (((/* implicit */int) ((_Bool) arr_60 [i_13] [i_13]))) : (((/* implicit */int) ((unsigned char) var_4)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    arr_64 [i_13] [i_14] [i_14] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)65))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            {
                                arr_70 [i_13] [i_14] [i_13] [i_16] [i_13] [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0)))));
                                arr_71 [i_13] [i_14] [i_15] [i_16] [i_17] = ((/* implicit */unsigned int) arr_60 [i_13] [i_16]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        arr_75 [i_13] [i_13] [i_14] [i_14] [i_15] [i_14] = ((/* implicit */_Bool) ((unsigned long long int) arr_58 [i_13 - 2] [i_13 - 2]));
                        /* LoopSeq 1 */
                        for (long long int i_19 = 2; i_19 < 14; i_19 += 4) 
                        {
                            arr_78 [i_13] [i_13] [i_15] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) arr_77 [i_19] [i_19] [i_19 + 4] [i_19] [i_19]);
                            arr_79 [i_13] [i_18] = ((/* implicit */unsigned char) arr_59 [i_19] [i_19]);
                            arr_80 [i_13] [i_15] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_13]))) == (var_3))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_13] [i_14] [i_15] [i_18]))))) : (arr_62 [i_13] [i_14] [i_18] [i_19]));
                            arr_81 [i_19] [i_18] [i_15] [i_14] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_13 - 2]))));
                        }
                        arr_82 [i_18] = ((/* implicit */signed char) var_4);
                        arr_83 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((arr_2 [i_18]) ? (((/* implicit */int) arr_2 [i_14])) : (((/* implicit */int) arr_2 [i_13 + 2]))));
                    }
                    arr_84 [i_13] [i_14] = ((/* implicit */unsigned int) arr_58 [i_13 - 2] [i_13 - 1]);
                }
                arr_85 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) (-(((arr_58 [i_13] [i_13]) ? (((/* implicit */int) max((arr_76 [i_14] [i_14] [i_14] [i_14] [i_13] [i_13] [i_13]), (((/* implicit */unsigned short) arr_9 [i_14]))))) : (((/* implicit */int) var_0))))));
                arr_86 [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) var_2);
                arr_87 [i_13] [i_13] [i_14] = ((/* implicit */unsigned long long int) var_13);
            }
        } 
    } 
}
