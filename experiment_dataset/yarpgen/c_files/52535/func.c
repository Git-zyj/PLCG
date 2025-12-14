/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52535
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_0)));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_15))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_3 [i_1] [i_1 + 1])) & (((/* implicit */int) var_14))))));
        arr_6 [i_1] = var_14;
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_12)) ? (var_10) : (var_12))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_1)), (var_4)))))), (((/* implicit */long long int) ((((/* implicit */int) max((var_9), (arr_0 [12] [12])))) << (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) & (var_7)))))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7751468632903749548LL)) || (((/* implicit */_Bool) (unsigned short)49993))));
        arr_12 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-5543)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (unsigned short)14394)))) / (((/* implicit */int) (unsigned char)44))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        arr_16 [(_Bool)1] = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8231))) - (var_0))), (((/* implicit */long long int) min((((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)49993)))), (((/* implicit */int) (unsigned short)14393)))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((min((((/* implicit */unsigned int) arr_15 [i_3])), (((arr_13 [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) < (((/* implicit */unsigned int) (-(var_18))))))));
    }
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_19 [i_4] [i_4] &= ((/* implicit */signed char) (+((-(var_6)))));
        var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-125)), ((unsigned short)51141)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_13 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(_Bool)1])) && (((/* implicit */_Bool) var_1)))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15536)) % (-786363055))))));
    }
}
