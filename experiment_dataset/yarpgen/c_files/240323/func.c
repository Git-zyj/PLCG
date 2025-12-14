/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240323
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (var_0)))) : (((/* implicit */int) var_0))));
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [i_0])))), (max((2931159994U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))));
        var_18 = ((/* implicit */short) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_19 = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((min((((/* implicit */int) (_Bool)1)), (((arr_5 [i_1] [i_1]) & (((/* implicit */int) var_3)))))) << ((((~(((((((/* implicit */int) arr_1 [i_1])) + (2147483647))) << (((var_7) - (17684767215083977752ULL))))))) + (2147483619))))))));
    }
    var_21 = ((/* implicit */_Bool) ((signed char) var_15));
    var_22 = ((/* implicit */signed char) var_7);
    var_23 = ((/* implicit */signed char) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_15))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_11)), (var_10))))))));
}
