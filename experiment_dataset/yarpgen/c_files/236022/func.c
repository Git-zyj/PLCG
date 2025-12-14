/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236022
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
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        arr_3 [5U] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])))))) && (((/* implicit */_Bool) max((arr_0 [i_0 - 2] [i_0 + 2]), (((/* implicit */short) var_8)))))));
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)103)) ? (((((/* implicit */_Bool) (unsigned short)23457)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (signed char)15)))) : (((/* implicit */int) arr_2 [i_0])))) == (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) arr_2 [i_0 - 2])))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        var_11 += ((/* implicit */unsigned int) min(((-(140600049401856LL))), (min((((((/* implicit */_Bool) (unsigned char)32)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) arr_2 [17ULL])) : (((/* implicit */int) (_Bool)1)))))))));
        var_12 += ((/* implicit */short) max(((-(arr_1 [i_1 + 1]))), (min((arr_1 [i_1 + 3]), (arr_1 [i_1 - 1])))));
    }
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)56)) || (((/* implicit */_Bool) var_7))))) << (((/* implicit */int) var_4))))), ((-(((((/* implicit */_Bool) var_3)) ? (var_6) : (var_6))))))))));
}
