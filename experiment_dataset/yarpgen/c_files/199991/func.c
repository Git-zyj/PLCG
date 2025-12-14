/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199991
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
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((signed char) ((long long int) ((unsigned short) arr_4 [i_2] [i_0] [i_0]))));
                    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 234881024U)) == (var_2))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) ((signed char) (signed char)79))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((var_7) & (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2] [i_0])) - (((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 2] [i_0])))))));
                    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_0] [2] [(short)0]))));
                }
            } 
        } 
    } 
}
