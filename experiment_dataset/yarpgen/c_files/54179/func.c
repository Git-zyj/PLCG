/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54179
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
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) ((arr_2 [i_0]) < (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (arr_2 [i_0])))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) >= (max((var_8), (((/* implicit */long long int) var_1)))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (signed char)44)))))) ? (((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (105310498U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))));
        var_21 = ((/* implicit */signed char) ((short) arr_1 [i_1] [i_1]));
        arr_10 [(unsigned char)5] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */short) arr_1 [(signed char)12] [i_1])), (arr_3 [i_1])));
    }
    for (int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        arr_15 [i_2] [i_2] = arr_12 [i_2];
        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 + 3]))) <= (105310483U))))));
    }
    for (int i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3 - 1]))));
        var_24 -= ((/* implicit */unsigned short) var_5);
        arr_18 [i_3] = ((/* implicit */short) arr_12 [i_3]);
        arr_19 [i_3 - 1] = ((/* implicit */signed char) var_11);
    }
    var_25 = ((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-6897))))))));
    var_26 = ((/* implicit */_Bool) var_11);
}
