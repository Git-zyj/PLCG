/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223164
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
    var_12 = ((/* implicit */_Bool) (short)-182);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0 - 3]), (arr_4 [i_0] [i_0 + 1])))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) max((arr_4 [3ULL] [i_0 + 1]), (arr_1 [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((min((arr_1 [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1]))))))), (arr_0 [i_0] [i_1])));
            }
        } 
    } 
}
