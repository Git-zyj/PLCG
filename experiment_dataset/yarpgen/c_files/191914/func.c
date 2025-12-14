/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191914
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((unsigned int) -1098489894));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_12 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_13 += ((/* implicit */_Bool) (-(arr_7 [i_1] [i_1])));
        arr_8 [i_1] = ((/* implicit */int) var_4);
    }
    var_14 += ((/* implicit */short) var_10);
    var_15 = var_2;
}
