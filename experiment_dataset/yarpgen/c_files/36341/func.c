/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36341
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
    var_16 = ((/* implicit */long long int) ((unsigned int) (unsigned char)252));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((unsigned int) arr_2 [i_0])) >> ((((~(((((((/* implicit */int) arr_0 [(short)2])) + (2147483647))) >> (((var_15) - (3884585919U))))))) + (1073736418))))))));
        var_18 = ((/* implicit */long long int) ((((((/* implicit */int) ((short) var_8))) + (((((/* implicit */_Bool) 576460752303423487LL)) ? (((/* implicit */int) (short)-30225)) : (((/* implicit */int) (unsigned char)10)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) - (4294967295U)))))))));
        var_19 |= ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) 2299128084U)))));
        var_20 = ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)24)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) / (max((((unsigned int) (unsigned char)197)), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)24))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned int) (((~(arr_3 [i_1] [i_1]))) < (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) | (17U))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_1)) + (arr_3 [i_1 + 1] [i_1])));
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_3 [i_2 + 1] [i_2 - 1]))))))));
        var_24 = ((/* implicit */short) arr_4 [i_2]);
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)197)))))));
        var_26 -= ((/* implicit */long long int) var_4);
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [8LL] [i_3]))) < (arr_7 [i_3] [i_3]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) arr_9 [i_3] [(unsigned char)11])) : (((/* implicit */int) arr_9 [i_3] [i_3]))))) : (var_5))))));
        var_28 = max((min((arr_8 [i_3]), (((/* implicit */long long int) arr_9 [i_3] [i_3])))), (arr_7 [i_3] [i_3]));
    }
}
