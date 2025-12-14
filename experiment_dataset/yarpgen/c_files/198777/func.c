/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198777
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
    var_13 = (+(((-4383454129550450451LL) / (((/* implicit */long long int) 2147483641)))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((int) min((max((3832585424762331385LL), (9223372036854775807LL))), (((long long int) 2147483637))));
        arr_4 [i_0] = ((int) ((int) arr_0 [i_0 - 2]));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(2147483641)))) ? (var_8) : ((~(((-9223372036854775807LL) ^ (((/* implicit */long long int) 2147483647))))))));
        var_14 = var_0;
    }
}
