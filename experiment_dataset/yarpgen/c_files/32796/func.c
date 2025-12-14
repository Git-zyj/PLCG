/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32796
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] |= ((/* implicit */int) (unsigned short)65512);
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((_Bool) (+(arr_0 [17ULL])))))));
        var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
    }
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) 3382579202U))), ((+(((9223372036854775792LL) >> (((((/* implicit */int) var_10)) - (14825)))))))));
    var_14 = 269261133024527563LL;
    var_15 = ((/* implicit */short) var_10);
}
