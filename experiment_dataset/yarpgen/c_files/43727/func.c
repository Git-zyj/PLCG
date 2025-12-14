/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43727
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_12 = ((/* implicit */short) (-(arr_0 [i_0] [i_0])));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [8LL])));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (+(arr_6 [i_1] [(_Bool)1])));
        var_15 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) var_10)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-108)) : (-936555196)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_10 [(signed char)15] [(signed char)15] = ((/* implicit */signed char) max((104232924), (((/* implicit */int) (unsigned char)88))));
        var_16 = ((/* implicit */unsigned int) var_4);
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_7))))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), ((-(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
