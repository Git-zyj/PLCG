/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50495
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_12 |= min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0]))))), (arr_7 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (-299167721) : (((/* implicit */int) arr_3 [i_2])))) + (((var_2) ? (1467504960) : (((/* implicit */int) arr_5 [i_0 + 1]))))))));
                    arr_9 [i_0] [i_0] [i_1] [2ULL] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_2])), (arr_1 [i_0 + 1] [i_2])))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)4])))))));
                }
            } 
        } 
    } 
    var_13 |= ((/* implicit */unsigned int) -1467504969);
    var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23423))) : (4198216859U)));
}
