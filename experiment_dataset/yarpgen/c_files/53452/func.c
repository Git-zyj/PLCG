/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53452
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = min((((unsigned char) (short)-23124)), (((/* implicit */unsigned char) ((signed char) min((var_8), (((/* implicit */unsigned int) -611393812)))))));
        var_19 += ((/* implicit */_Bool) (~((-(arr_1 [i_0])))));
    }
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_2))) >> ((-(((/* implicit */int) var_0))))))));
}
