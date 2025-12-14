/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53708
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_17 = arr_1 [i_0] [i_0];
        arr_2 [i_0] [(signed char)19] = ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_0])));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3])))), (arr_0 [12LL] [i_0 + 1]))))));
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 2]);
    }
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 = ((/* implicit */unsigned int) min((var_21), (var_15)));
}
