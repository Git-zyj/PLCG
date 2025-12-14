/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218145
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (signed char)24)), (2491996239U))), (((/* implicit */unsigned int) var_6))))) && (((/* implicit */_Bool) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_16 = ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 1])) ? (31457280) : (((((/* implicit */_Bool) 11207400875131952460ULL)) ? (((/* implicit */int) (unsigned short)9464)) : (((/* implicit */int) (unsigned short)9464)))));
            var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [12ULL] [12] [i_0 + 2])), (var_4)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (1073741824U) : (((/* implicit */unsigned int) -31457277)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [(unsigned short)9])) : (((/* implicit */int) arr_3 [13] [5])))))))) ? (((((/* implicit */int) arr_2 [i_0 - 2])) % (((/* implicit */int) arr_2 [i_0 + 2])))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (647419316050062393ULL)))))));
            arr_5 [i_0 - 2] [i_1] [(signed char)3] = ((/* implicit */unsigned short) ((signed char) max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_3 [1] [i_1])))));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1])))))));
        }
        for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            arr_11 [i_0 - 2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) 0))) : (((((/* implicit */_Bool) (short)-6718)) ? (((/* implicit */int) arr_0 [i_0] [2ULL])) : (((/* implicit */int) arr_3 [i_2] [i_0 - 1]))))))), ((+(arr_8 [i_2 - 2] [i_0 - 3])))));
            arr_12 [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_0 + 2])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_0 + 2]))))) ? (((/* implicit */int) min((arr_3 [i_2 - 1] [i_0 + 1]), (arr_3 [i_2 + 1] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_3 [i_2 - 2] [i_0 + 2]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned short) arr_14 [i_0 - 2] [i_0 - 2] [i_3])), (max((((/* implicit */unsigned short) var_13)), ((unsigned short)65535)))))))));
            var_19 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_13 [(signed char)6] [8] [i_3])))) ? (((/* implicit */int) arr_2 [i_3])) : (((((/* implicit */_Bool) arr_13 [10] [i_3] [10])) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) arr_10 [i_0 - 2]))))));
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(332825922))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (18446744073709551615ULL) : (arr_9 [(unsigned char)3] [8])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_9 [i_0] [i_0]) : (arr_7 [2ULL] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_3])) != (((/* implicit */int) (signed char)127))))))))))));
            /* LoopSeq 4 */
            for (long long int i_4 = 3; i_4 < 11; i_4 += 3) 
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((367578484U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) : (((((/* implicit */_Bool) (unsigned short)65513)) ? (((/* implicit */unsigned long long int) 650326313)) : (arr_8 [2] [i_3]))))))))));
                var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_17 [i_4] [2ULL] [i_4 - 2] [i_4 + 2]), (arr_17 [i_4 - 1] [(unsigned short)10] [i_4 + 3] [i_4 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0 - 1] [(unsigned short)12] [(unsigned short)12] [i_0 - 1])) != (((((/* implicit */int) (short)23530)) | (((/* implicit */int) (signed char)-101)))))))) : ((~(((((/* implicit */_Bool) arr_3 [i_4] [i_4])) ? (arr_9 [i_0 - 3] [i_0 - 3]) : (arr_9 [i_0] [(unsigned short)0])))))));
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3]))))))));
                var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 - 3])) && (((/* implicit */_Bool) var_14))));
                var_26 = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_5] [i_3] [i_0 - 3])) ^ (((/* implicit */int) arr_15 [i_0 + 1] [i_3]))));
                var_27 = ((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_0 - 1] [i_3] [i_0]));
                arr_20 [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))));
            }
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-114)))));
                arr_25 [i_3] [0] [i_3] [i_6] = ((/* implicit */unsigned long long int) arr_19 [i_6] [i_3] [(signed char)2] [i_0 - 3]);
                arr_26 [i_0 + 1] [i_3] [i_0 + 1] [(short)9] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_17 [i_0 - 1] [i_3] [i_0 - 1] [i_0 + 2])) + (((((/* implicit */int) (signed char)120)) & (((/* implicit */int) arr_15 [i_0] [13ULL]))))))));
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -650326313)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32))) : (9304760201562486643ULL)));
                var_30 = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) % (arr_9 [i_3] [i_7]))))))) >> (((((((/* implicit */_Bool) arr_30 [i_7] [i_3])) ? (((/* implicit */unsigned long long int) max((arr_30 [i_3] [i_3]), (((/* implicit */unsigned int) arr_17 [i_3] [i_3] [i_3] [i_0]))))) : (((((/* implicit */_Bool) arr_30 [i_0] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) arr_30 [(unsigned short)2] [i_3])))))) - (4150339960ULL)))))) : (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) % (arr_9 [i_3] [i_7]))))))) >> (((((((((/* implicit */_Bool) arr_30 [i_7] [i_3])) ? (((/* implicit */unsigned long long int) max((arr_30 [i_3] [i_3]), (((/* implicit */unsigned int) arr_17 [i_3] [i_3] [i_3] [i_0]))))) : (((((/* implicit */_Bool) arr_30 [i_0] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) arr_30 [(unsigned short)2] [i_3])))))) - (4150339960ULL))) - (144627196ULL))))));
            }
        }
        var_31 *= ((((((/* implicit */unsigned long long int) ((arr_13 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) / (min((arr_28 [i_0] [4ULL]), (((/* implicit */unsigned long long int) var_5)))))) / (((((/* implicit */_Bool) ((-1915699866) / (((/* implicit */int) (unsigned char)51))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_29 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
    }
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            arr_35 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [12] [i_9])) ? (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (unsigned short)31941)) : (((/* implicit */int) (unsigned char)50)))) : (((/* implicit */int) arr_31 [i_8]))));
            var_32 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1431406096U)) ? (arr_29 [3] [i_8] [i_8] [i_8]) : (var_8)))) ? (arr_30 [i_8] [i_9]) : (((((/* implicit */_Bool) arr_3 [(signed char)1] [(unsigned char)3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_5))))), (max((arr_30 [i_9] [i_9]), (((/* implicit */unsigned int) arr_21 [i_9]))))));
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_13 [i_9] [i_9] [i_9])), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (min((arr_8 [i_9] [4]), (((/* implicit */unsigned long long int) (unsigned char)4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)252)), (arr_1 [i_9]))))))))))));
        }
        arr_36 [i_8] = ((/* implicit */short) ((((((int) (~(((/* implicit */int) (unsigned char)231))))) + (2147483647))) << (((((((int) (-(var_11)))) + (1536694126))) - (12)))));
    }
    var_34 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) -634903275)), (11ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned long long int) 1073479680)))))))))));
}
