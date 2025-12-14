/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247249
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
    var_11 = ((/* implicit */short) var_3);
    var_12 = ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)31206)) : (134217727))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (6ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1055713162U)) ? (var_10) : (((/* implicit */unsigned long long int) 0)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (+(arr_0 [i_0 + 1] [i_0])));
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0 - 1]);
                var_13 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                arr_10 [i_0] [i_0 + 1] [i_1] = ((((/* implicit */_Bool) arr_5 [i_1] [6])) ? ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_5 [i_0] [(_Bool)1]))))))) : (((/* implicit */int) ((((16ULL) >> (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))))));
            }
        } 
    } 
}
