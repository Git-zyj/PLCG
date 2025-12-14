/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215248
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
    var_15 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~(((int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_1 [i_1]))))))))));
                arr_4 [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_6), (var_12)))) ? (arr_2 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) << (((max((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_2 [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) var_11))))))) - (80LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
}
