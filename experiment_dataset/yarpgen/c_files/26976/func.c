/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26976
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
    var_18 ^= ((/* implicit */unsigned char) var_9);
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_22 = ((/* implicit */unsigned char) max((min((8766191842964257358ULL), (((/* implicit */unsigned long long int) (signed char)-56)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (max((1U), (((/* implicit */unsigned int) arr_0 [i_1] [8U])))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_1 [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (var_3))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (signed char)85))))))))));
    }
    for (unsigned short i_2 = 4; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) - ((~(arr_5 [i_2] [i_2])))));
        var_26 = ((/* implicit */int) (!(((arr_5 [i_2 - 4] [i_2 + 2]) <= (((/* implicit */unsigned long long int) var_16))))));
    }
    for (unsigned short i_3 = 4; i_3 < 20; i_3 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) arr_8 [i_3 - 4]);
        var_28 = ((/* implicit */long long int) (short)-21035);
        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)72)), (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)196))))))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)-56)))) : (((/* implicit */int) arr_6 [i_3 + 2])))))));
    }
}
