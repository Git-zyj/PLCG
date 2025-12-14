/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2919
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned char) var_13);
        arr_3 [(unsigned char)9] = ((/* implicit */signed char) -957895674);
        arr_4 [i_0] = ((/* implicit */long long int) (+(((2147483647) & (((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])));
    }
    var_18 = ((/* implicit */long long int) (~(2147483622)));
}
