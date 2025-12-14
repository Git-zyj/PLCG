/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25634
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((var_14), (((/* implicit */unsigned int) (_Bool)0)))))));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((~((-(((/* implicit */int) var_19))))))));
    var_22 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_16))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned short) (-((-(arr_0 [i_0] [i_0])))))))));
        var_24 -= ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [3] [i_2])) <= (((/* implicit */int) arr_6 [i_1] [i_2]))));
            arr_9 [(short)9] [i_1] = ((/* implicit */_Bool) ((((3564387516U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_5 [i_1])) - (74))))) : (((/* implicit */int) arr_5 [i_1]))));
        }
        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [0])) : (((/* implicit */int) (unsigned short)17012))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (((1537400254212632028LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)3584)))))));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
    }
}
