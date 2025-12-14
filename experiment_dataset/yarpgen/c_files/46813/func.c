/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46813
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (var_18)))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_2 [i_1] [i_0]))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (unsigned char)18))));
                arr_5 [(_Bool)1] [(signed char)3] [i_1] = ((/* implicit */short) ((unsigned short) ((arr_3 [i_0]) % (var_11))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_18);
    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) var_0)) : (var_8)));
    var_25 = ((/* implicit */short) ((70368744177663ULL) == (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (70368744177664ULL)))));
}
