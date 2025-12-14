/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22947
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-(24))))));
        var_14 = ((/* implicit */short) 1);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_4 [6LL] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) var_6))));
            var_15 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
        }
    }
    var_16 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((long long int) (unsigned short)12099)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -25))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1))));
}
