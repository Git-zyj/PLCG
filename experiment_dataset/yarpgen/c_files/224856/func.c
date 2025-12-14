/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224856
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
    var_19 = var_11;
    var_20 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (!(((_Bool) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_22 = (-(((((/* implicit */_Bool) (signed char)63)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_23 += ((/* implicit */_Bool) ((unsigned int) ((unsigned short) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))));
        var_24 = ((/* implicit */long long int) var_12);
        arr_6 [i_1] [i_1] &= ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) / ((~(arr_4 [i_1]))));
        var_25 = ((/* implicit */unsigned long long int) var_13);
        var_26 = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
    }
    var_27 = ((/* implicit */unsigned long long int) (signed char)17);
    var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (+(((/* implicit */int) var_17))))) + (var_14))) << ((((-(((/* implicit */int) var_5)))) - (44)))));
}
