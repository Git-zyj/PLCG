/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37473
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_3);
        arr_4 [i_0] [i_0] = (-(min((4058304665010772825LL), (((/* implicit */long long int) 2653000123U)))));
        var_19 = ((/* implicit */unsigned long long int) var_16);
        arr_5 [i_0] = ((/* implicit */int) var_6);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((1641967176U) > (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)14105)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((-1840649090) == (((/* implicit */int) var_3)))))))))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)98)))))));
        arr_10 [i_1] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (var_8))), (min((((/* implicit */unsigned long long int) arr_8 [i_1])), (8388607ULL)))));
        var_22 ^= ((/* implicit */short) (-(2653000123U)));
    }
    var_23 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4709488946369915338LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)0))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((-5817783558386605067LL) < (((/* implicit */long long int) var_16))))))), (((/* implicit */int) var_4)));
}
