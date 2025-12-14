/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20716
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 3]))))) ^ (min((((/* implicit */unsigned int) var_11)), (arr_1 [i_2 - 2] [i_3 + 2])))));
                        arr_9 [i_0] [i_1] = ((/* implicit */int) (!(((arr_7 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_3 - 2]) > (arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_3 - 1])))));
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_2 [i_0] [i_1]) >> (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1873443610)))))) : (max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_3])), (arr_1 [i_1] [i_1])))))))) : (((/* implicit */unsigned int) ((((arr_2 [i_0] [i_1]) + (2147483647))) >> (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1873443610)))))) : (max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_3])), (arr_1 [i_1] [i_1]))))))));
                        arr_11 [i_0] [i_1] [i_3] = ((/* implicit */short) ((max((arr_1 [i_2 - 2] [i_3 + 2]), (arr_1 [i_2 - 1] [i_3 + 1]))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_2 - 1]))) ? ((-(arr_3 [i_2 - 2]))) : (max((arr_3 [i_2 + 1]), (arr_3 [i_2 - 3]))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_1] [i_4] [i_4] [i_5 - 1] = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)17))))), ((unsigned short)58275)));
                            arr_18 [i_0] [i_5 - 1] [i_1] [i_4] [i_4] = ((/* implicit */_Bool) min((((int) ((unsigned short) var_5))), (((/* implicit */int) arr_15 [i_2 - 2]))));
                        }
                        for (short i_6 = 3; i_6 < 14; i_6 += 4) 
                        {
                            var_14 = (-(-1873443611));
                            var_15 = (((!(((/* implicit */_Bool) arr_8 [i_4] [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 1])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min((arr_14 [i_0] [i_1] [i_2 - 3]), (arr_14 [i_2 - 1] [i_1] [i_2 - 2])))));
                            arr_22 [i_0] [i_1] [i_1] [i_0] [i_6] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])))) ? ((~(min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_2] [i_1] [i_2])))))) : (min((arr_1 [i_2 - 2] [i_2 - 3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))));
                        }
                    }
                    arr_23 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) (_Bool)1);
                    arr_24 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)31)), (527478940)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_3 [i_7]))))))));
            var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_19 [i_7])) + (((/* implicit */int) var_9)))) & (((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_7] [i_7])) ? (arr_26 [i_0]) : (((/* implicit */int) (signed char)-46)))) % (((arr_20 [i_7]) ? (arr_0 [i_0]) : (arr_26 [i_7])))))));
        }
        for (int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
        {
            arr_30 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) < (1873443609)))) < (((((-1873443609) + (2147483647))) << (((((/* implicit */int) (signed char)59)) - (59)))))))), ((~((+(3931476982U)))))));
            /* LoopSeq 2 */
            for (int i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) 
                {
                    arr_35 [i_0] [i_9] [i_0] [i_0] = arr_4 [i_0] [i_0] [i_9 + 2] [i_9 + 2];
                    arr_36 [i_0] [i_8] [i_9] [i_10 + 1] [i_10 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                }
                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2594031778U))), (((/* implicit */unsigned int) min((arr_20 [(unsigned char)10]), (var_11))))))) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_8])) : (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_15 [i_8]))))) ? (((/* implicit */int) (unsigned short)33502)) : (((/* implicit */int) (unsigned char)252))))));
            }
            for (int i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        {
                            arr_45 [i_12] &= ((/* implicit */unsigned char) max((((min((((/* implicit */int) arr_14 [i_0] [i_0] [i_11 + 2])), (arr_40 [i_0] [i_0] [i_0]))) + (max((((/* implicit */int) (signed char)-60)), (var_10))))), (((/* implicit */int) min((var_3), (((((/* implicit */unsigned long long int) arr_40 [i_0] [i_8] [i_11 + 3])) != (var_1))))))));
                            var_19 = ((unsigned int) (-(((/* implicit */int) var_0))));
                        }
                    } 
                } 
                arr_46 [i_11] = ((/* implicit */short) var_6);
                var_20 = min((((min((-1873443609), (1974287671))) / ((-(((/* implicit */int) arr_19 [i_11])))))), (((/* implicit */int) arr_32 [i_11 + 2] [i_11 - 1] [i_11 - 1])));
            }
            arr_47 [i_0] [i_8] = ((max(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) <= (2594031778U))))) ? (((/* implicit */int) ((_Bool) arr_37 [i_0] [i_8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_7)) - (16877))))))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
        {
            arr_50 [i_0] [i_14] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)15511)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_14] [i_14])) : (((/* implicit */int) (signed char)37))))));
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_15] [i_16] [i_17])) % (((/* implicit */int) arr_21 [i_0] [i_14] [i_15] [i_16] [i_16]))));
                            var_22 = (~(((/* implicit */int) (signed char)110)));
                            var_23 = ((/* implicit */_Bool) var_1);
                            arr_58 [i_0] [i_15] [i_15] [i_16] [i_17] &= ((/* implicit */unsigned short) (-(-8808880458632224661LL)));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_61 [i_14] [i_14] [i_14] [i_14] [i_14] [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_38 [i_16])) >> (((/* implicit */int) var_3)))) << (((((265206617) ^ (((/* implicit */int) (signed char)41)))) - (265206639)))));
                            arr_62 [i_14] [i_14] [i_14] [i_14] [i_16] [i_18] [i_18] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1690))))) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) arr_15 [i_18])));
                            var_24 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) % (((/* implicit */int) arr_6 [i_15] [i_15])))))));
                        }
                        for (unsigned long long int i_19 = 2; i_19 < 15; i_19 += 4) 
                        {
                            arr_66 [i_0] [i_15] &= ((/* implicit */short) ((arr_21 [i_0] [i_0] [i_15] [i_16] [i_19 - 1]) ? (arr_34 [i_0] [i_14] [i_15] [i_16] [i_19 + 1] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (_Bool)1))));
                            arr_67 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (signed char)-102);
                            arr_68 [i_0] [i_0] [i_14] [i_16] [i_19 - 2] = ((/* implicit */unsigned short) var_2);
                        }
                        arr_69 [i_0] [i_0] [i_15] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)78))) != (arr_44 [i_15] [i_14] [i_14] [i_16] [i_15]))))));
                    }
                } 
            } 
            arr_70 [i_0] [i_0] [i_14] = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0] [i_14] [i_14] [i_14]))));
            arr_71 [i_0] [i_14] [i_14] = (~(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])));
            arr_72 [i_14] [i_14] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) (signed char)101)))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        }
        arr_73 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) arr_32 [i_0] [i_0] [i_0])), ((-((+(((/* implicit */int) (short)-12918))))))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_21 = 2; i_21 < 14; i_21 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_22 = 0; i_22 < 16; i_22 += 1) 
            {
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    {
                        arr_84 [i_20] [i_20] [i_21 - 2] [i_20] [i_20] [i_20] = (+(((((/* implicit */long long int) ((((/* implicit */int) (signed char)125)) % (((/* implicit */int) var_9))))) - (-1242071801687848287LL))));
                        arr_85 [i_22] [i_20] [i_22] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_20] [i_21] [i_21] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) 4017296343U)) ? (arr_59 [i_20] [i_20] [i_21] [i_23 - 1] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_20] [i_20] [i_22] [i_20]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_23])) ? (((/* implicit */int) arr_64 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) (signed char)127)))))))));
                        arr_86 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = max((((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_23 - 1] [i_23] [i_23 - 1] [i_23 - 1] [i_23]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_20] [i_21]))) + (((long long int) var_0)))));
                    }
                } 
            } 
            var_26 = max((max((((/* implicit */unsigned int) arr_52 [i_20] [i_21] [i_21 + 2])), (min((((/* implicit */unsigned int) arr_64 [i_20] [i_20] [i_20] [i_21] [i_21] [i_21])), (arr_54 [i_20] [i_20] [i_20] [i_20] [i_20]))))), (((/* implicit */unsigned int) (unsigned char)95)));
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)34))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))))) : (max((-1924416543), (((/* implicit */int) arr_63 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_24 = 0; i_24 < 13; i_24 += 3) 
    {
        for (short i_25 = 2; i_25 < 12; i_25 += 1) 
        {
            for (unsigned char i_26 = 1; i_26 < 11; i_26 += 4) 
            {
                {
                    arr_95 [i_24] [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_5)) * (((/* implicit */int) arr_13 [i_24] [i_24])))))))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (!((((-(((/* implicit */int) arr_87 [i_24])))) == (((/* implicit */int) arr_43 [0LL])))))))));
                    arr_96 [i_24] [i_25] [i_25 - 1] [i_25] = ((/* implicit */long long int) var_11);
                }
            } 
        } 
    } 
    var_29 ^= ((/* implicit */unsigned char) var_2);
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 861417048U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_11))))))) : (7471098461657807856ULL)));
}
