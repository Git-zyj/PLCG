/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248339
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = var_1;
        var_18 = ((/* implicit */long long int) 2064363454870154460ULL);
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) (signed char)39)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)45)) == (((/* implicit */int) (signed char)36))))))))));
        arr_7 [(short)6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_1 [i_1]) ^ (((((/* implicit */int) var_9)) >> (((((/* implicit */int) arr_3 [i_1] [i_1])) - (19550)))))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))) : (var_14)))));
        arr_8 [i_1] = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
    }
    var_19 = min((var_15), (((/* implicit */unsigned int) ((signed char) var_14))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_16 [i_2 - 1] [i_2 - 1])) ? (arr_16 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))));
                var_20 = ((/* implicit */unsigned short) arr_10 [i_2]);
                var_21 = ((/* implicit */unsigned int) 16481663777344687006ULL);
                arr_18 [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 3236178470U)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (short)18685)))));
            }
        } 
    } 
}
