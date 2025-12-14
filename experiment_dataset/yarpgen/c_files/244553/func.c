/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244553
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) (short)-25685)) : (((((/* implicit */int) var_0)) & (var_2)))))) & (var_1))))));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) 16432704723228861820ULL))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_13 = max((((/* implicit */int) min((arr_1 [i_0 + 2] [i_0 + 2]), ((!(((/* implicit */_Bool) var_8))))))), ((~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))));
        arr_3 [i_0 - 1] = ((/* implicit */short) ((int) min((arr_2 [i_0 + 2] [i_0 - 1]), ((signed char)-53))));
        arr_4 [i_0 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-30))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_14 ^= (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5))), (((var_7) ^ (16432704723228861824ULL)))))));
        var_15 = ((/* implicit */unsigned int) min((min((((arr_7 [i_1]) ^ (arr_5 [i_1] [i_1]))), (arr_7 [i_1]))), (min((arr_5 [i_1] [i_1]), (((/* implicit */long long int) arr_8 [i_1]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) var_3);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_7)) ? (-1072401685) : (1072401684))), (min((((/* implicit */int) (signed char)-8)), (arr_11 [i_2])))))), ((+(max((arr_5 [i_2] [i_2]), (((/* implicit */long long int) (unsigned short)7495))))))));
        var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_5 [(_Bool)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [16] [i_2])))))))) || (((/* implicit */_Bool) (unsigned short)55103))));
    }
}
