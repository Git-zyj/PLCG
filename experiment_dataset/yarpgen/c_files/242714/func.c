/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242714
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
    var_19 = max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))))));
    var_20 = ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) max(((unsigned char)0), ((unsigned char)241)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)31336))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))))) ? (((arr_0 [i_1 + 2]) / (arr_0 [i_1 - 2]))) : (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)235), ((unsigned char)13))))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
