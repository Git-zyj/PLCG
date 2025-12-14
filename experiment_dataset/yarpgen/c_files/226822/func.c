/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226822
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
    var_18 = ((/* implicit */long long int) var_2);
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-97)), ((unsigned char)214)))) ? (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (short)1630)))) : (((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */int) var_9))))))))))));
    var_20 = ((/* implicit */unsigned long long int) 2874650724U);
    var_21 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) var_4)) ? (-131072) : (((/* implicit */int) (signed char)-82)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [(signed char)6] [(_Bool)1] [(unsigned char)0] [(short)11] [(signed char)9] [(short)2] = ((/* implicit */unsigned int) min((((arr_4 [2U] [1] [i_2]) / (arr_4 [i_1] [7LL] [i_3]))), (((/* implicit */int) arr_6 [i_2] [i_3]))));
                        arr_10 [2LL] [5LL] [(unsigned char)8] [(short)4] = ((/* implicit */short) arr_2 [(short)0]);
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)81))) : (arr_7 [4ULL] [(_Bool)1] [6U] [(short)7] [11] [2LL]))))) - (min((((/* implicit */long long int) max((var_11), (((/* implicit */unsigned short) arr_1 [2U]))))), (arr_7 [(short)5] [(_Bool)1] [(short)8] [(unsigned char)8] [7] [6U])))));
                        arr_14 [10ULL] [1LL] [2LL] [(unsigned char)8] [7] &= ((/* implicit */_Bool) (+(min((var_14), (((/* implicit */unsigned long long int) arr_7 [5ULL] [8LL] [(short)1] [9LL] [(unsigned char)10] [(unsigned char)8]))))));
                        var_23 ^= ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) 0ULL)) ? (arr_5 [0] [(short)7]) : (((/* implicit */unsigned long long int) 41360170)))))) % (15ULL)));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_24 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) min(((unsigned short)1638), ((unsigned short)224)))), (((int) arr_13 [4] [(unsigned char)8] [(_Bool)1] [9ULL]))))), (((((var_14) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [2] [7]))))) * (min((((/* implicit */unsigned long long int) arr_6 [8ULL] [10ULL])), (var_15)))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [(signed char)1])) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 16810306118288543528ULL)))))))), (((min((arr_7 [(short)8] [4] [(short)7] [(unsigned short)1] [8ULL] [(short)4]), (((/* implicit */long long int) var_1)))) + (((/* implicit */long long int) ((int) var_14))))))))));
                        }
                    }
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) 41360170)) : (arr_7 [4U] [7] [10] [(short)4] [(_Bool)0] [4])))) ? ((~(-41360160))) : (min((arr_3 [(signed char)5]), (var_0)))))) || (arr_1 [7ULL])));
                }
            } 
        } 
    } 
}
