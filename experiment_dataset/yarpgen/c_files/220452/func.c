/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220452
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0 + 4]);
        var_10 |= ((/* implicit */unsigned short) arr_0 [i_0] [i_0 - 1]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 22; i_1 += 4) 
    {
        arr_7 [i_1] |= ((/* implicit */signed char) arr_5 [i_1 - 4] [i_1 + 1]);
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : (var_0)));
        var_11 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)25422)) : (((/* implicit */int) (unsigned char)151))));
    }
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_1), (((/* implicit */short) var_9)))))))), (var_5)));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (max((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_1)))))))))));
    var_14 = ((/* implicit */unsigned int) (unsigned short)49291);
    var_15 += ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (var_3))), (max((max((var_0), (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32759)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25422))))))))));
}
