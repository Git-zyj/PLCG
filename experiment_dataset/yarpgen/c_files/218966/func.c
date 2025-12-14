/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218966
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((long long int) (unsigned char)180)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((-(arr_2 [i_0 - 2])))));
    }
    var_12 *= ((/* implicit */unsigned int) (unsigned char)93);
}
