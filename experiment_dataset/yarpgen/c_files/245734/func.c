/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245734
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        arr_5 [i_0] = (-(arr_2 [(unsigned char)8]));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_8 [(unsigned short)0] [i_1] = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) arr_6 [i_1] [i_1])))));
        arr_9 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)54143))));
        var_15 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) (short)20447)), (((873977841U) + (((/* implicit */unsigned int) var_11))))))));
    }
    var_16 |= ((/* implicit */unsigned long long int) ((unsigned char) min((var_0), (var_7))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((30074958U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)212))))))));
}
