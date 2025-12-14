/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18994
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
    for (short i_0 = 3; i_0 < 6; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((var_3) | (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))))) < (min((var_12), (((/* implicit */unsigned long long int) var_9))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) var_10))))) < (((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    }
    for (short i_1 = 3; i_1 < 6; i_1 += 3) /* same iter space */
    {
        arr_4 [(short)2] = ((/* implicit */int) ((((_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_3)))) ? (max((min((var_3), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_6) < (((/* implicit */int) var_13)))))) < (((((/* implicit */_Bool) 144115188075855808LL)) ? (-144115188075855808LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
        arr_5 [i_1 - 2] = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */_Bool) 144115188075855808LL)) ? (-1535810996) : (((/* implicit */int) (unsigned char)137)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_13))))))));
    }
    var_16 = var_2;
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max(((unsigned char)23), ((unsigned char)0))))));
}
