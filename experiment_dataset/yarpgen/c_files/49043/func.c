/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49043
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [2] [i_0] = arr_0 [i_0];
        var_11 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */long long int) var_3)) ^ (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    var_13 &= ((/* implicit */int) arr_3 [i_0]);
                    var_14 = ((/* implicit */unsigned short) var_10);
                    /* LoopSeq 2 */
                    for (signed char i_4 = 4; i_4 < 9; i_4 += 3) 
                    {
                        var_15 ^= ((/* implicit */unsigned short) ((arr_10 [i_4 + 1] [i_3 + 1] [i_1] [i_1] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_7 [i_2]))))))));
                        arr_15 [i_3] [i_3 + 1] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */signed char) ((var_0) >> (((var_10) + (1380622404)))));
                        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) var_3)) != (arr_4 [i_4 + 1])))) * (((/* implicit */int) arr_9 [6] [i_3 + 1] [i_3] [i_3 - 1] [i_2] [i_0]))));
                        var_17 = ((/* implicit */int) ((((arr_0 [1U]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (((arr_11 [i_0] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    }
                    for (signed char i_5 = 4; i_5 < 11; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) >> (((((/* implicit */int) arr_1 [i_2])) - (73))))))));
                        arr_18 [i_3] = ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_3]) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [4U] [i_2] [4U] [i_3] [4U] [i_0])) + (((/* implicit */int) arr_12 [i_3] [i_1] [i_1] [i_1])))))));
                        var_19 = ((/* implicit */signed char) ((((arr_0 [i_0]) << (((((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3])) - (25))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 1])))));
                        var_20 = ((/* implicit */_Bool) ((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]) & (arr_17 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]))) ^ (((((/* implicit */int) arr_5 [i_5 - 3] [i_1] [i_0])) & (((/* implicit */int) arr_9 [(unsigned char)9] [i_0] [i_0] [i_2] [i_3] [i_3]))))));
                        var_21 = ((/* implicit */unsigned short) var_2);
                    }
                    var_22 = ((/* implicit */long long int) ((arr_10 [i_0] [i_1] [i_3] [i_3] [i_0]) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [i_3 + 1])) - (((/* implicit */int) arr_12 [i_3] [i_1] [i_3] [i_1])))))));
                }
                for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 2; i_7 < 11; i_7 += 3) 
                    {
                        arr_24 [i_7] [i_7] [i_7] [i_6 + 1] = ((/* implicit */long long int) (!(((((/* implicit */int) var_8)) >= (var_1)))));
                        var_23 = ((/* implicit */long long int) ((arr_23 [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_7 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 + 1])))));
                    }
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_24 = (+(var_1));
                        arr_27 [i_0] [i_0] [5U] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_4))))) + (((/* implicit */int) var_2))));
                        arr_28 [i_2] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_6 + 1])) ^ (((/* implicit */int) arr_1 [i_6 + 1]))));
                    }
                    arr_29 [i_0] [8U] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((var_10) <= (var_1)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_32 [i_9] = ((/* implicit */unsigned short) ((var_1) * (((/* implicit */int) ((((/* implicit */int) arr_22 [i_9] [(_Bool)1] [i_0] [i_1] [i_0] [i_0])) <= (((/* implicit */int) var_9)))))));
                        arr_33 [i_9] [i_9] [4U] [i_9] [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) (-2147483647 - 1))) & (-45389724854097268LL))) <= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27181))) - (-6290076896272605944LL)))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_2] [i_6] [i_6 + 1] [i_6] [i_6] [i_6 + 1]))));
                }
                for (long long int i_10 = 1; i_10 < 10; i_10 += 4) 
                {
                    arr_36 [i_0] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)2020))));
                    var_26 = ((arr_23 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_1]) - (arr_23 [i_10 - 1] [i_10] [i_10 + 1] [i_10 - 1] [i_10]));
                    arr_37 [i_0] [i_1] [i_2] [i_10] = ((/* implicit */unsigned int) (((-(arr_11 [i_0] [i_10]))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (arr_11 [i_10] [i_10])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        arr_40 [i_11] [i_10] [i_2] [i_10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_6 [i_11])))))) & (arr_3 [i_10 + 1])));
                        var_27 ^= ((((/* implicit */int) arr_9 [i_0] [i_10 + 2] [i_10 + 2] [i_10] [i_11] [i_0])) != (((/* implicit */int) arr_9 [i_11] [i_10 + 2] [i_2] [i_10] [i_11] [i_2])));
                    }
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0])))))));
                }
                var_29 = ((/* implicit */int) min((var_29), ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (arr_3 [i_2]))))))));
                /* LoopSeq 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_30 += ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_23 [i_12] [i_2] [i_1] [i_1] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_1])) <= (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_49 [i_0] [i_0] = (((-(var_3))) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_2] [i_12] [i_13]))))))));
                        var_31 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_45 [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13 - 1])) / (((274609471488LL) - (((/* implicit */long long int) 2147483647))))));
                        var_32 = ((/* implicit */short) (((-(((/* implicit */int) (short)2992)))) <= (((arr_48 [i_13] [i_12] [1ULL] [i_2] [i_1] [i_0]) - (((/* implicit */int) arr_34 [i_0] [i_0] [i_1] [i_0] [i_12 - 1] [i_0]))))));
                        var_33 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)5812)))) * (((((/* implicit */int) (signed char)-33)) ^ (((/* implicit */int) (signed char)-16))))));
                    }
                    for (unsigned short i_14 = 1; i_14 < 11; i_14 += 1) 
                    {
                        arr_53 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((arr_42 [i_14 - 1]) - (((/* implicit */unsigned long long int) var_1))));
                        var_34 = ((/* implicit */unsigned short) ((arr_23 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1]) >> (((arr_23 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]) - (4160926831U)))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_35 ^= ((/* implicit */short) ((arr_21 [i_12 - 1] [i_1] [i_12 - 1] [8U] [i_15] [i_0]) > (((/* implicit */unsigned long long int) arr_23 [i_12 - 1] [i_2] [i_2] [i_12 - 1] [i_15]))));
                        arr_56 [i_0] [i_15] [i_1] = ((/* implicit */int) arr_34 [i_0] [i_0] [i_2] [i_0] [i_15] [i_0]);
                    }
                    for (int i_16 = 2; i_16 < 9; i_16 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [6] [i_12 - 1] [i_2] [i_0] [i_0])) / (((/* implicit */int) arr_13 [i_16] [i_16] [i_16 - 2] [5U] [i_16 - 1] [i_16 + 3] [i_12 - 1]))));
                        var_37 = ((/* implicit */unsigned short) ((var_0) << (((((arr_54 [i_12] [i_16 + 2] [i_12] [i_12 - 1] [i_2] [i_1] [i_0]) + (((/* implicit */int) var_9)))) - (18624956)))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        var_38 ^= ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_31 [i_0] [i_1] [i_2] [i_12] [i_17])))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))))));
                        var_39 ^= ((/* implicit */unsigned int) (+(arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_0] [i_18] [i_2] [i_2] [i_18] [i_2] [i_12 - 1])) && (((/* implicit */_Bool) var_4))));
                        arr_66 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0] [i_12 - 1] [i_12 - 1] [i_18] [i_18] [i_12 - 1])) & ((-(var_10)))));
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((arr_47 [8U] [i_12 - 1] [i_2] [i_12] [8U] [i_0]) + (9223372036854775807LL))) << (((((((arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (var_10))) + (5))) - (2))))))));
                        var_42 = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (short)-21198))));
                        arr_67 [i_0] [i_1] [i_2] [i_2] [i_18] = ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                    }
                    for (unsigned short i_19 = 1; i_19 < 10; i_19 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) | (((/* implicit */int) arr_31 [i_0] [i_1] [i_2] [2LL] [i_19 + 1])))) - (arr_62 [i_1] [i_19] [i_2] [i_12 - 1] [i_19] [i_0])));
                        arr_71 [(signed char)7] [i_1] [i_1] [(signed char)7] [i_1] [i_1] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_43 [i_19 + 1] [2] [i_12 - 1] [i_19 + 1]))));
                        arr_72 [i_19] [i_0] [(_Bool)1] [(unsigned short)10] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) ^ (((2142457227) & (((/* implicit */int) (unsigned short)63507))))));
                        arr_73 [i_0] [i_0] [i_2] [i_0] [i_19 + 1] = ((/* implicit */unsigned char) ((((var_3) / (((/* implicit */unsigned int) arr_45 [i_0] [i_0] [i_0] [i_12] [i_19])))) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        var_44 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (((arr_42 [i_12]) & (((/* implicit */unsigned long long int) var_3))))));
                    }
                }
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    var_45 &= ((/* implicit */long long int) (+(arr_23 [i_0] [i_1] [i_2] [i_2] [i_1])));
                    arr_77 [7ULL] [i_1] [i_0] [i_0] [i_20] = ((((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) + (((((/* implicit */int) arr_14 [i_0] [i_0] [i_2])) - (((/* implicit */int) arr_43 [i_20] [i_2] [i_1] [i_0])))));
                }
                var_46 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            }
            for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                var_47 = ((/* implicit */int) (-(arr_64 [i_0] [i_0])));
                arr_80 [i_21] [i_21] = ((/* implicit */signed char) ((((((/* implicit */long long int) 786432U)) ^ ((-9223372036854775807LL - 1LL)))) ^ (((((/* implicit */long long int) arr_70 [i_0])) ^ (arr_6 [i_1])))));
            }
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_83 [i_22] [i_22] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) ((var_5) == (var_3))))));
            arr_84 [(_Bool)1] [1U] = ((/* implicit */unsigned short) var_6);
            var_48 = ((arr_8 [i_0] [i_22]) && (arr_8 [i_22] [i_0]));
            var_49 = ((/* implicit */int) ((arr_11 [i_0] [i_0]) & (((/* implicit */long long int) var_1))));
            var_50 = ((/* implicit */long long int) ((arr_60 [i_22] [i_22] [i_22] [i_22] [i_0]) != (arr_60 [i_0] [i_22] [i_0] [i_22] [i_22])));
        }
        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
        {
            arr_87 [i_23 + 1] = ((/* implicit */unsigned int) ((arr_6 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_10)) > (arr_70 [i_0])))))));
            arr_88 [i_23] [(signed char)11] [i_23 + 1] = ((((/* implicit */int) (short)-27077)) != (((/* implicit */int) (signed char)28)));
        }
    }
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_5)) - (var_6)));
    /* LoopSeq 1 */
    for (unsigned short i_24 = 0; i_24 < 17; i_24 += 4) 
    {
        arr_93 [i_24] [i_24] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_90 [i_24])))))) != (var_3)))) & (((((/* implicit */int) var_8)) * (((var_10) / (var_1))))));
        arr_94 [i_24] = (!(((/* implicit */_Bool) (-(min((arr_89 [i_24] [i_24]), (((/* implicit */unsigned long long int) arr_91 [i_24] [i_24]))))))));
        arr_95 [i_24] = ((/* implicit */unsigned short) ((((max((arr_89 [i_24] [i_24]), (((/* implicit */unsigned long long int) arr_90 [i_24])))) ^ (((/* implicit */unsigned long long int) ((((-1268744990) + (2147483647))) << (((/* implicit */int) (_Bool)1))))))) + (max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (arr_89 [i_24] [i_24])))))));
    }
}
