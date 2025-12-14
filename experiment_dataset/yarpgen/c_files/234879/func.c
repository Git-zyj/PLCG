/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234879
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)65531), ((unsigned short)19))))))) && (((/* implicit */_Bool) (unsigned short)65531)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (unsigned short)65527))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
            arr_6 [13LL] [i_0] [i_1] = (~(((/* implicit */int) arr_3 [i_1 + 2] [i_1] [i_0 + 1])));
        }
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 - 1])) != (((/* implicit */int) arr_5 [i_0 - 1]))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((arr_4 [i_0 - 1]) / (((/* implicit */long long int) 534390807U)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (_Bool)1))));
        arr_10 [i_2] = ((/* implicit */unsigned int) (~(6426562665258605489LL)));
        var_27 = ((/* implicit */long long int) ((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)15] [i_2]))))) & (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U)))));
        var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1]))));
    }
    var_29 = ((/* implicit */_Bool) ((unsigned short) (((~(-934075221))) << (((var_14) - (4026146320252086184LL))))));
    var_30 = ((/* implicit */unsigned char) min(((-(max((((/* implicit */unsigned long long int) var_4)), (var_2))))), (((/* implicit */unsigned long long int) var_10))));
}
