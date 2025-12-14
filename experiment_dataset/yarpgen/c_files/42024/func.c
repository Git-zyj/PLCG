/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42024
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
    var_17 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (arr_0 [i_0 + 2] [(signed char)8])))) - (((((/* implicit */_Bool) (unsigned short)34659)) ? (arr_2 [i_0] [(short)7] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((var_8) ^ (8455323349153139660ULL))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)51087)))))));
                arr_5 [i_1] [i_1] [i_0 + 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (2706192824U)))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_15) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (var_9))))) : (arr_3 [i_1]))) - (56939U)))));
                arr_6 [i_0] [i_1] [(unsigned short)8] = ((/* implicit */unsigned int) ((short) (signed char)-111));
            }
        } 
    } 
}
