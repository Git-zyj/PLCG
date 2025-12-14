/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248470
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) -12)) : (((long long int) (!(((/* implicit */_Bool) (short)-32050)))))));
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
        var_21 = ((/* implicit */int) -3692185458601603361LL);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) var_15);
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (short)20718))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) 3692185458601603360LL);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3692185458601603353LL)) ? (-3692185458601603347LL) : (3692185458601603352LL)));
        arr_12 [i_2] [i_2] = ((/* implicit */int) var_16);
    }
    var_24 = ((/* implicit */int) var_14);
}
