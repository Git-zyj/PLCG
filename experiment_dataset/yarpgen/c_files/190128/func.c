/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190128
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 += (-(max((1928470524), (-1928470524))));
                var_18 = ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) & (max((1928470539), (((/* implicit */int) arr_1 [i_1] [i_0])))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1928470539)) ? (var_7) : (1928470539)))) ? (-2034687379) : (-1928470539)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)41772)) : (min((((/* implicit */int) (_Bool)1)), (311844751))))) : (((/* implicit */int) var_13)));
    var_20 -= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) ((-1928470528) & (1928470529)))) || (((/* implicit */_Bool) (((_Bool)1) ? (var_16) : (((/* implicit */int) (_Bool)1)))))))), (var_16)));
}
