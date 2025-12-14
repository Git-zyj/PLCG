/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45633
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_1] = ((/* implicit */int) max((var_4), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (unsigned short)15)))))));
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_4] [i_1] [i_3] = ((/* implicit */_Bool) arr_4 [i_0]);
                            arr_16 [i_0] [i_0] [(short)18] [i_2] [i_3] [i_1] = ((/* implicit */int) ((_Bool) ((_Bool) var_9)));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)15);
                            arr_18 [i_1] = ((/* implicit */signed char) (((+(611829852U))) < (max((611829852U), (((/* implicit */unsigned int) arr_2 [i_0 + 1]))))));
                        }
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_1] [i_1 + 1] [i_2] [i_1] [i_3] [i_1] = var_9;
                            arr_23 [i_0 + 2] [(signed char)8] [i_1 + 1] [i_2] [i_3] [i_0 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_12 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1]))))));
                            arr_24 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) 3683137443U))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : ((+(arr_6 [(short)13] [i_1 + 1] [i_2] [i_1 + 1])))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_8 [i_0 + 4]) : (((/* implicit */unsigned int) arr_10 [10]))));
                            arr_28 [i_0] [i_1] = ((/* implicit */signed char) (_Bool)1);
                            arr_29 [i_0] [i_0] [(short)20] [i_2] [i_6] = ((/* implicit */long long int) 611829852U);
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_32 [i_0] [i_1] = ((unsigned int) arr_4 [i_0 - 1]);
                            arr_33 [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 8LL)) && (((/* implicit */_Bool) (unsigned char)38)))))));
                            arr_34 [i_0] [i_0 + 3] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */_Bool) ((unsigned short) arr_21 [i_1] [i_1] [i_0] [i_0] [i_7] [i_2] [i_0 + 4]));
                            arr_35 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (611829845U)));
                        }
                        arr_36 [i_0] [i_0 - 4] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) var_2));
                    }
                } 
            } 
        } 
        arr_37 [i_0] = ((/* implicit */unsigned int) (-(18446744073709551615ULL)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        arr_40 [i_8] [(signed char)9] = ((/* implicit */unsigned char) ((unsigned int) (short)-4039));
        /* LoopSeq 2 */
        for (int i_9 = 1; i_9 < 9; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                for (long long int i_11 = 3; i_11 < 10; i_11 += 2) 
                {
                    {
                        arr_47 [i_8] [i_8] [i_9 + 2] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4))))) - (((((/* implicit */_Bool) -196727060)) ? (((/* implicit */int) (unsigned short)16)) : (1975815644)))));
                        arr_48 [i_8] [i_9] [i_10] [i_11 + 1] = ((/* implicit */long long int) ((((var_9) >> (((var_4) + (877300314523647865LL))))) < (((/* implicit */int) (signed char)-10))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    arr_54 [i_13] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                    arr_55 [i_8] [i_9 + 1] [10] [10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4257385860U)) != (4229689952994288267LL)));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        arr_60 [i_8] [i_9] [i_8] [i_13] [i_14] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) arr_7 [i_8] [i_14] [i_14] [i_13] [i_14])))));
                        arr_61 [i_14] [i_13] [i_8] [i_9] [i_8] = ((/* implicit */signed char) (~(611829864U)));
                        arr_62 [i_8] [(_Bool)1] [i_12] [i_14] [i_14] = ((/* implicit */unsigned short) 3827158384U);
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_15 = 2; i_15 < 11; i_15 += 2) 
                {
                    for (unsigned char i_16 = 2; i_16 < 11; i_16 += 2) 
                    {
                        {
                            arr_68 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_0))))));
                            arr_69 [i_8] [i_9] [i_12] [i_15 - 2] [i_16] = ((/* implicit */signed char) arr_26 [i_9] [i_9] [i_15] [i_15 - 2] [i_12]);
                            arr_70 [i_16 - 1] [i_15 + 1] [i_8] [i_9 + 3] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_50 [i_8] [i_9 + 2] [7U] [i_8])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_8)) - (7)))))));
                            arr_71 [i_8] [i_9] [i_12] [i_9] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3683137460U)) ? ((~(260181693U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))));
                            arr_72 [i_16 - 2] [i_8] [(_Bool)1] [i_9] [i_8] = ((/* implicit */unsigned long long int) (~(var_4)));
                        }
                    } 
                } 
                arr_73 [i_8] [i_9] [i_12] = arr_42 [i_9] [(unsigned short)0] [i_9 - 1];
            }
            arr_74 [i_8] = ((/* implicit */short) ((((/* implicit */long long int) arr_66 [i_8] [i_8])) != (((((/* implicit */_Bool) arr_49 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4)))));
        }
        for (unsigned short i_17 = 1; i_17 < 10; i_17 += 1) 
        {
            arr_79 [4LL] [4LL] [i_17 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((13090190226653819104ULL) + (var_6)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_17] [i_17] [i_17 - 1] [(unsigned short)0] [i_17 + 2] [i_17] [i_17 - 1])))));
            arr_80 [i_8] = ((/* implicit */unsigned char) ((((var_6) < (((/* implicit */unsigned long long int) 1324235389U)))) ? (((((-171085108) + (2147483647))) << (((467808895U) - (467808895U))))) : (((/* implicit */int) arr_3 [(unsigned char)0]))));
            arr_81 [i_17] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_44 [i_17] [i_8]))) & (((((/* implicit */_Bool) arr_12 [i_17] [i_17] [i_17] [i_17] [i_17] [11U])) ? (arr_38 [i_8] [3ULL]) : (((/* implicit */int) var_3))))));
        }
    }
    var_12 = ((/* implicit */_Bool) var_4);
}
