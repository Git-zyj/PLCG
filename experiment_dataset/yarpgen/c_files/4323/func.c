/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4323
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(2151705043U))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (2143262252U)))))) || (((/* implicit */_Bool) ((arr_1 [i_1 + 1]) >> ((((~(arr_1 [i_1]))) + (570442962))))))));
                var_12 = ((/* implicit */int) (-(2151705043U)));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 2151705042U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2143262256U)) ? (((/* implicit */unsigned int) 2008244932)) : (var_10)))) ? (var_9) : (((((/* implicit */_Bool) -2008244933)) ? (313965030) : (var_9))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_3)) & (var_10)))) ? (min((((/* implicit */unsigned int) var_9)), (var_10))) : (max((((/* implicit */unsigned int) var_9)), (1433954826U)))))) ? (max((var_8), (((((var_2) + (2147483647))) << (((981738948U) - (981738948U))))))) : (((int) max((var_2), (var_9))))));
    var_15 = ((/* implicit */int) var_6);
}
