/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223453
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
    var_11 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) arr_0 [i_1]);
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((_Bool) 2061330398)))));
                arr_4 [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)76)))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((arr_2 [i_1]) | (((/* implicit */unsigned long long int) 6291456LL)))))));
            }
        } 
    } 
}
