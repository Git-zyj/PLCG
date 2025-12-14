/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34742
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
    var_12 = ((int) (!(((/* implicit */_Bool) min((var_4), (var_2))))));
    var_13 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) * (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
    var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_7))))) : (((/* implicit */int) ((unsigned short) var_4)))))), (((((/* implicit */_Bool) (-(var_11)))) ? (((var_9) | (var_9))) : (((/* implicit */unsigned long long int) (-(var_1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_15 &= ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) (unsigned char)238)) ? (arr_0 [i_0] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32200)))))));
        arr_2 [i_0] = max((max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-2147483647 - 1)))))), (arr_1 [i_0 - 1]))), (((((arr_1 [i_0]) + (2147483647))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_10)) : (var_11))) - (18446744072424712673ULL))))));
    }
}
