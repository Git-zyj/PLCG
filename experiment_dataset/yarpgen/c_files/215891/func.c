/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215891
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) >= (((/* implicit */int) (unsigned char)81))))), (max((11819539389086716450ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 0LL);
        var_20 = arr_1 [i_0];
        var_21 = ((_Bool) (~(((/* implicit */int) var_17))));
    }
    var_22 = ((/* implicit */unsigned int) var_1);
}
