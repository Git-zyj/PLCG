/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245463
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
    var_15 = ((/* implicit */unsigned short) min((var_13), (((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) var_9)))) % (((/* implicit */long long int) var_5))))));
    var_16 = ((max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_2)) ? (var_13) : (var_2))))) + (((/* implicit */long long int) (-((+(var_3)))))));
    var_17 = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((var_0) << (((var_2) + (1918831203882020239LL)))))) ? (var_2) : (((/* implicit */long long int) (+(((/* implicit */int) var_7))))))) : (((/* implicit */long long int) var_5)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2)))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_11)))));
        var_18 = ((/* implicit */unsigned int) var_11);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_8), (var_12)))) < (((/* implicit */int) ((var_14) < (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_20 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_13))))))), (max((var_4), (((/* implicit */long long int) var_9)))));
        arr_5 [i_1] = ((((((/* implicit */long long int) ((/* implicit */int) var_7))) < (var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) (~(var_4)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((-9223372036854775794LL) > (9223372036854775794LL))))))));
        var_21 = ((/* implicit */long long int) min((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_8)))), (((/* implicit */int) var_1))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((-15LL) >= (-8752318927049575131LL)));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) min((((long long int) var_11)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40760))) / (8752318927049575157LL)))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = min(((~(min((4743474994578339592LL), (((/* implicit */long long int) (unsigned short)23351)))))), (((/* implicit */long long int) var_8)));
        var_22 ^= ((((/* implicit */_Bool) min((max((var_13), (((/* implicit */long long int) var_7)))), (max((((/* implicit */long long int) var_12)), (var_0)))))) ? (((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((long long int) var_8))));
    }
}
