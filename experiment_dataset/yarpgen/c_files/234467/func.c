/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234467
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
    var_14 = ((/* implicit */short) ((long long int) ((unsigned int) ((signed char) var_8))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_15 -= ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) ((unsigned char) var_13))));
        var_16 |= ((/* implicit */unsigned char) ((signed char) ((int) ((unsigned short) (unsigned char)233))));
        var_17 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) ((_Bool) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) var_3)));
        var_19 -= ((/* implicit */unsigned char) ((unsigned int) ((int) (unsigned char)3)));
        var_20 = ((/* implicit */_Bool) ((long long int) ((signed char) var_9)));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((signed char) ((unsigned char) arr_4 [i_1])));
    }
    for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] [i_2 + 1] = ((long long int) ((unsigned short) ((unsigned short) var_10)));
        var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) ((unsigned char) 1379227889))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((unsigned short) ((int) ((unsigned long long int) -8625141349038023033LL))));
}
