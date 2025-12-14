/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48801
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) (_Bool)0))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(arr_3 [i_0]))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (-((-(arr_3 [i_1]))))))));
        var_13 |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (short)17244))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)-36))))));
    }
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(var_2))))))));
    var_15 |= ((/* implicit */_Bool) (-((-((-(((/* implicit */int) var_9))))))));
}
