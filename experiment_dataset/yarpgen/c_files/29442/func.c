/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29442
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
    var_11 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) var_4)) > (var_7))) ? (((((/* implicit */_Bool) -2041230424)) ? (((/* implicit */int) (_Bool)1)) : (var_3))) : (((((/* implicit */int) (signed char)-48)) - (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 3801674926U)) : (arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_1] [i_2])))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_5 [i_0] [19U] [(_Bool)1] [20LL])) ? (arr_1 [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                    var_12 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) 3801674926U)) : (arr_0 [i_2 - 1] [i_2 - 1])))));
                }
            } 
        } 
        var_13 -= ((/* implicit */unsigned int) (_Bool)1);
    }
}
