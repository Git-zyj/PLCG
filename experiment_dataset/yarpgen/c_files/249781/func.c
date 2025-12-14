/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249781
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)64))))), (var_3)))) ^ (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (short)1008))));
        var_14 = ((/* implicit */short) (unsigned char)255);
        arr_3 [i_0] = ((/* implicit */unsigned int) var_3);
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_0 [(short)4] [i_0]);
        var_15 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (2013265920U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) var_7);
        var_16 = ((/* implicit */long long int) var_0);
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) arr_10 [12U]);
        var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2] [(unsigned char)1])) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_18 = max((((/* implicit */long long int) var_6)), (((long long int) ((((/* implicit */_Bool) 3805883523U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (arr_10 [i_2])))));
    }
}
