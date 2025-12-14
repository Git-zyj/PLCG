/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241984
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
    var_12 &= ((/* implicit */_Bool) var_7);
    var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_6)) : (-5552326678724843488LL))) >> (((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) - (17808067576855214840ULL)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (var_7)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))));
                arr_6 [i_0] [i_0] = (-(var_7));
                var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_0 [i_0])) < (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_3 [i_0])))));
            }
        } 
    } 
}
