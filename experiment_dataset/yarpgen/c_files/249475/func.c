/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249475
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) : (((unsigned int) arr_1 [i_0] [i_1]))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (max((134217727U), ((-(62914560U)))))));
                var_21 += ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((4232052735U) << (((arr_1 [i_0] [i_1]) - (5855783340357244850LL)))))) : (arr_1 [i_0] [(unsigned short)14]));
                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) << (((/* implicit */int) arr_2 [i_0])))) << (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))));
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_3))));
}
