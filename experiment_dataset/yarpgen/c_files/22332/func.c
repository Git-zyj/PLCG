/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22332
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) -3375546935703566995LL);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 4194303U)) == (-3375546935703566995LL)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (3375546935703566980LL) : (3375546935703567001LL)))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)2480)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) (~((-(((/* implicit */int) (unsigned char)140))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) var_5);
    }
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_1))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_5))));
}
