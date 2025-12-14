/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238550
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
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((max((5ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_10)))))), (((/* implicit */unsigned long long int) min((2601096653U), (((/* implicit */unsigned int) 244192985)))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) -244192986)), (1532658992U))), (((/* implicit */unsigned int) min((((/* implicit */int) max((var_11), (var_11)))), (((((/* implicit */int) var_2)) - (((/* implicit */int) var_9)))))))));
        var_12 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4))) / (var_1))) : (((/* implicit */long long int) (~(var_10))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_10 [16LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-44)))) << (((max((var_0), (((/* implicit */long long int) var_6)))) - (5077714221978054976LL)))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) : (((((/* implicit */_Bool) -638105726)) ? (6439259609440794713LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157)))))));
        var_14 -= ((/* implicit */_Bool) max((max((6439259609440794723LL), (((/* implicit */long long int) (unsigned short)0)))), (((/* implicit */long long int) (short)-25381))));
        arr_11 [i_2] = ((/* implicit */signed char) 11978445182757276836ULL);
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (var_3))))) <= (2762308302U)))), (((short) var_1)))))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) var_9))))), (var_0)));
}
