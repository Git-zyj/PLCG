/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190918
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
    var_18 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_12)))) & (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) var_12))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-4873)), (((long long int) arr_0 [i_0] [i_0]))))) || ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(unsigned char)16] [(unsigned char)16])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) (((+(arr_0 [i_0] [i_0]))) - (arr_0 [i_0] [i_0])));
    }
    var_20 = ((/* implicit */signed char) var_12);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((var_12) ? (var_15) : (((((/* implicit */_Bool) 8962583570616510363ULL)) ? (var_15) : (((/* implicit */unsigned long long int) 6042291450485932017LL))))))));
}
