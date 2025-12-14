/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207967
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((arr_4 [i_1 + 1] [(signed char)5] [i_1 + 1]) % (arr_4 [i_1 - 1] [i_1] [i_1 + 1]))) : (((arr_4 [i_1 - 2] [i_1 - 3] [(unsigned char)3]) >> (((arr_4 [i_1 - 1] [4U] [i_1]) - (2272620491U)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 4; i_4 < 9; i_4 += 3) 
            {
                for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            arr_18 [i_2] [i_3] [i_4] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4043064444457636659LL)) ? (4043064444457636669LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_19 [i_2] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [(unsigned char)10] [i_2] [i_2 + 1] [(unsigned char)6] [i_2] [i_2 + 1])) || (((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
            } 
            arr_20 [i_3] = ((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2] [2ULL]);
            arr_21 [i_2] [i_3] = ((/* implicit */short) arr_8 [i_2 - 2] [i_2 - 1]);
            arr_22 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2] [(unsigned short)11])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((+(4043064444457636669LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            arr_23 [i_2] = ((/* implicit */short) ((long long int) arr_17 [i_2 - 1]));
        }
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            arr_27 [i_7] [i_2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_8 [i_2] [i_7]))) ? (((/* implicit */int) min((var_4), (var_9)))) : (((/* implicit */int) arr_26 [i_2] [i_7]))))) ? (((/* implicit */int) ((signed char) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_13 [i_2 + 1] [i_7] [i_7])))) ? ((~(((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) min((var_10), (((/* implicit */short) var_12)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                arr_30 [i_2] [(unsigned short)8] = arr_9 [i_2 - 1] [i_2 - 2];
                arr_31 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_8])) ? (((/* implicit */int) arr_24 [i_7] [(_Bool)0] [i_7])) : (((/* implicit */int) arr_7 [i_2] [i_7]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2])) && (((/* implicit */_Bool) arr_26 [i_7] [i_7])))))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_35 [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_8] [i_9])) > (((/* implicit */int) arr_25 [i_7] [i_2 + 1]))));
                    arr_36 [(signed char)10] [i_2] [i_2] [i_7] [i_7] [(unsigned char)6] = ((/* implicit */signed char) (~(((/* implicit */int) arr_33 [i_2]))));
                }
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    arr_39 [(signed char)2] [i_7] [i_7] = ((/* implicit */_Bool) arr_17 [i_2 + 1]);
                    arr_40 [i_7] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 2] [0]))) : (var_15)));
                    arr_41 [i_2] [(unsigned char)10] [(short)0] [i_7] [i_7] = ((/* implicit */unsigned short) ((short) arr_24 [i_2 - 1] [11U] [i_7]));
                    arr_42 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_38 [i_2 - 2] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_38 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                    arr_43 [(short)3] [i_7] [i_8] [i_10] = ((/* implicit */_Bool) ((arr_24 [i_2 - 1] [i_2 - 1] [i_7]) ? (((/* implicit */int) arr_2 [i_7])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_33 [i_7])) : (((/* implicit */int) arr_9 [i_2] [i_7]))))));
                }
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                arr_46 [i_2] [i_7] [(unsigned short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_25 [i_7] [i_2 - 1]))));
                arr_47 [i_2] = (!(((/* implicit */_Bool) arr_12 [i_2])));
            }
            arr_48 [i_7] [i_7] = ((/* implicit */unsigned char) arr_25 [i_7] [i_7]);
            arr_49 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_24 [i_2] [i_2 + 1] [i_2]))) >= (((arr_24 [i_2] [i_2 - 1] [i_2]) ? (((/* implicit */int) arr_24 [i_2 - 2] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_24 [4U] [i_2 - 1] [i_2]))))));
        }
        arr_50 [i_2 - 2] = ((/* implicit */unsigned short) arr_34 [i_2] [10LL] [i_2 - 2] [i_2 - 2] [(short)7] [i_2]);
        arr_51 [i_2] = ((/* implicit */unsigned short) min((((arr_38 [i_2 - 1] [i_2 - 1] [i_2 + 1]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_38 [i_2 + 1] [i_2 - 2] [i_2 + 1]))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
    {
        arr_55 [i_12] [i_12] = ((/* implicit */unsigned int) arr_52 [i_12] [i_12]);
        arr_56 [i_12] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) arr_52 [i_12] [i_12]))));
    }
    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
    {
        arr_60 [i_13] = ((/* implicit */long long int) min((8789891776244342006ULL), (((/* implicit */unsigned long long int) (signed char)90))));
        arr_61 [i_13] [i_13] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_57 [i_13])) ? (arr_57 [i_13]) : (arr_57 [i_13])))));
        /* LoopSeq 1 */
        for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        {
                            arr_74 [i_14] [i_14] [i_17] = ((((/* implicit */int) arr_65 [i_13])) >= (((/* implicit */int) var_7)));
                            arr_75 [i_13] [i_13] [i_14] [(signed char)13] [i_16] [i_16] [i_17] = ((/* implicit */_Bool) arr_64 [i_16] [i_15] [(_Bool)1]);
                        }
                    } 
                } 
            } 
            arr_76 [i_13] [i_13] = ((/* implicit */unsigned short) ((arr_72 [i_13] [i_13] [(unsigned short)21] [i_13] [i_14] [(_Bool)1] [i_13]) ? ((+(((/* implicit */int) arr_64 [i_13] [i_13] [i_14])))) : (((/* implicit */int) ((_Bool) ((arr_67 [i_13] [i_13] [19ULL]) > (arr_66 [i_14] [i_13] [5LL] [i_13])))))));
            arr_77 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4043064444457636686LL)));
        }
    }
    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
    {
        arr_80 [i_18] [i_18] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_62 [i_18] [i_18] [i_18])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_16))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_15)) >= (arr_69 [(short)17] [i_18])))))), (((/* implicit */long long int) min((arr_78 [i_18] [i_18]), (arr_78 [i_18] [i_18]))))));
        /* LoopNest 3 */
        for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            for (unsigned char i_20 = 3; i_20 < 19; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                {
                    {
                        arr_89 [i_20] = ((/* implicit */_Bool) var_14);
                        arr_90 [i_18] [i_19] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_19] [i_19] [i_21])))))) || (((/* implicit */_Bool) min((((/* implicit */int) min((arr_59 [i_19]), (((/* implicit */unsigned short) arr_86 [(signed char)15] [i_20 + 1] [(signed char)15] [i_18]))))), (((((/* implicit */_Bool) arr_70 [i_18] [(unsigned short)20] [(short)16] [(unsigned char)5] [i_20])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16)))))))));
                    }
                } 
            } 
        } 
    }
}
