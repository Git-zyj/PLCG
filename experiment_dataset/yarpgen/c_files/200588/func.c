/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200588
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) var_4));
    var_15 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
    var_16 = ((/* implicit */short) var_12);
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 1589831723))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = (+(((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (var_4))) - ((+(((/* implicit */int) var_6)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_0 [i_0 - 2] [i_0 - 2])))));
        var_18 = ((((/* implicit */_Bool) 3215813850U)) ? (((/* implicit */unsigned long long int) 1589831723)) : (300939014198109416ULL));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_1 [i_0 - 2]))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) ^ (arr_0 [i_0] [i_0 - 3])))));
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_19 = ((((min((((/* implicit */int) (unsigned char)228)), (-1589831717))) + (2147483647))) << (((/* implicit */int) ((unsigned char) ((_Bool) arr_0 [i_1 - 1] [i_1 - 1])))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [2ULL]);
        var_20 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (signed char)-113)))));
    }
}
