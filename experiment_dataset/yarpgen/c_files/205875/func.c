/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205875
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? ((+(-1LL))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_14))))) << ((((_Bool)1) ? (10LL) : (-1LL))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_19 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-32755))))) == ((+(-1LL))))));
        var_20 = ((/* implicit */unsigned int) 0ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((6LL) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-1LL)))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 2])))))));
        var_23 = ((/* implicit */unsigned char) ((arr_4 [i_1] [i_1 + 2]) && ((!(((/* implicit */_Bool) 10LL))))));
    }
}
