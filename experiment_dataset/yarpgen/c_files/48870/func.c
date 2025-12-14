/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48870
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (var_0))))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))))) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)89))))));
            var_16 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [(signed char)7] [(signed char)14] [i_1]))) && (((/* implicit */_Bool) var_5)))))));
            var_17 = var_7;
        }
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            var_18 = arr_7 [i_0] [i_0] [(signed char)8];
            var_19 = var_2;
            var_20 = ((/* implicit */signed char) min((var_2), (((/* implicit */unsigned int) arr_2 [i_0] [(unsigned short)9] [i_2]))));
            var_21 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)8))))) : (arr_5 [i_0] [i_2]));
            var_22 += ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65535))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_23 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0 - 1]))));
            var_24 = ((/* implicit */signed char) var_6);
            var_25 = ((/* implicit */unsigned short) var_13);
        }
    }
    var_26 = ((/* implicit */signed char) var_3);
}
