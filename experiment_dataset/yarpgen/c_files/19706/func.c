/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19706
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 += ((/* implicit */unsigned char) max(((((((_Bool)1) ? (4503599627304960LL) : (4503599627304971LL))) + (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((min((-4503599627304979LL), (4503599627304964LL))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)38)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) != ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23346))) : (4294967292U)))));
    }
    var_15 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) min((134086656U), (((/* implicit */unsigned int) (signed char)89))))) % (max((4503599627304970LL), (((/* implicit */long long int) 196608)))))), (((/* implicit */long long int) (_Bool)1))));
}
