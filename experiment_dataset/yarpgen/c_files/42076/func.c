/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42076
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_8 [i_0] [i_2]);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_13 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((_Bool) var_3)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_10)) : (var_5)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [(short)2] [i_2] [i_1] [i_1] [i_3]))))) : (((arr_8 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) -3343239078321908691LL))))))) ? (((/* implicit */unsigned int) (-(((int) arr_1 [i_1 + 1]))))) : (((((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 6677495473277860956LL)) * (((arr_15 [i_1] [i_1] [i_1] [i_1]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1] [i_4])))))))) ? (((int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2])) / (((/* implicit */int) arr_2 [i_0] [i_2]))))) : (((/* implicit */int) var_9)));
                        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */unsigned long long int) var_7)) : (var_3))) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_2])))) | (((var_10) | (var_2))))))));
                        arr_17 [i_4] [i_1] [(unsigned char)3] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (short)14))));
                    }
                    arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_16 [i_1] [i_0])) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1])) | (((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 3])))))));
                    arr_19 [i_1] [i_2] [i_1 + 2] [i_1] = ((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) 912125952))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)0)))))))) : (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (1072724569650266354ULL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */int) var_14)) > (var_7)))))) < (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) && (((/* implicit */_Bool) var_0)))))));
}
