/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212056
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_10 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) ((-1619235859) != (((/* implicit */int) (unsigned short)31256))))) : (((((/* implicit */int) (_Bool)1)) | ((-2147483647 - 1))))))) + (((3889252292755641254ULL) << (((arr_1 [(signed char)2]) - (566492821923434942ULL)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) min(((_Bool)0), ((_Bool)1)))), (min((arr_0 [i_0]), (arr_0 [i_0]))))) & (((/* implicit */unsigned int) 2147483647))));
    }
    var_11 = var_7;
}
