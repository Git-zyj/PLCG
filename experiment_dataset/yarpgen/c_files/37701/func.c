/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37701
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_4 [i_0] = max((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (((int) arr_2 [i_0] [i_0])));
        var_10 = ((/* implicit */int) (-(max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) 12LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-14LL)))))));
        arr_5 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_11 = ((/* implicit */int) arr_6 [i_1]);
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -9LL)) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-105)))));
        arr_8 [i_1] = ((/* implicit */int) 4294967295U);
        var_13 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))));
    }
    for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        var_14 = 11LL;
        var_15 = ((/* implicit */long long int) ((((unsigned int) (unsigned short)26432)) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (unsigned char)153)) : (570877112))))))))));
        var_16 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26364)));
    }
    var_17 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned long long int) (unsigned char)255))));
}
