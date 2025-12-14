/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228606
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [(signed char)17] = ((((((740881396) ^ (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_1])) < (1075188152U)))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)47)) * (((/* implicit */int) (unsigned char)42))))) && (((/* implicit */_Bool) (unsigned char)0))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4 + 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (((-2147483647 - 1)) < ((-2147483647 - 1))))) : (((/* implicit */int) (unsigned short)19043)))) + (((/* implicit */int) ((((((/* implicit */int) (unsigned char)240)) <= ((-2147483647 - 1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2])) : (((/* implicit */int) (unsigned char)246))))))))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_0] [i_1] [i_1])) + (2147483647))) >> (((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) (unsigned char)26)))))));
                                arr_16 [i_0] [i_4 + 2] [i_4 + 2] [i_1] [i_1] = ((/* implicit */short) ((3940293576250652221ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)26336)) << (((((/* implicit */int) arr_0 [(unsigned char)8])) - (11))))) < (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_6 [i_1] [i_1]))))))))));
                                var_18 = ((/* implicit */int) ((((((((/* implicit */_Bool) (short)-12561)) ? (arr_13 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (short)-12561))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_23 [(unsigned char)17] [(unsigned char)17] [(unsigned char)17] [i_5] [i_1] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_0] [(short)11] [i_0])) + (2147483647))) >> (((arr_4 [(short)8]) - (8687124036850975780LL)))))) < (((26ULL) - (arr_21 [i_0] [(short)6]))))) ? (((/* implicit */int) (short)-3974)) : (((/* implicit */int) ((arr_21 [i_1] [i_2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [2ULL])) && (((/* implicit */_Bool) -2147483624)))))))))));
                                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-2)) + (2147483647))) >> (((5001979252389560887LL) - (5001979252389560865LL)))))) ? (arr_21 [(unsigned short)4] [i_5]) : (15ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_17 [i_1] [i_2] [i_0] [i_1])) * (28ULL)))) ? (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_5] [i_6])) - (((/* implicit */int) (signed char)99)))) : (((((/* implicit */int) (short)-3676)) / (((/* implicit */int) arr_5 [i_1])))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (8359772590891927444LL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-2083717162) + (2147483647))) >> (((((/* implicit */int) (signed char)-100)) + (122)))))) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_20 [i_1])))) : (((/* implicit */int) ((arr_2 [i_1]) <= (((/* implicit */int) arr_5 [i_1])))))));
                        arr_27 [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-16753)) % (((/* implicit */int) arr_25 [i_1 - 1] [i_7 - 1] [8LL] [i_1 - 1] [i_0] [i_0]))))) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) ((arr_17 [i_0] [(short)8] [i_2] [i_1]) < (((/* implicit */int) (signed char)-48)))))));
                        arr_28 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
                        arr_29 [i_0] [(signed char)10] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_6 [i_1] [(_Bool)0])))) ^ (((/* implicit */int) ((13464100471419010536ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))))))));
                        arr_30 [i_1] [10] [i_1] [i_1] [i_2] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-19)) ? (arr_21 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_2])))) + (((/* implicit */unsigned long long int) 994921157))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) / (var_9)))) ? (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 2556675536U)))))))) : (((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22020)) || (((/* implicit */_Bool) 2298987370U)))))))))));
    /* LoopNest 3 */
    for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (unsigned int i_10 = 1; i_10 < 8; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 2; i_12 < 8; i_12 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) max((var_22), (arr_0 [i_8])));
                                var_23 = ((/* implicit */int) 4534073666363443391ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 10; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_24 = ((-5303941689412262760LL) & (-2644276624199636159LL));
                                arr_50 [(unsigned char)0] [i_9] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_46 [i_8] [i_9] [i_8] [i_13 - 1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9] [i_8] [i_10 + 2]))) : (arr_13 [i_10]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_8] [i_8] [i_10] [i_8] [i_8] [i_10 + 2])) - (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_34 [i_8] [(unsigned char)6] [i_14])) < (((/* implicit */int) (unsigned char)227))))) >> (((/* implicit */int) ((2298987370U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_9])))))))))));
                                arr_51 [i_8] [i_8] [i_9] [i_10] [i_13] [i_14] = arr_0 [i_8];
                                var_25 = ((/* implicit */short) ((((/* implicit */int) arr_49 [i_8] [i_8] [i_10 - 1] [i_10 + 2] [i_13 - 1] [i_10 + 2] [i_14])) - (((/* implicit */int) ((arr_9 [i_9] [i_9] [i_13 - 1] [i_14]) != (((/* implicit */unsigned long long int) ((2298987376U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
