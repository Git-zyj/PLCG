/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221261
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) : (0LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (var_0)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1]) | (arr_1 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) != (arr_1 [i_0]))))) + (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (arr_2 [9U] [9U]) : (arr_2 [i_0 + 1] [i_0 + 1])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65526)) << (((1576930202U) - (1576930195U)))))) ? (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-13068)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(unsigned short)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)20]))) : (arr_2 [(unsigned char)22] [i_1]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))))));
            var_12 = ((/* implicit */short) ((arr_3 [i_0]) ? (((/* implicit */int) ((arr_2 [i_0 - 1] [i_0]) < (((arr_3 [(unsigned short)17]) ? (arr_2 [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))))) : (((/* implicit */int) arr_0 [(unsigned char)19]))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)21])) ? (((/* implicit */int) arr_6 [10ULL])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)3])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 4; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */_Bool) arr_5 [i_2 + 1]);
                        var_14 = ((/* implicit */int) ((((/* implicit */int) arr_11 [(signed char)3] [(unsigned char)19] [i_1] [i_0])) < (((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 2] [2]))));
                    }
                    for (unsigned int i_5 = 4; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_5 - 2] [i_5] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_8 [i_5] [i_3] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_8 [17] [9LL] [i_2 + 1] [i_2]))));
                        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_14 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 2] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))));
                    }
                    arr_18 [i_0 + 1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1826455709)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105))) : (8U)));
                    var_17 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_2 + 1] [i_3])) - (((/* implicit */int) arr_6 [i_3])))) - (((/* implicit */int) arr_6 [i_1]))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)9] [i_0 + 1] [22U] [i_0])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [15U]))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)10] [(unsigned short)10])) : (arr_5 [i_1])));
                    var_19 = ((/* implicit */unsigned char) arr_16 [i_0 + 1] [i_0 + 1] [17ULL] [i_3 - 2]);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_21 [(unsigned short)10] [i_1] [i_1] [i_6] [3U] = ((/* implicit */unsigned long long int) ((arr_5 [i_0 + 1]) / (arr_5 [i_0 + 1])));
                    arr_22 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_6] [i_2] [(unsigned char)17] [i_1] [6ULL]) + (((/* implicit */int) arr_9 [4] [i_0 - 1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) arr_11 [i_6] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_17 [(unsigned short)14] [i_2]))))) : (((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1])) ? (arr_2 [(signed char)3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [7ULL])))))));
                }
                arr_23 [7ULL] [i_2] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) arr_12 [12ULL] [i_0 + 1] [i_0 - 1] [i_1] [i_1] [i_2]);
            }
            for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_20 [i_0 - 1] [i_7] [i_7 + 1] [i_1]))))) ? (((((/* implicit */int) arr_20 [i_0] [i_7] [i_1] [i_7])) * (((/* implicit */int) arr_0 [i_7 + 3])))) : (((/* implicit */int) arr_20 [(_Bool)1] [i_7] [i_7] [i_1]))));
                var_21 ^= ((((((/* implicit */_Bool) 15973972378950067500ULL)) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56429))) : (2718037094U))) : (((((/* implicit */_Bool) (short)-27880)) ? (2718037077U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18863))))))) / (((/* implicit */unsigned int) ((((arr_13 [i_7 + 1] [21] [i_0] [(signed char)20] [i_0]) / (((/* implicit */int) arr_20 [12U] [i_7] [i_1] [i_7])))) * (((((/* implicit */_Bool) arr_25 [4ULL] [(unsigned short)22] [(signed char)22])) ? (((/* implicit */int) arr_6 [i_7])) : (((/* implicit */int) arr_8 [(unsigned char)14] [i_0] [i_1] [i_7]))))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (short)17109)) : (((/* implicit */int) (unsigned short)11462))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [(short)14] [i_0 + 1] [16ULL] [i_0 + 1] [i_7] [i_7 - 2])) > (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_7 + 1] [i_7 - 2]))))) : (((/* implicit */int) arr_12 [22U] [i_0 - 1] [i_1] [i_7] [6ULL] [i_7 + 1])))))));
                var_23 *= ((((/* implicit */_Bool) arr_8 [i_7] [(unsigned short)12] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) == (((3941712412814364869ULL) >> (((((/* implicit */int) (unsigned char)149)) - (98))))))))) : (12233989435414955752ULL));
            }
        }
        for (signed char i_8 = 2; i_8 < 19; i_8 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_8 + 3])) && (((/* implicit */_Bool) arr_6 [i_8 + 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(_Bool)1] [i_8])) ? (((/* implicit */int) arr_25 [(_Bool)1] [i_8] [4U])) : (((/* implicit */int) arr_27 [i_8 + 3] [i_8] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 1] [i_8] [15ULL])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_8] [i_0])) : (((/* implicit */int) arr_27 [i_8 + 2] [i_8] [i_8])))) : (((arr_13 [i_0] [i_0] [(unsigned char)9] [(signed char)2] [2]) % (((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_8] [7ULL] [(_Bool)1])))))) : (((/* implicit */int) arr_20 [i_0 + 1] [i_8] [i_0] [22ULL])))))));
            arr_28 [(signed char)8] [i_8] = ((/* implicit */unsigned short) arr_27 [8] [i_0] [i_8]);
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_32 [i_0] [i_0] [(signed char)4] [i_0] [16ULL] [i_0]) ? (((/* implicit */int) arr_38 [i_0])) : (((/* implicit */int) ((arr_2 [(signed char)4] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1]))))))))) && (((/* implicit */_Bool) arr_26 [(signed char)7] [i_8] [i_9 - 1]))));
                            arr_39 [(unsigned char)4] [i_11] [i_0 - 1] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [(_Bool)1])) ? (((/* implicit */int) arr_37 [i_0] [i_8] [i_0] [(short)17] [i_11])) : (((/* implicit */int) arr_16 [(_Bool)1] [i_8 - 2] [(short)5] [(_Bool)1]))))) ? (arr_13 [i_8] [i_9 + 1] [18U] [(signed char)13] [i_9 + 1]) : (((/* implicit */int) arr_30 [i_8 - 2] [i_10] [i_11]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_8] [i_9 + 1] [i_8])) ? (((/* implicit */int) arr_0 [i_9 - 1])) : (((/* implicit */int) arr_37 [(unsigned char)13] [i_9] [6U] [i_9 + 1] [(signed char)22]))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9] [i_9 - 1])) ? (arr_29 [i_9] [i_9 + 1]) : (arr_29 [(unsigned char)4] [i_9 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) -1)) : (2472771694759484115ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [(short)0] [i_9] [(short)4]))))))));
            }
            for (signed char i_12 = 3; i_12 < 22; i_12 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-6120)) + (2147483647))) >> (((9223372036854775806LL) - (9223372036854775793LL)))))) ? (((arr_12 [i_0] [i_0] [i_0] [(signed char)2] [i_8] [(unsigned char)5]) ? (arr_14 [i_0] [(signed char)12] [(unsigned short)9] [i_8 + 4] [i_12 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [(unsigned char)21] [i_8] [i_8] [i_8] [i_12]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [17] [17U] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_12 - 2])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_10 [(unsigned char)10] [16ULL] [i_12 - 3]) : (((((/* implicit */_Bool) arr_11 [(signed char)10] [i_8 + 4] [i_8 - 1] [i_12 - 1])) ? (arr_10 [i_0 - 1] [i_8] [i_12 + 1]) : (((/* implicit */int) arr_25 [i_0] [i_8] [i_12]))))))) : (((arr_40 [i_8 + 4] [i_12 - 2] [i_0 - 1] [i_12]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 3318464935U)) == (-1LL)))))))))));
                var_28 += arr_20 [i_12] [i_8] [i_8] [i_12];
            }
        }
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((arr_3 [i_0 + 1]) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1])))))));
            var_30 = ((/* implicit */signed char) ((arr_32 [i_0 + 1] [(unsigned short)14] [i_13] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [11U] [i_0 - 1])) == (((/* implicit */int) arr_11 [(unsigned short)13] [(unsigned short)13] [i_0] [(unsigned short)13]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [11U] [(unsigned char)7] [i_13] [i_0])) || (((/* implicit */_Bool) arr_42 [i_13])))))));
        }
        var_31 = ((/* implicit */short) ((((9223372036854775791LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) 1576930215U)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) arr_3 [i_0]))))))) / (((((/* implicit */_Bool) (unsigned short)50356)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27748)) ? (2718037095U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (776767057791376197LL)))));
        arr_45 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_25 [i_0 + 1] [4U] [i_0 - 1])) : (((/* implicit */int) arr_25 [i_0] [i_0 - 1] [i_0 - 1]))))) ? (arr_13 [i_0] [i_0] [0U] [i_0] [(short)22]) : (((/* implicit */int) arr_36 [(short)21] [i_0 - 1] [i_0] [(short)21]))));
    }
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
}
