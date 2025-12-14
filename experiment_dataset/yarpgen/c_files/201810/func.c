/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201810
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
    var_12 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned char) arr_1 [i_0]))))), (max((((/* implicit */unsigned short) arr_0 [i_0])), (var_2)))));
        var_13 = ((/* implicit */long long int) max((max((((/* implicit */short) (signed char)-125)), ((short)12339))), (((/* implicit */short) max(((signed char)57), (arr_0 [i_0]))))));
        arr_3 [i_0] = max((max((((/* implicit */unsigned short) var_5)), (var_10))), (((/* implicit */unsigned short) min((arr_1 [i_0]), (arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) max((((/* implicit */int) min((max((arr_4 [i_1]), (((/* implicit */short) var_11)))), (max((((/* implicit */short) arr_1 [i_1])), ((short)12326)))))), (max((((/* implicit */int) arr_1 [i_1])), (min((var_4), (((/* implicit */int) arr_4 [i_1]))))))));
        var_15 = ((/* implicit */unsigned short) min((min((max((9151314442816847872ULL), (((/* implicit */unsigned long long int) (short)12346)))), (((/* implicit */unsigned long long int) var_5)))), (max((((/* implicit */unsigned long long int) min((arr_4 [i_1]), (arr_4 [i_1])))), (18446744073709551615ULL)))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (short)-12339)), (-599197552)));
        arr_9 [i_2] [i_2] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])), (0ULL))), (((/* implicit */unsigned long long int) max((arr_6 [i_2] [i_2]), (((/* implicit */int) var_2)))))));
    }
    var_16 ^= ((/* implicit */unsigned int) var_6);
}
