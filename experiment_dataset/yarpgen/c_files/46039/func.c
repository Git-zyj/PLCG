/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46039
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_4 [i_1] [20ULL]) : (arr_4 [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (((arr_3 [i_0] [i_0] [(short)3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_0 [18ULL])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [19] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_4 [i_1] [i_0])))) ? (((arr_3 [i_1] [5LL] [i_0]) ? (arr_2 [(signed char)8] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)0])) ? (arr_2 [6ULL] [i_1]) : (arr_2 [i_0] [i_1])))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11308306387334524399ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_1]))))))));
                var_11 *= ((/* implicit */unsigned long long int) ((((long long int) ((arr_0 [i_0]) << (((arr_4 [10] [i_0]) + (63193379)))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [7] [i_1]))))) ? ((-(-202445743))) : (((arr_3 [i_0] [i_1] [i_1]) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) arr_1 [(unsigned short)11])))))))));
                var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1])))) % (((/* implicit */int) arr_1 [i_1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned short)14])))) : (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_5 [i_0] [i_2]) : (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */short) arr_11 [i_4] [i_2] [13ULL] [i_2] [i_1]);
                                arr_15 [i_0] [i_2] [i_2] [3ULL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_2] [17LL] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [17LL] [i_2])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((arr_3 [i_1] [i_2] [i_3]) ? (((/* implicit */unsigned long long int) arr_11 [i_4] [i_2] [i_2] [i_2] [i_0])) : (arr_7 [i_3] [14ULL] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))));
                                var_14 = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2]);
                            }
                        } 
                    } 
                }
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [20LL])) <= (((/* implicit */int) arr_6 [i_0] [(unsigned char)14] [i_0]))))) % (arr_4 [10] [i_0])))) ? ((~(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_4 [(_Bool)1] [i_1]))))) : ((+(((/* implicit */int) arr_3 [i_0] [11U] [i_1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) ((short) ((var_8) ? (var_4) : (((/* implicit */unsigned long long int) var_7))))))));
}
