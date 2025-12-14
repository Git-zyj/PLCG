/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201071
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */int) ((0) != (-1312943241)))), ((+((~(1312943241))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) (short)29691)) ? (-1) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */int) ((unsigned long long int) (((_Bool)0) ? (-449930491) : (((/* implicit */int) (signed char)41)))));
        var_20 = (_Bool)1;
        var_21 ^= max((((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (signed char)0)))), (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -905486791945860208LL))))), (((unsigned short) (signed char)-1))))));
    }
    for (int i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        arr_5 [i_1 + 1] [i_1] = ((/* implicit */int) arr_3 [i_1 + 2]);
        var_22 += ((/* implicit */unsigned short) (-((~(var_12)))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-40))));
    }
}
