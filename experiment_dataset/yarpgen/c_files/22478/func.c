/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22478
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] = arr_4 [i_2] [i_2] [i_1] [i_2];
                    arr_7 [i_2] [i_1] [(short)7] = ((/* implicit */int) (((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)32)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_1] [i_2])) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (short)18353)) : (((/* implicit */int) var_13)))))))));
                    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_5)), ((short)18370)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)12053)) ? (var_15) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24714))) : (arr_0 [i_1])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_3);
}
