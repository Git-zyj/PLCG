/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31675
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
    var_12 -= ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) (((~(((((var_8) + (9223372036854775807LL))) >> (((((/* implicit */int) var_4)) - (24))))))) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [20ULL])))));
                var_14 ^= ((/* implicit */unsigned short) arr_4 [(short)22]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_6 [(signed char)7] [i_1] [i_0])) ^ (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) 3U)))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    var_15 += ((/* implicit */unsigned long long int) arr_8 [3ULL] [22ULL]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_1] [i_2] [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [16] [22U])))))))) % (((/* implicit */unsigned long long int) arr_4 [i_0]))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) arr_3 [10ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)1] [(short)17] [(short)12]))) : (arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [1LL] [(unsigned short)23] [i_2]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_11 [i_0] [16LL] [(unsigned char)22] [i_0] [(short)14] [i_0]) : (var_11)))))))) : (((((arr_1 [(signed char)16]) != (var_9))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(short)24] [i_0]))) : (var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
                    }
                }
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)-123)))) % (((((/* implicit */int) (signed char)-127)) - (((/* implicit */int) (signed char)-124)))))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [4LL] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (2147483647) : (((/* implicit */int) (unsigned char)237))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)122))) : (arr_8 [i_4] [i_4])))));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [(unsigned char)12] [i_5] [(unsigned short)6] [i_5] [i_0])) || (((/* implicit */_Bool) arr_10 [(signed char)2] [i_5] [(unsigned short)22] [i_5] [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19076)) ? (((/* implicit */int) (short)3500)) : ((-2147483647 - 1))))) ? (arr_8 [i_6 - 2] [i_6]) : (((((/* implicit */_Bool) var_1)) ? (arr_18 [(unsigned char)15] [i_1] [(unsigned short)1]) : (arr_8 [(signed char)13] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6 + 2] [22] [i_6] [21ULL])) || (((/* implicit */_Bool) arr_9 [i_6 + 2] [3] [(signed char)13] [17]))))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [7U] [i_5] [i_1]))) & (var_8))))));
                            var_22 = ((/* implicit */unsigned int) ((arr_2 [(_Bool)1]) | (var_8)));
                            arr_22 [(_Bool)1] [i_1] = ((/* implicit */short) (((-2147483647 - 1)) & (((/* implicit */int) (signed char)113))));
                        }
                    } 
                } 
            }
        } 
    } 
}
