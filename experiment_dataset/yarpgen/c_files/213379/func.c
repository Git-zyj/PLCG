/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213379
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
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21))))), ((~(((/* implicit */int) (unsigned char)204))))))) ^ (max((var_5), (((/* implicit */unsigned int) var_0))))));
    var_14 = ((/* implicit */unsigned char) (~((+(((((/* implicit */int) (signed char)123)) | (((/* implicit */int) (unsigned short)12123))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (26U))), (((/* implicit */unsigned int) max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))));
        var_16 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) | (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (max((var_9), (((/* implicit */long long int) var_12)))) : (((((/* implicit */_Bool) (unsigned short)15533)) ? (var_11) : (2825453316024264383LL)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) 179930433U);
            arr_8 [i_2] [i_1] [i_1 + 1] = ((/* implicit */long long int) arr_7 [i_1 - 1] [i_1 + 2]);
            var_18 -= ((((/* implicit */_Bool) (unsigned char)204)) ? (arr_7 [i_1 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1351930694U) < (((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_1 + 1])))))));
        }
        for (int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_11 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 3]))) <= (12279195041965097359ULL));
            arr_12 [i_1 - 1] [i_1 + 2] [i_1 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 + 2] [i_1])) && (((/* implicit */_Bool) arr_6 [i_1 + 2] [i_3] [i_3]))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_7 [i_1] [i_3]) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_3]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1 - 2] [i_3]))))) : ((~(var_8)))));
            var_20 -= ((/* implicit */unsigned int) arr_6 [i_1] [i_1 - 1] [i_1 - 1]);
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) (~((~(var_7)))));
            arr_16 [i_1 - 2] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 - 3] [i_1 - 3] [i_1 - 2])) ? (((/* implicit */long long int) var_8)) : (-4396711793815211198LL)));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (signed char)127)))))) : (((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_1]))) : (var_10)))));
            var_23 -= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 2] [i_1 - 2]))))));
        }
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((long long int) ((unsigned int) var_3))))));
    }
}
