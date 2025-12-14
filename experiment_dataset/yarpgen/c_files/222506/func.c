/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222506
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [(unsigned char)4] = ((/* implicit */_Bool) var_2);
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (3516556599171123242ULL)))) ? ((-(arr_4 [i_0]))) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((1586271047) < (((/* implicit */int) var_7))))) : (max((var_2), (arr_2 [i_0] [i_0])))))));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)10] [i_1])) ? (arr_2 [i_0] [i_1]) : (var_2)))) & (min((((/* implicit */unsigned int) arr_4 [i_1])), (var_10))))))))));
                var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(arr_2 [4ULL] [i_1])))) : (((unsigned long long int) arr_2 [i_0] [i_1]))));
                var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) (short)-22553))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (var_9)))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned char) var_5);
}
