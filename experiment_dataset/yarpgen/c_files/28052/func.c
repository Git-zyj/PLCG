/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28052
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
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 1] [i_0] [(short)3] = ((/* implicit */unsigned short) (short)0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_3 + 2] [i_3 + 2] [(unsigned short)6] [i_3 + 3] [(short)2] [i_3])) <= (arr_3 [i_0] [i_0]))))))));
                            arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_2] [(short)0] [1] [i_2])) && (((/* implicit */_Bool) (unsigned short)17968))));
                            arr_14 [i_3] [i_1] [i_2] [i_3] [i_3] = (short)0;
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1]))))) ? (min((((/* implicit */unsigned long long int) (short)-13218)), (var_6))) : (((/* implicit */unsigned long long int) ((arr_8 [i_0] [(unsigned char)9] [i_0]) ? (arr_7 [i_0 + 1] [(signed char)1]) : (arr_7 [(_Bool)1] [(_Bool)1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 10; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 7; i_7 += 2) 
                    {
                        {
                            arr_25 [i_4] [i_4] [i_6] [i_7] = (((~(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4])) && (var_11)))))) | (((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) arr_16 [i_7 - 1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6 + 1] [(_Bool)0] [i_4]))) >= (4294967289U)))))));
                            arr_26 [i_7] [i_4] [i_6 - 2] [i_4] [2ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7 + 3] [i_5 + 3] [3ULL])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 + 1] [i_5 - 1] [i_5]))))))));
                        }
                    } 
                } 
                arr_27 [(short)10] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)49740), (((/* implicit */unsigned short) (short)-23546))))) ? (((/* implicit */int) ((_Bool) arr_22 [i_4] [i_4] [i_4] [i_4]))) : ((~(((/* implicit */int) var_2))))))) ? ((((-(((/* implicit */int) arr_22 [i_4] [0] [i_4] [i_5])))) / (((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_18 [i_5 + 2])))))) : ((+(((/* implicit */int) ((((/* implicit */int) (short)25798)) == (((/* implicit */int) (signed char)-1)))))))));
                arr_28 [6ULL] = ((/* implicit */_Bool) ((unsigned long long int) min((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_19 [i_4] [i_4])) : (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4])))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)11)) >= (((/* implicit */int) (short)9138))))))));
                arr_29 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_12 = min((((/* implicit */int) ((unsigned short) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))))), ((~(((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32764)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 3) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_31 [i_8] [17ULL])) ? (var_10) : (var_7)))));
        arr_33 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_31 [i_8] [i_8])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)13218)))) <= (((/* implicit */int) ((arr_31 [i_8] [i_8 - 1]) >= (((/* implicit */unsigned long long int) 265723979U)))))));
        arr_34 [i_8] = ((signed char) arr_31 [i_8] [i_8]);
    }
    for (unsigned short i_9 = 3; i_9 < 9; i_9 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            arr_41 [i_10] [i_9] [i_10] = ((/* implicit */short) var_5);
            arr_42 [(_Bool)1] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) arr_38 [i_9] [i_9 + 3] [i_9]))));
        }
        arr_43 [(unsigned short)2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_7)));
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_12 = 3; i_12 < 8; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            arr_54 [(_Bool)0] [(_Bool)0] [i_9] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_55 [i_9] [i_14] [i_12] [i_13] [i_14] [i_9] [i_14] = ((/* implicit */short) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((short) ((_Bool) arr_30 [i_9 + 2] [i_14]))))));
                        }
                        for (short i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            arr_59 [i_9 + 3] [i_9] [i_12] [i_12] [i_13] [i_9 + 3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_11] [i_9 - 3] [i_12 - 2] [i_13]))) / (12422952473174023941ULL)));
                            arr_60 [i_9 - 3] [i_9] [i_9] [i_13] [(signed char)7] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_61 [i_9 - 2] [6ULL] [i_11] [i_12] [i_15] [i_15] = ((/* implicit */unsigned short) ((short) ((((arr_35 [i_15]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23034)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_62 [i_9 + 3] [i_9] [i_12] [i_13] [i_15] = ((/* implicit */unsigned long long int) arr_30 [i_9 - 2] [i_9]);
                        }
                        arr_63 [i_9 - 3] [i_9 - 3] [(unsigned short)10] [i_13] &= ((/* implicit */signed char) var_5);
                        arr_64 [i_9] [2ULL] [i_9] [i_13] [i_9] = ((/* implicit */unsigned short) (~(max((4535910143537193836ULL), (((/* implicit */unsigned long long int) 4294967275U))))));
                    }
                } 
            } 
            arr_65 [i_9] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) ((short) (_Bool)1)))))));
            arr_66 [i_9 - 3] [10U] &= ((/* implicit */signed char) arr_48 [i_9] [i_9] [3ULL] [(unsigned short)11]);
            arr_67 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_51 [i_9] [i_11] [i_11])))))) : (max((((/* implicit */int) arr_44 [i_9 - 2] [i_11])), (((arr_30 [i_9] [i_9]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        }
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            arr_70 [(_Bool)1] [i_16 + 1] [i_16 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_39 [i_16 + 1] [i_9 + 1]))) ? (max((max((arr_53 [i_16] [i_16] [i_16] [i_9] [(signed char)11]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9 - 2] [i_16] [i_9 - 3])))));
            arr_71 [i_9] = ((/* implicit */_Bool) arr_53 [i_9 + 2] [i_9] [i_16] [i_16] [i_9 - 2]);
        }
        arr_72 [(signed char)8] = ((/* implicit */unsigned short) (~(min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))), (((/* implicit */int) (signed char)-1))))));
    }
    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            arr_79 [i_18] [i_18] [i_18] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) arr_22 [(unsigned short)7] [i_18] [i_18] [i_18])))));
            arr_80 [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_73 [9]))))))) ? (((((((/* implicit */int) (short)19227)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [(unsigned short)6] [i_18] [i_17])))))) : (((1469007228U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_17] [i_17]))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (short)-25405)))), (((((/* implicit */int) (short)4975)) - (((/* implicit */int) var_2)))))))));
            arr_81 [i_17] [i_17] = ((/* implicit */_Bool) (short)-12193);
            arr_82 [i_17] [i_17] [i_18] = (+((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_17] [i_17] [i_17] [i_17] [(short)7] [(unsigned short)11] [i_17]))) - (arr_31 [i_17] [(unsigned short)8]))))));
        }
        arr_83 [i_17] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [(signed char)4] [i_17] [i_17] [i_17] [(_Bool)1])) + (((/* implicit */int) arr_57 [10ULL] [i_17] [i_17] [i_17] [(_Bool)1]))))), (5147900424094011207ULL)));
    }
}
