/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242482
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
    var_18 = ((/* implicit */short) ((min((min((((/* implicit */unsigned long long int) var_1)), (var_2))), (((/* implicit */unsigned long long int) (~(var_12)))))) ^ (var_17)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
        arr_4 [(_Bool)1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 16313426884219595018ULL)) ? (2487876035U) : (var_15)))));
    }
}
