/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228534
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
    var_14 = ((/* implicit */unsigned char) var_3);
    var_15 = ((/* implicit */short) (+(((/* implicit */int) ((((int) var_11)) >= (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) arr_1 [(_Bool)1])))));
        var_17 = ((/* implicit */short) max((((/* implicit */int) var_7)), ((-(((/* implicit */int) (_Bool)0))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((unsigned int) var_5)) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(arr_1 [i_0]))))));
    }
}
