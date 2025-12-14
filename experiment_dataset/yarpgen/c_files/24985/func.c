/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24985
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
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3745859640U)))))), (max((6859236182518331190LL), (((/* implicit */long long int) arr_2 [i_1]))))));
                var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4762546583065283715ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244)))))) ? (4163340706U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)12))))))) / ((+(arr_6 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_5);
    var_17 = ((/* implicit */unsigned char) var_5);
}
