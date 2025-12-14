/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238334
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
    var_10 = ((/* implicit */unsigned char) 14802073712957899762ULL);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_2 [(signed char)8] = ((/* implicit */signed char) 14802073712957899755ULL);
        var_11 -= ((/* implicit */_Bool) arr_0 [i_0]);
    }
    var_12 *= var_2;
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_5)), (var_1)));
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] = (signed char)-60;
        arr_6 [7ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_1]))))) & (min((((/* implicit */unsigned long long int) ((unsigned char) 8796092891136ULL))), (max((3644670360751651848ULL), (14802073712957899762ULL)))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((long long int) min((arr_4 [i_1]), (arr_4 [i_1]))))) : (((unsigned long long int) var_4))));
    }
}
