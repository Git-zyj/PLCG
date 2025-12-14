/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27064
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_2))));
    var_12 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((max((arr_1 [i_1] [i_0]), (((/* implicit */long long int) arr_3 [9LL] [i_1])))) % (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_0])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0]))))))))));
                arr_5 [i_0] |= ((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [16])) || (((/* implicit */_Bool) arr_1 [i_1] [(_Bool)1]))))), (((((((/* implicit */int) arr_3 [i_1] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_1] [i_0])) + (3146))) - (10)))))))) / (arr_1 [7LL] [13U]));
            }
        } 
    } 
    var_13 += var_4;
}
