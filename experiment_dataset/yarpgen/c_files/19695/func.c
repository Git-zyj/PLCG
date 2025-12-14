/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19695
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~(max((var_1), (((/* implicit */int) (unsigned char)1))))));
        arr_4 [17U] [17U] = ((/* implicit */unsigned char) (unsigned short)25144);
    }
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_7 [i_1]))));
        var_14 = ((/* implicit */short) ((signed char) (-(min((((/* implicit */int) arr_5 [i_1])), (arr_6 [i_1 + 1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_10 [i_2] [1U] = ((/* implicit */unsigned long long int) arr_5 [i_2]);
        arr_11 [i_2] = ((max((arr_8 [(short)5] [i_2]), (((((/* implicit */_Bool) arr_5 [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))) % (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (var_3))) >> (((((/* implicit */_Bool) (signed char)6)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13)))))))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) var_3)) ? (((0LL) - (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -2517630066961060559LL))))))))));
    var_16 = ((/* implicit */int) ((unsigned long long int) (unsigned short)37143));
}
