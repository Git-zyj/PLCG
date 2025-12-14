/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41955
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
    var_20 = ((/* implicit */short) ((((/* implicit */int) (((-(((/* implicit */int) (short)1792)))) == (((/* implicit */int) min(((unsigned short)4096), (((/* implicit */unsigned short) (short)-1799)))))))) ^ (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]);
                var_22 = arr_0 [i_0] [i_1];
                arr_5 [i_0] [i_1] &= ((/* implicit */short) ((8441326677655782894ULL) <= (((/* implicit */unsigned long long int) ((int) arr_2 [i_1 + 2] [i_1 + 1])))));
                var_23 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (5358802932907917006ULL) : (arr_0 [i_1] [i_0])))) && (((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_3 [(unsigned short)17] [i_1]))))))) << ((-(18446744073709551615ULL)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (short)-256)) : (((/* implicit */int) var_7))))))))));
}
