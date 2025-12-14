/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22831
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
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 3])))))) % (((((/* implicit */_Bool) -223012660)) ? (arr_11 [i_3] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0 - 3] [i_0] [i_0 - 1])))));
                        arr_13 [i_3] [i_3] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))));
                        arr_14 [i_3] [12U] [12U] [i_0] |= ((/* implicit */unsigned char) (+(max((-223012648), (max((-223012660), (1715235956)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */int) arr_10 [i_0] [i_1])))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) 223012668)) <= (2057191504U))))));
                        arr_18 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 223012668)) ? (-223012679) : (223012667)))));
                    }
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_16 [i_1] [i_1] [i_2] [i_1]) : (arr_16 [i_0] [i_1] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 6655716014503534196ULL)) ? (((/* implicit */int) (short)-31515)) : (223012677))) - ((-(((/* implicit */int) var_2))))))) : ((+(var_11))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        arr_21 [i_0] = ((/* implicit */_Bool) var_2);
                        arr_22 [i_0] [i_0] [i_5] = ((/* implicit */short) var_1);
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((max((((/* implicit */long long int) arr_1 [i_1])), (arr_11 [i_0] [i_1] [(unsigned char)4] [i_5]))) + (9223372036854775807LL))) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-629)) % (((/* implicit */int) var_0))))), (((((/* implicit */unsigned long long int) var_6)) & (14760669232777389949ULL))))) - (18446744073709550987ULL))))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_26 [i_0] [i_0] [i_2] [i_6] [i_6] [i_2] = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) : (var_3)));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [6LL])))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 1; i_7 < 23; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_29 [i_8] [i_7])) ? (((/* implicit */int) arr_29 [i_8] [i_7])) : (arr_27 [i_7]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7]))))))))));
                    var_19 = ((/* implicit */int) var_9);
                    arr_33 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))) <= (min((max((((/* implicit */unsigned long long int) var_5)), (621546715807012600ULL))), (((/* implicit */unsigned long long int) arr_29 [i_7] [i_8]))))));
                    var_20 = ((/* implicit */short) var_4);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (unsigned short i_12 = 2; i_12 < 11; i_12 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) var_1);
                    arr_41 [i_10] [i_10] [i_12] = ((/* implicit */long long int) arr_37 [i_10]);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (int i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            {
                                arr_47 [i_10] [i_11] [i_10] [i_13] [i_14] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_13)))));
                                var_22 = ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_48 [i_10] = arr_4 [i_10] [i_10];
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            for (unsigned char i_16 = 3; i_16 < 11; i_16 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 4; i_17 < 10; i_17 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_18 = 3; i_18 < 10; i_18 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) -223012668)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_18]))) : (var_7))))))));
                            var_24 = ((/* implicit */signed char) arr_44 [i_10] [i_15] [i_16] [i_10] [i_18]);
                            arr_59 [(signed char)8] [i_15] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -225198897)) >= (arr_32 [i_15] [i_15] [i_16 - 1] [i_16])));
                        }
                        for (unsigned char i_19 = 1; i_19 < 11; i_19 += 1) 
                        {
                            arr_62 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_9 [i_10])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_17])) : (((/* implicit */int) arr_60 [i_10]))))));
                            arr_63 [i_10] [i_10] [i_19] [i_17] [i_16] = ((/* implicit */long long int) ((arr_61 [i_10] [i_15] [i_16] [i_17] [i_19]) ? (((((/* implicit */_Bool) arr_60 [i_10])) ? (((/* implicit */unsigned int) -223012701)) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 223012648)) ? (((/* implicit */int) var_1)) : (var_5))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [10ULL]))) ^ (var_6))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_10] [2] [i_16])) | (((/* implicit */int) (signed char)80)))))))));
                            var_26 ^= ((/* implicit */short) arr_55 [i_10] [i_15] [i_16] [i_17] [i_16]);
                        }
                        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 1) 
                        {
                            var_27 -= ((/* implicit */_Bool) 6043464853252838573ULL);
                            var_28 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_17 + 1] [(short)8] [i_16]))));
                            arr_66 [i_10] [i_15] [i_16] [i_17] [i_20] = ((/* implicit */_Bool) ((unsigned long long int) arr_53 [i_16 - 3] [i_10] [i_16 - 2] [i_16 - 1]));
                        }
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) (+(((/* implicit */int) arr_67 [i_16] [i_16] [i_16 + 1] [i_17] [i_17]))));
                            var_30 = ((((((/* implicit */_Bool) arr_50 [i_10])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 959834418)) ? (((/* implicit */int) var_2)) : (-223012668)))));
                        }
                        arr_70 [i_10] = ((/* implicit */unsigned long long int) (+((-(var_9)))));
                    }
                    arr_71 [i_10] [i_15] [i_16] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_31 = ((/* implicit */unsigned long long int) ((int) ((arr_16 [i_16] [i_15] [i_16] [i_15]) & (arr_38 [i_16] [i_15] [i_10]))));
                    arr_72 [i_10] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_16 + 1] [i_10] [i_16 + 1]))));
                }
            } 
        } 
    }
}
