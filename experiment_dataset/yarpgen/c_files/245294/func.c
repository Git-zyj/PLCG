/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245294
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) var_9);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((unsigned int) min((arr_1 [i_0]), (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) ((int) -1148018839));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_17 = ((int) 1148018823);
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) max((3588928365721101325LL), (((/* implicit */long long int) -8192))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 26099186U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_2] [i_2])));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((arr_7 [i_2] [i_2]) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (-131072)));
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((var_0) >= (var_13)))));
    var_19 = -8193;
    var_20 = ((/* implicit */int) (((~(max((((/* implicit */long long int) (_Bool)1)), (2229711205061999742LL))))) >= (((/* implicit */long long int) 1148018839))));
}
