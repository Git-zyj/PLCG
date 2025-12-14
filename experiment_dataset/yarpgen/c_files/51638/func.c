/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51638
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
    var_16 &= ((/* implicit */int) (!(((/* implicit */_Bool) 5206440911085921136LL))));
    var_17 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((~(arr_0 [i_0]))), (arr_0 [i_0 + 2])))), (((((/* implicit */_Bool) max((72057594037927936LL), (((/* implicit */long long int) arr_0 [i_0 + 1]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_0 [i_0 + 1])) : (-9177404716665796188LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))))));
        var_19 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (_Bool)1)))));
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */short) min((min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0 + 2]))), (min((3566550376U), (((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_0 - 1]))))));
        var_20 = ((/* implicit */unsigned int) ((min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4)))) * ((+((-(((/* implicit */int) var_8))))))));
        var_21 = arr_0 [i_0];
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned int) (~(arr_3 [i_1] [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) 1406137748));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_1]);
    }
}
