/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31876
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
        var_19 = ((/* implicit */short) min((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_1 [(short)3] [(_Bool)1])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [(signed char)8])), (min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)61937))))))));
        var_20 ^= ((/* implicit */unsigned char) arr_1 [(unsigned char)4] [i_0]);
    }
    var_21 = var_17;
}
