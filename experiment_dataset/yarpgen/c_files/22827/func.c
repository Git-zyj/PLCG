/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22827
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_14);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = (~(((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */short) var_7))))));
        var_17 = ((/* implicit */unsigned short) ((signed char) arr_3 [i_1] [i_1]));
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) arr_4 [(unsigned short)12]))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) arr_3 [i_2] [19])))))))) : (((((/* implicit */int) arr_3 [i_2] [i_2])) | (((((/* implicit */int) var_15)) | (((/* implicit */int) (short)5459))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_3 [i_2] [i_2]))) != (((/* implicit */int) min((arr_10 [i_2]), (((/* implicit */unsigned char) arr_5 [i_2] [i_2])))))));
    }
    var_20 = ((/* implicit */int) var_4);
}
