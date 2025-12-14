/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219396
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
    var_11 = ((/* implicit */int) ((((var_7) < (var_1))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((max((var_6), (((/* implicit */long long int) var_0)))) | (var_6)))));
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */int) var_4)))))));
                var_14 = ((((/* implicit */int) arr_3 [i_0] [i_0])) <= (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) / (arr_2 [i_1] [11ULL] [(short)6]))))));
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_5), (arr_3 [(unsigned char)1] [i_1]))))))) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (unsigned short)34032))));
            }
        } 
    } 
}
