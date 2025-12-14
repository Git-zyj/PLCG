/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44909
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((var_2) || (((/* implicit */_Bool) var_12)))))));
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551604ULL))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((long long int) max((17), (((/* implicit */int) (!(((/* implicit */_Bool) 11ULL)))))))))));
    var_21 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) <= (var_5))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((((/* implicit */_Bool) max((var_11), (arr_6 [i_2] [i_1 - 3] [(_Bool)1])))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2])) ? (arr_8 [i_1] [i_1 + 3] [i_1] [i_1]) : (arr_5 [i_0] [i_1] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_2])) : (((/* implicit */int) var_7))))))))))));
                    var_23 |= ((/* implicit */unsigned int) ((short) (((-(arr_10 [i_0] [i_0] [i_1] [(unsigned char)17]))) >= (((/* implicit */int) arr_6 [i_1 - 4] [i_2 - 2] [i_2])))));
                }
            } 
        } 
    } 
}
