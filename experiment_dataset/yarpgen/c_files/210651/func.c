/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210651
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
    var_10 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) ((unsigned short) var_7))))));
    var_11 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((unsigned char) ((_Bool) arr_0 [i_0]))))));
        var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_5)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))), ((-(-9149198463633513222LL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_0] [i_0])), (var_3)))) | (((/* implicit */int) (!(arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) var_8)))) * (((((/* implicit */int) var_8)) / (2097151)))));
        arr_6 [i_1] = ((/* implicit */signed char) -2097130);
        arr_7 [i_1] = ((/* implicit */short) arr_4 [i_1] [i_1]);
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_3 [i_1]))));
    }
}
