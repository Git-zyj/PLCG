/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191368
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
    var_16 = ((/* implicit */unsigned short) var_9);
    var_17 -= ((unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (4736354390973793032LL))), (((/* implicit */long long int) ((int) var_3)))));
    var_18 = ((/* implicit */_Bool) var_8);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) (+(var_10))))))) ? (((/* implicit */long long int) var_14)) : (((max((((/* implicit */long long int) var_11)), (var_0))) ^ (((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-15)) & (((/* implicit */int) (_Bool)1))))) ? (min((2443712636U), (((/* implicit */unsigned int) arr_6 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((arr_4 [i_0] [i_0]) & (arr_1 [i_0] [i_0])))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (short)30716)) ^ (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)56)), ((unsigned short)12406)))) & (arr_1 [(short)12] [(short)12]))))))));
            }
        } 
    } 
}
