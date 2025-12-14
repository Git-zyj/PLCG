/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225944
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
    var_15 = ((/* implicit */signed char) ((((((((/* implicit */int) var_10)) <= (((/* implicit */int) var_1)))) ? (max((var_6), (var_11))) : ((((_Bool)1) ? (((/* implicit */int) var_3)) : (var_11))))) - (((/* implicit */int) (unsigned char)1))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_3 [8ULL] [i_0] = ((/* implicit */int) arr_1 [(unsigned char)23]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) -5416912519545837909LL))) && ((_Bool)1)));
        arr_5 [(_Bool)1] = ((/* implicit */short) (-(((((/* implicit */int) arr_2 [i_0] [i_0])) % (((/* implicit */int) (_Bool)1))))));
        arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) 2098827281U)) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [(unsigned short)9])));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    arr_17 [i_1] [i_1] [i_1] [i_1] |= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2474843906U)), (15278608279723545638ULL)))) || (((/* implicit */_Bool) var_11)));
                    arr_18 [i_3] [i_3] [i_2] [i_1] = ((/* implicit */long long int) 2098827296U);
                    arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2 - 1])) | (((/* implicit */int) arr_12 [i_2 + 1]))))) ^ ((+(2098827281U)))));
                    arr_20 [i_2] = ((/* implicit */unsigned int) max((((9223372036854775807LL) >> (((((2196140000U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))) - (49U))))), (((/* implicit */long long int) max(((-(-2147483632))), ((-(var_11))))))));
                }
            } 
        } 
        arr_21 [(short)3] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1]))))) ? (arr_9 [i_1]) : ((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_10))));
    }
    for (signed char i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        arr_24 [i_4] [i_4] = ((/* implicit */int) var_1);
        arr_25 [i_4] [10LL] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_9)) % (((arr_23 [i_4]) ^ (((/* implicit */int) var_13)))))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
        {
            arr_28 [(_Bool)1] [4LL] [i_4] = ((/* implicit */short) ((((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_0)))) ? (((/* implicit */int) arr_12 [i_4 - 2])) : (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_9)))))) >> (((((((((/* implicit */_Bool) (unsigned short)11668)) || (((/* implicit */_Bool) arr_14 [0LL])))) ? ((+(var_11))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [(signed char)11] [i_4 - 2] [(signed char)11])) < (((/* implicit */int) var_12))))))) + (2095052293)))));
            arr_29 [i_4] [i_5] [i_5] &= ((/* implicit */unsigned char) arr_7 [i_4 + 1]);
        }
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_32 [i_6] [i_4] [i_4] = ((/* implicit */short) var_10);
            arr_33 [i_4] [i_6] [i_6 - 1] = ((/* implicit */int) var_10);
        }
    }
}
