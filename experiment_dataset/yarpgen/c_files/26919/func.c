/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26919
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]);
            var_13 = ((/* implicit */unsigned char) ((unsigned long long int) 4095ULL));
            var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) < (((/* implicit */int) ((signed char) (+(18446744073709547526ULL)))))));
        }
        var_15 = ((/* implicit */unsigned short) (~(1195611607)));
    }
    var_16 = ((/* implicit */short) var_0);
    var_17 = ((/* implicit */long long int) min((4089ULL), (((/* implicit */unsigned long long int) (unsigned short)53040))));
}
