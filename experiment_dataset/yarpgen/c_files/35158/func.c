/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35158
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
    var_19 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
        var_21 = ((/* implicit */unsigned char) (+(((unsigned int) var_7))));
        var_22 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1]);
        var_23 = ((/* implicit */int) arr_1 [i_0] [i_0 + 1]);
        var_24 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_25 ^= ((/* implicit */signed char) ((unsigned short) ((3258265967278245182ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1792))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_4 [i_1] [i_1 + 2]))));
    }
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */int) max((((/* implicit */unsigned int) (short)30401)), ((+(arr_7 [i_2 - 1])))));
        arr_8 [i_2] = ((((/* implicit */_Bool) ((unsigned short) (-(arr_5 [i_2 + 1] [i_2 + 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) ^ (arr_2 [i_2 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_7 [i_2 + 2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2])))))))));
    }
    var_28 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))))), ((-(15188478106431306430ULL)))));
}
