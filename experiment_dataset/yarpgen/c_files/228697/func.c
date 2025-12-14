/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228697
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_8 [(unsigned char)15] = ((/* implicit */short) (+(((((/* implicit */int) var_1)) ^ (min((((/* implicit */int) var_8)), (arr_5 [i_0] [(short)1] [i_0])))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_3 [(signed char)8] [i_2]);
                            var_16 ^= ((/* implicit */unsigned char) ((max(((!(((/* implicit */_Bool) 17407305966297055345ULL)))), ((!(((/* implicit */_Bool) (signed char)-36)))))) || (((((/* implicit */_Bool) arr_5 [i_1 + 4] [i_3 - 2] [(short)17])) && (((/* implicit */_Bool) arr_5 [i_1 + 2] [i_3 - 1] [i_0]))))));
                            var_17 = min((((/* implicit */short) arr_2 [(unsigned short)8] [(signed char)22] [i_2])), (max((((short) (signed char)-36)), (((/* implicit */short) arr_1 [i_0] [(short)16])))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_13 [(unsigned char)2] [i_5] [(short)0] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_7 [(short)15] [(unsigned char)12])))) ? (((((((/* implicit */int) var_0)) + (2147483647))) >> (((/* implicit */int) arr_1 [i_2] [(signed char)20])))) : (((((/* implicit */_Bool) arr_0 [(signed char)13])) ? (((/* implicit */int) arr_1 [i_2] [13])) : (((/* implicit */int) arr_3 [(short)17] [i_2]))))))) + (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) arr_3 [i_0] [(short)0]))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_3 - 1] [(short)6])) + (((/* implicit */int) (short)0)))))))));
                            arr_14 [i_5] [8ULL] [(short)3] [i_2] [i_1 - 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned char) arr_4 [18]))))) & ((~(((((/* implicit */_Bool) arr_10 [11U] [(unsigned char)8] [4] [5ULL] [i_5] [i_5])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            arr_15 [i_0] [i_1 + 3] [i_5] [i_3 - 1] [12U] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_10 [(short)22] [(unsigned char)8] [i_1 + 3] [i_1 + 4] [i_1 - 2] [i_1 + 2])) - (94))))) << (((((((/* implicit */int) var_1)) + (31432))) - (17)))));
                            arr_16 [(unsigned char)17] [i_5] = var_5;
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned char) ((unsigned short) ((((/* implicit */int) arr_9 [0] [(short)6])) | (((/* implicit */int) var_1)))))))));
                        }
                        arr_17 [(short)3] [22] [i_2] = ((/* implicit */signed char) var_14);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) ((unsigned char) min((arr_9 [(unsigned short)8] [(unsigned short)4]), (arr_9 [6U] [i_0]))));
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_20 = ((/* implicit */short) (((((-(((/* implicit */int) (signed char)8)))) + (2147483647))) >> (((min((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))))), (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned char) arr_19 [(short)8] [i_6]))))))) - (58ULL)))));
        var_21 *= ((/* implicit */short) arr_19 [i_6] [(short)2]);
    }
    var_22 = ((/* implicit */int) min(((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (short)-3851)))))))));
}
