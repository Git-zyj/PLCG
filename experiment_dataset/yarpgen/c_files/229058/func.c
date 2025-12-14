/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229058
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 |= ((/* implicit */_Bool) max((((/* implicit */short) (!(((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_1]))))))), (max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2])))));
                arr_4 [i_1 - 1] [i_0] [i_0] |= ((/* implicit */signed char) ((((arr_2 [i_0] [i_1 + 1] [i_1 - 1]) == (arr_2 [i_0] [i_1 + 1] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2] [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (-7484274265225947401LL)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)))))));
                var_11 |= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_0]);
                arr_5 [i_1] = ((/* implicit */long long int) (short)-19902);
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_1);
    /* LoopSeq 3 */
    for (int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) (signed char)-21);
        var_13 ^= ((/* implicit */_Bool) var_1);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    arr_15 [i_4] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (max((max((arr_14 [i_2 + 2]), (arr_10 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) var_3)) : (arr_11 [i_3] [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_4])))));
                    arr_16 [i_3] [i_2] = ((/* implicit */unsigned short) arr_12 [(short)3] [i_2]);
                    arr_17 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_14 [i_2]);
                    arr_18 [i_4] [i_4] [i_3] [i_4] |= ((/* implicit */_Bool) (signed char)-6);
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 20; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (int i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    {
                        arr_32 [i_5] = ((/* implicit */unsigned int) max((arr_29 [i_5] [i_5] [(unsigned short)10] [i_5]), (((/* implicit */int) arr_31 [i_5] [i_8 + 1] [i_7] [i_6 - 1]))));
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) var_1)) / (arr_29 [i_8] [i_8] [i_8 - 1] [i_8]))))));
                        var_15 ^= ((/* implicit */short) max((((/* implicit */long long int) ((_Bool) arr_28 [i_5] [(unsigned short)6] [(unsigned short)6] [i_5]))), (arr_19 [(signed char)1])));
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */unsigned long long int) arr_29 [i_5] [i_5] [i_5] [i_5]);
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            var_17 -= ((/* implicit */signed char) arr_6 [i_9]);
            /* LoopNest 3 */
            for (unsigned int i_10 = 3; i_10 < 19; i_10 += 1) 
            {
                for (long long int i_11 = 2; i_11 < 17; i_11 += 3) 
                {
                    for (unsigned short i_12 = 2; i_12 < 20; i_12 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19901)) / (((/* implicit */int) arr_21 [i_10 + 2] [i_11 + 1]))))) ? (((/* implicit */int) arr_39 [i_9] [i_9] [(short)20] [i_11])) : (((((/* implicit */_Bool) arr_22 [i_10 - 3] [i_10 + 2] [i_10 - 1])) ? (((/* implicit */int) arr_22 [i_10 - 2] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) arr_22 [i_10 + 1] [i_10 - 2] [i_10 - 3])))))))));
                            arr_42 [i_5] [(_Bool)1] [i_10] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)2)), (arr_33 [i_10 + 2])))) ? (((/* implicit */int) arr_36 [i_5] [i_9] [(_Bool)1] [i_12 - 1])) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_11 [i_5] [i_9])))) ? (arr_27 [i_10 - 2] [i_10 - 3]) : (((/* implicit */int) (short)19907))))));
                        }
                    } 
                } 
            } 
            arr_43 [i_5] [i_5] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_29 [i_9] [(unsigned short)5] [i_5] [(unsigned short)5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))));
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_1))));
                            arr_51 [i_5] [i_9] [i_14] [i_14] = ((/* implicit */int) (_Bool)1);
                            arr_52 [16LL] [16LL] [i_13] [i_5] [i_14] [i_14] [16LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_5] [i_9] [i_13] [i_14] [i_15])) ? (((/* implicit */int) arr_46 [i_9] [i_9])) : (((/* implicit */int) (signed char)-76))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_16 = 2; i_16 < 18; i_16 += 3) 
        {
            var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22034)) ? (((/* implicit */int) arr_7 [4U] [4U])) : (((/* implicit */int) var_7))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_49 [i_5] [i_16] [i_16] [i_16 + 2] [i_5] [i_16])) ? (arr_47 [i_16 - 2] [i_5]) : (((/* implicit */long long int) 206888289))));
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                arr_58 [i_5] [i_5] [(signed char)6] [i_5] &= ((/* implicit */unsigned short) ((signed char) arr_28 [i_16] [(unsigned short)12] [i_17] [8LL]));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned int i_19 = 3; i_19 < 20; i_19 += 3) 
                    {
                        {
                            arr_64 [i_19] [i_5] [i_17] [i_16] [i_5] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_26 [9ULL] [i_5] [i_5] [i_19]) + (2147483647))) << (((7484274265225947401LL) - (7484274265225947401LL)))))) && ((!(((/* implicit */_Bool) (short)32767))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((arr_26 [9ULL] [i_5] [i_5] [i_19]) - (2147483647))) + (2147483647))) << (((7484274265225947401LL) - (7484274265225947401LL)))))) && ((!(((/* implicit */_Bool) (short)32767)))))));
                            arr_65 [i_5] [i_16] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (signed char)-31))));
                            arr_66 [i_5] [i_5] [i_5] [i_17] [i_18] [i_5] [i_19] = ((-634139777421039498LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22596))));
                            var_22 = ((/* implicit */unsigned long long int) (-(arr_53 [i_17])));
                        }
                    } 
                } 
                arr_67 [i_5] = ((/* implicit */short) (-(arr_8 [i_5] [i_16 + 3])));
                /* LoopNest 2 */
                for (signed char i_20 = 3; i_20 < 20; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_56 [i_16 + 2] [i_17] [i_20 + 1])) ? (7972163937791327982LL) : (arr_56 [i_16 - 2] [i_16] [i_20 + 1])));
                            var_24 = ((/* implicit */signed char) arr_62 [i_5] [i_16 - 1] [i_17] [i_17] [i_20] [i_21]);
                            arr_74 [i_5] [i_16] [i_20 + 1] [i_20 + 1] [i_21] [i_20 + 1] [i_5] = ((/* implicit */_Bool) (-(((var_6) ? (((/* implicit */unsigned long long int) var_2)) : (14124630690852014687ULL)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_16] [i_16] [i_16 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_44 [i_5] [i_5] [i_16 - 2]))));
            }
            var_26 = ((arr_40 [i_5] [i_16 + 3] [i_16 + 2] [i_16] [i_16 - 2]) | (((/* implicit */unsigned long long int) 447139893)));
            /* LoopNest 2 */
            for (short i_22 = 1; i_22 < 19; i_22 += 1) 
            {
                for (unsigned int i_23 = 3; i_23 < 20; i_23 += 4) 
                {
                    {
                        arr_79 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) var_5);
                        arr_80 [(unsigned short)10] [i_16 - 2] [i_16] [(signed char)2] [i_23] [(signed char)10] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_14 [i_23 - 2])))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_16 - 1] [i_5])) ? (arr_69 [i_23 - 3] [i_22 + 1] [i_16] [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-60)) & (((/* implicit */int) (signed char)75)))))));
                        var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11868)) ? (((((arr_37 [i_5] [i_5] [12ULL] [(unsigned short)18]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_54 [(unsigned char)16])) - (49465))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 20; i_24 += 1) 
    {
        arr_83 [i_24] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((+(arr_57 [i_24] [i_24] [0] [i_24]))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (((unsigned long long int) (_Bool)1))));
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32756)) / (((/* implicit */int) var_9))))) ? (arr_56 [i_24] [i_24] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_24] [i_24] [i_24] [i_24]))))))));
        var_31 = (short)0;
    }
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (short)-1))));
}
