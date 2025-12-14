/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49905
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
    var_18 = (~(4294967292U));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = min((((/* implicit */unsigned int) ((_Bool) (signed char)0))), (min((arr_1 [i_0]), (arr_1 [i_0]))));
        var_20 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) 7U)), (var_5))), (1106235599839578054ULL)));
        arr_2 [i_0] = ((/* implicit */_Bool) (-(var_7)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */int) max((var_21), (arr_4 [i_1 - 1])));
        var_22 = ((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1 - 1]);
    }
    var_23 = ((/* implicit */unsigned int) var_6);
    var_24 = ((/* implicit */_Bool) max((1106235599839578054ULL), (((/* implicit */unsigned long long int) ((var_2) < (var_16))))));
    var_25 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) min((((/* implicit */unsigned int) (unsigned char)7)), (2518758970U)))));
}
