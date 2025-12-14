/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196806
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) & (((/* implicit */int) arr_3 [6])))) << (((((((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_1]))))))) - (654342165515829771ULL)))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [0] [i_1] [0]);
                arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1]) > (((/* implicit */int) var_5)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (signed char)10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_9))))) : (min((13349737766085297895ULL), (((/* implicit */unsigned long long int) (signed char)24)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                arr_9 [i_1] [i_1 - 3] = ((var_0) * (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 - 1] [i_1])) <= (arr_5 [i_1] [i_1 - 1] [i_1])))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_11);
}
