/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223748
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(960774574U)))) ? (var_1) : ((~(var_1)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) (~(min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 4])))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) 72057593501057024LL);
    }
    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) ((unsigned short) 1815868798U))))));
}
