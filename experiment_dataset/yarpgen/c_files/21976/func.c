/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21976
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
    var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_3))))), (min((var_11), (((/* implicit */short) (unsigned char)59))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */short) ((unsigned char) var_12));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_2])))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    arr_10 [i_0] [i_0] [(short)2] [(short)2] = ((/* implicit */long long int) ((short) min((((/* implicit */short) (signed char)3)), ((short)0))));
                }
            } 
        } 
    } 
}
