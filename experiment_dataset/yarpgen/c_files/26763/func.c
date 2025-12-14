/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26763
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (+((+(-852000249))))))));
            arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [(signed char)1] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
            var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */unsigned int) arr_3 [i_0])) : (arr_2 [i_0] [i_1])));
        }
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_13 -= arr_6 [i_2];
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((-846016876031044740LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_2])) : (arr_3 [i_2]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))))) : ((+(((unsigned long long int) arr_7 [i_2]))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] [i_5 + 2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) - (arr_10 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4343877401781333538ULL)))))) : (((arr_16 [i_3] [i_3] [i_3] [i_3 - 1]) & (arr_16 [i_3] [i_3] [i_3] [i_3 + 1])))));
                    arr_18 [i_3] [i_3] [i_5 - 1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5 - 1] [i_3])) ? (arr_16 [i_3] [i_4] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4])))))))));
                    arr_19 [i_3] [i_5] [(unsigned char)10] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((unsigned long long int) -9LL)))) ? (((arr_15 [i_3] [i_3 - 1] [i_3]) ? (arr_0 [i_5 + 3]) : (((((/* implicit */_Bool) arr_2 [i_4] [i_5])) ? (arr_7 [5ULL]) : (arr_7 [i_3 + 1]))))) : (((((/* implicit */_Bool) (-(8512829735970758599LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [i_3]))) : (14102866671928218078ULL)))));
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_7 = 4; i_7 < 12; i_7 += 1) 
            {
                for (signed char i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) arr_15 [i_3] [i_6] [i_3]);
                            arr_30 [i_3] [i_3] [(unsigned short)0] [i_3] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_3]))) ? (((arr_15 [i_3] [i_3] [i_3]) ? (arr_16 [i_3] [i_8 + 1] [i_7 - 2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_7 + 2]))))) : ((-(4343877401781333538ULL)))));
                            var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1651462707919613795ULL)) ? (4343877401781333538ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35880)))));
                            arr_31 [i_6] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_6 + 1] [i_6])) >= (((/* implicit */int) arr_22 [i_3 - 1] [i_3] [i_8])))) ? (((/* implicit */int) arr_28 [i_8 - 1])) : (((/* implicit */int) arr_12 [i_3]))));
                            arr_32 [i_3] [i_3] [i_7] [i_3] [i_9 - 1] [i_7 - 4] [i_7] = ((/* implicit */long long int) ((((unsigned long long int) 499610891U)) << (((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_7] [i_3] [i_9 + 1])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_8 [i_6] [i_9]))))));
                        }
                    } 
                } 
            } 
            arr_33 [i_3] [i_3] = (~(((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_25 [i_3] [i_6 - 1] [i_3] [i_6 - 1] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [i_3 - 1]))))));
            arr_34 [i_3] [i_3] = (-(arr_2 [i_6] [i_3]));
        }
        for (int i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 13; i_11 += 4) 
            {
                for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
                {
                    {
                        arr_43 [i_3] [(short)2] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (499610890U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                        arr_44 [i_3] [(unsigned short)10] [i_3] [i_12] [i_3] [(unsigned short)6] = ((/* implicit */unsigned short) max((min((((unsigned int) arr_10 [i_11])), (max((arr_10 [i_3]), (((/* implicit */unsigned int) arr_40 [i_12] [i_3] [i_11] [i_10 + 1] [i_3] [14])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_11 + 2])) ? (((/* implicit */int) arr_6 [i_11 + 1])) : (((/* implicit */int) arr_6 [i_11 - 1])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            arr_48 [(unsigned char)6] [(unsigned char)6] [i_3] [(unsigned char)6] [i_13] [(unsigned char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (~(16795281365789937829ULL))))) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned short)35880))));
                            arr_49 [i_3] [i_3] [i_3] [i_12] [i_13] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_13 [i_3] [i_10] [i_3])))) + (2147483647))) << (((((((/* implicit */_Bool) arr_20 [i_3])) ? (arr_24 [4ULL] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_3] [i_10] [i_10]))))) - (8287285198681307824LL)))))) > (min((((/* implicit */unsigned int) (signed char)1)), (3795356405U)))));
                        }
                        for (short i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            arr_52 [i_3] [i_10] [i_11] [12LL] [12LL] [(unsigned char)2] = ((/* implicit */int) (!(((/* implicit */_Bool) 2127825751U))));
                            arr_53 [i_3] [i_10] [i_10] [i_11] [i_3] [i_14] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_41 [i_10 - 1] [i_10 + 1] [i_11 + 2] [i_12 + 2]), (((/* implicit */short) arr_6 [i_11 + 2]))))), (((((/* implicit */_Bool) arr_6 [i_11 - 1])) ? (((/* implicit */int) arr_6 [i_11 + 1])) : (((/* implicit */int) arr_36 [i_3] [i_12 + 1] [i_3 - 3]))))));
                            arr_54 [i_3] [i_3] [i_12] [i_3] [i_12] = ((_Bool) (~(((((/* implicit */_Bool) 1543843668654708119ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10235747378060886600ULL)))));
                        }
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)29347)))))));
        }
        for (unsigned short i_15 = 3; i_15 < 12; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_61 [(unsigned short)4] [i_15] [i_3 - 3]), (((/* implicit */short) ((arr_16 [i_3] [i_15 - 1] [i_16] [i_16]) == (((/* implicit */unsigned long long int) arr_2 [i_3 + 1] [i_3])))))))), (((((/* implicit */_Bool) ((arr_26 [i_16] [i_3]) ? (((/* implicit */int) arr_26 [i_15] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_16] [i_3]))))) ? (((arr_57 [i_3]) + (arr_39 [i_3] [i_3] [i_17]))) : (((/* implicit */unsigned long long int) (+(3646884995335522681LL))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 4) 
                        {
                            var_19 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_39 [i_17] [i_3] [i_3 - 1])) ? (arr_39 [i_17] [i_3] [i_3 - 2]) : (arr_39 [i_17] [i_3] [i_3 - 2]))) / (((((/* implicit */_Bool) arr_39 [i_18] [i_3] [i_3 - 1])) ? (arr_39 [i_18] [i_3 - 2] [i_3 - 2]) : (arr_39 [i_17] [0ULL] [i_3 - 2])))));
                            arr_67 [i_3] [i_15 + 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_3 + 1] [i_15]) == (arr_2 [i_3 + 1] [i_3 + 1]))))) != (max((arr_2 [i_3 + 1] [i_15]), (arr_2 [i_3 + 1] [i_15])))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_46 [i_3] [7LL] [i_3])), (arr_25 [i_3] [i_15] [i_3] [i_17] [(_Bool)1])))) ? (((((/* implicit */unsigned long long int) arr_62 [i_15 + 2] [i_15 + 2] [i_18])) | (arr_16 [i_3] [i_15 - 2] [i_16] [i_3]))) : (((((/* implicit */_Bool) arr_50 [i_18])) ? (((/* implicit */unsigned long long int) arr_47 [8LL] [i_15] [i_16] [i_17] [i_3])) : (arr_0 [i_3])))))) ? (((/* implicit */unsigned long long int) (((~(arr_58 [i_3] [i_3]))) ^ (((unsigned int) arr_13 [i_3] [i_15] [i_16]))))) : (((arr_12 [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (1651462707919613795ULL)))));
                        }
                        for (long long int i_19 = 1; i_19 < 12; i_19 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((arr_65 [i_3] [i_15] [i_15]) ? (((/* implicit */long long int) (-(((arr_65 [i_19 - 1] [i_15] [i_15]) ? (((/* implicit */int) arr_21 [i_17] [i_15])) : (((/* implicit */int) arr_35 [i_17] [i_16] [i_17]))))))) : (((long long int) arr_39 [i_17] [i_19 + 3] [i_3 - 1])))))));
                            arr_70 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_2 [i_3] [i_15 - 2]);
                        }
                    }
                } 
            } 
            arr_71 [i_3] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_3 - 3])) && (((/* implicit */_Bool) arr_50 [i_3]))))))));
        }
        for (unsigned short i_20 = 0; i_20 < 15; i_20 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) (+(arr_14 [i_3] [i_3] [i_3])))), (((long long int) arr_25 [i_3] [i_20] [i_20] [i_3] [i_20])))));
            arr_75 [i_3] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (unsigned short)35888)) ? (14102866671928218076ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_21 = 1; i_21 < 8; i_21 += 4) 
    {
        arr_78 [i_21] = ((/* implicit */unsigned long long int) arr_21 [i_21] [i_21 + 3]);
        arr_79 [i_21] = ((/* implicit */unsigned int) ((long long int) arr_26 [i_21 + 3] [i_21]));
        arr_80 [i_21] = ((/* implicit */unsigned short) ((long long int) ((arr_76 [i_21] [i_21]) > (((/* implicit */unsigned long long int) arr_46 [i_21] [i_21] [i_21])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_22 = 3; i_22 < 21; i_22 += 1) 
    {
        for (unsigned char i_23 = 0; i_23 < 23; i_23 += 4) 
        {
            {
                arr_86 [i_22] [i_22] = ((((/* implicit */_Bool) ((arr_81 [i_22 + 2]) % (arr_81 [i_22 + 1])))) ? ((+((+(arr_81 [i_22]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_23])) ? (((/* implicit */int) arr_83 [i_22] [i_22])) : (((/* implicit */int) arr_85 [i_22] [i_22] [i_22]))))))))));
                arr_87 [(short)2] [i_23] = ((/* implicit */unsigned short) ((unsigned long long int) max((arr_81 [i_22]), (((/* implicit */long long int) arr_83 [i_22] [13LL])))));
            }
        } 
    } 
}
