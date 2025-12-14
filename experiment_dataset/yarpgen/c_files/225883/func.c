/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225883
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
    var_16 &= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((var_7) <= (var_7)))) != (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_0))))))) & (((((/* implicit */_Bool) var_4)) ? (((var_7) / (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [10])))) < (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))))) : (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [1LL])))))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_18 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned short)10] [i_1])) >= (arr_7 [i_2] [(short)10] [i_2] [i_2])))) : (((/* implicit */int) ((arr_5 [(unsigned short)4] [i_2 + 1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (arr_7 [i_3] [i_0] [i_1] [i_0]) : (((/* implicit */int) arr_2 [i_1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_1 [4])) ? (((/* implicit */int) arr_2 [9ULL] [i_1] [9ULL])) : (((/* implicit */int) arr_1 [i_0])))) : (((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_2] [(signed char)2] [i_1] [(unsigned short)3])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [(short)17] [(_Bool)1]))) : (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [(short)8] [i_0] [i_0])) || (arr_3 [i_1] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_3]))))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_3] [i_0])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 - 2])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (arr_7 [i_0] [(_Bool)1] [i_0] [i_0]))) + (20928)))))) ? (arr_7 [i_0] [i_2] [i_2] [(unsigned short)18]) : (((/* implicit */int) arr_8 [(short)12] [i_3] [i_2 + 1] [i_2 + 1] [i_2 + 1] [(short)20]))));
                    }
                } 
            } 
        } 
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(_Bool)1])) / (((/* implicit */int) arr_2 [i_0] [i_0] [19]))))) ? (((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (signed char)-43)) : (2147483647))) : ((((_Bool)1) ? (2147483647) : (((/* implicit */int) (signed char)58))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [(unsigned short)15]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [20LL] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [13ULL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [15] [i_0]))) : (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [15LL] [i_0])) < (arr_5 [i_0] [i_0] [i_0])))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) arr_1 [i_0])) : ((((_Bool)1) ? (2147483647) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((4294967292U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [i_0] [i_0] [i_0] [(unsigned short)0]) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : (((arr_7 [(_Bool)1] [i_0] [i_0] [i_0]) + (arr_4 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)21] [i_0] [(short)21]))) + (arr_5 [(unsigned char)11] [(short)8] [i_0])))) ? (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)3] [(unsigned short)3] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0] [i_0])) >= (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) ? (((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */int) arr_3 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0]))))))) ? (((((((/* implicit */int) arr_6 [i_0])) <= (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) != (arr_4 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_0])))))) : (((/* implicit */int) arr_8 [i_0] [(short)20] [i_0] [(short)20] [i_0] [i_0])))))));
    }
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (var_9)))))) - (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4))))))))));
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) ((arr_7 [i_4] [i_5] [i_5] [i_6]) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_5])) ? (((/* implicit */int) arr_13 [i_5] [i_4])) : (((/* implicit */int) arr_9 [i_6] [i_5]))))) ? (((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_7 [i_6] [i_5] [i_5] [i_4]) : (arr_4 [i_5] [i_5] [i_4]))) : (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_2 [(short)19] [i_5] [(short)19]))))))));
                    var_25 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) (signed char)-38)) <= (((/* implicit */int) (signed char)21)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_6] [i_5] [i_4] [i_4])) | (arr_17 [i_4] [i_4] [i_4] [i_4]))))))) % (((((((/* implicit */int) arr_9 [i_5] [i_6])) != (arr_4 [i_4] [(_Bool)1] [i_4]))) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_5] [i_4])) ? (((/* implicit */int) arr_13 [i_6] [i_6])) : (((/* implicit */int) arr_0 [i_5])))) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4]))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                arr_24 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_4] [21LL] [(_Bool)1] [i_4] [i_4])) + (((/* implicit */int) arr_16 [i_4]))));
                                var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4] [i_5] [9LL])) ? (((/* implicit */int) arr_1 [i_5])) : (arr_15 [i_8] [i_6])))) & (((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(short)1] [(short)1]))) : (arr_10 [i_4])))))) ? (((((/* implicit */_Bool) ((arr_16 [i_4]) ? (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4] [i_4])) : (arr_17 [i_4] [i_5] [i_6] [0ULL])))) ? (((((/* implicit */_Bool) arr_7 [i_8] [i_7] [6] [4ULL])) ? (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) arr_21 [13U] [i_5] [13U] [13U])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [(short)12])) ? (((/* implicit */int) arr_16 [i_8])) : (((/* implicit */int) arr_3 [i_4] [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_8] [i_8])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
