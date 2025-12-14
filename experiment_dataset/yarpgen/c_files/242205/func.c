/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242205
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
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) var_11)) : (var_5))), (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-1863342720) + (2147483647))) << (0U)))) ? ((~(var_1))) : (min((var_1), (arr_5 [i_0] [11])))))) ? (((/* implicit */unsigned long long int) (+(min((var_11), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0] [i_0]))))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))));
                    var_16 ^= ((/* implicit */unsigned short) arr_10 [i_1] [i_2]);
                    var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) arr_5 [(short)2] [i_1]))))))), (arr_10 [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1863342719) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (max((1159571054598679624LL), (((/* implicit */long long int) (signed char)126))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) != (((var_8) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) : (((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
    var_19 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) var_8)))));
}
