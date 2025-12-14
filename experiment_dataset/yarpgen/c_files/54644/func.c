/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54644
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
    var_16 = var_9;
    var_17 = ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))));
        var_18 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_19 -= ((((/* implicit */_Bool) ((int) (unsigned char)178))) ? (((/* implicit */int) arr_6 [(unsigned short)9])) : (min(((~(((/* implicit */int) (_Bool)1)))), (var_1))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (unsigned short)64698);
        arr_8 [i_1] [i_1] = arr_1 [(unsigned char)8];
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (unsigned char)161))));
        var_21 = (~(((/* implicit */int) (_Bool)1)));
    }
}
