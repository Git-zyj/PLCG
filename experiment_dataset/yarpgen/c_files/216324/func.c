/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216324
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 2])) ? (((/* implicit */unsigned int) arr_8 [i_1 - 1])) : (arr_6 [(signed char)11] [i_0] [i_0 - 1])))) ^ ((((!(((/* implicit */_Bool) (signed char)-39)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41474)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [0] [i_1] [i_2 + 2]))))) : (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) var_0))))))));
                    var_16 += var_6;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_7);
}
