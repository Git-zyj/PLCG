/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232187
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
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
            var_12 = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (var_2)));
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_2] [i_2] &= (-(((((/* implicit */_Bool) ((int) 890748183U))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)41)) % (((/* implicit */int) arr_4 [i_2] [i_2]))))))));
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -8737722488084793877LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0]))) / (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))) ? (var_6) : (max((((/* implicit */long long int) arr_9 [i_0] [i_2] [i_0])), (arr_0 [i_2] [i_0])))));
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        }
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 26ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (18446744073709551580ULL)));
            arr_16 [0] [(unsigned char)2] [i_3] |= ((/* implicit */unsigned char) (+((+(var_2)))));
        }
        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            var_14 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_6)))) <= (max((((/* implicit */unsigned long long int) 1046386483U)), (18446744073709551580ULL)))));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)-60)))), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_4] [i_0])) != (((((/* implicit */int) arr_4 [i_0] [i_4])) | (((/* implicit */int) (unsigned char)81))))))) : (((/* implicit */int) arr_18 [i_4] [i_0]))));
            arr_21 [i_0] [0ULL] [i_4] &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_2)), (var_3)));
            arr_22 [(short)8] [(short)8] |= ((/* implicit */unsigned long long int) arr_1 [6ULL]);
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((unsigned int) (_Bool)1))));
        }
    }
}
