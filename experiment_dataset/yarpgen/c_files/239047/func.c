/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239047
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_18 = ((((/* implicit */unsigned long long int) 1774989032)) ^ (7374728257345532967ULL));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1 + 1] [i_2 + 1])))));
                    var_20 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -9223372036854775806LL)) ? (arr_2 [i_1 + 1] [i_1] [i_1 - 3]) : (arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 2]))) == (max((((/* implicit */int) var_11)), (arr_4 [i_0 + 1] [i_1 - 1] [i_1 - 2])))));
                    var_21 -= ((/* implicit */long long int) arr_5 [(unsigned char)1] [i_0 - 1] [i_1 + 1] [i_2 + 1]);
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (var_2)))))) ? ((-(((int) (unsigned short)50624)))) : (((arr_3 [(unsigned short)18] [i_0 - 1] [i_0]) ^ ((-(((/* implicit */int) (unsigned short)14899))))))));
        arr_6 [i_0] = ((/* implicit */unsigned short) (~(7150066850266984067ULL)));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_14 [i_5] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((8803410454863532618LL) | (((/* implicit */long long int) arr_3 [i_3] [i_4] [i_5]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((var_12) ^ (((/* implicit */long long int) (-2147483647 - 1))))))), (((/* implicit */long long int) var_6))));
                        arr_15 [i_3] [i_3] [(unsigned short)6] [(unsigned short)6] [i_3] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_1 [i_0 + 2])))), (((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
                        arr_16 [6LL] [i_3] [i_4 - 2] [i_3] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_14)))), ((+(((/* implicit */int) var_3))))));
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (11296677223442567551ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_12))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53406))) : (9223372036854775805LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((-2147483647 - 1)) : (var_0)))))))));
        var_24 = ((/* implicit */signed char) ((-2147483628) & (((int) ((unsigned char) var_11)))));
    }
    for (int i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)12145)))) - (arr_17 [12LL])));
        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-8803410454863532619LL), (((/* implicit */long long int) arr_9 [(unsigned char)10]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7]))) - (7150066850266984069ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_12))))))) ? (((int) arr_2 [i_7 + 2] [i_7] [i_7])) : (arr_9 [0ULL])));
        var_27 = ((/* implicit */unsigned char) (-(8803410454863532618LL)));
        var_28 *= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_7] [i_7 + 1] [i_7 - 1]), (arr_2 [i_7] [i_7 + 2] [i_7 + 1]))))));
    }
    /* LoopSeq 1 */
    for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) max((arr_25 [i_8]), (((((/* implicit */_Bool) arr_24 [i_8] [(unsigned char)9])) ? ((-(((/* implicit */int) (signed char)96)))) : (((/* implicit */int) ((unsigned short) (unsigned short)53406))))))))));
        var_30 = ((/* implicit */long long int) var_10);
    }
}
