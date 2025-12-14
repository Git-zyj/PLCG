/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51338
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
    var_14 = ((/* implicit */int) max((var_14), (min((((((/* implicit */_Bool) var_10)) ? (((int) var_0)) : (((/* implicit */int) var_6)))), (min((((/* implicit */int) min((((/* implicit */short) (signed char)124)), ((short)20510)))), (((((/* implicit */int) var_6)) * (((/* implicit */int) var_7))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6864)) && (((/* implicit */_Bool) arr_1 [i_2 - 1]))))), (arr_5 [i_0 + 1] [i_0 + 1]))) << (((((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((long long int) (unsigned short)58671)) : (var_5))) - (58644LL)))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned int) arr_6 [i_0 - 1] [9] [i_2])) : (var_2)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(9042919692312787352LL))))));
}
