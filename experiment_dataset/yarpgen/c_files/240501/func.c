/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240501
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((unsigned char) ((((/* implicit */int) (unsigned char)247)) | (((/* implicit */int) (unsigned char)60))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */int) max(((unsigned char)244), (arr_1 [(unsigned char)15])))) : (((/* implicit */int) min((var_14), ((unsigned char)0)))))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), (max((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (unsigned char)208)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)190))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_2;
        var_18 ^= ((unsigned char) (unsigned char)252);
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))));
    }
    var_19 = max((var_6), (var_14));
    var_20 = min((((unsigned char) ((unsigned char) (unsigned char)68))), (var_10));
    var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)5))));
    var_22 = ((/* implicit */unsigned char) min((var_22), ((unsigned char)58)));
}
