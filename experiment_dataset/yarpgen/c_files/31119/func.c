/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31119
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((var_6) ? (((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (var_16))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_5 [i_0] [7ULL] [i_2]);
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) < (((((/* implicit */_Bool) var_4)) ? (var_9) : (var_12))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 5178853877799217536LL)))) <= (((((/* implicit */_Bool) arr_2 [7U] [i_0 - 2])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))), (arr_5 [(short)0] [(short)0] [i_0])));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_12))) ? (var_14) : (var_16))));
        arr_9 [(unsigned short)22] |= ((/* implicit */signed char) arr_8 [21] [i_3]);
    }
}
