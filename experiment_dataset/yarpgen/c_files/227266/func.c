/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227266
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((arr_2 [i_2]) == (((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)64)), (arr_4 [i_0 + 3])))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_0 + 3]))) : (max((arr_4 [i_0 + 3]), (arr_4 [i_0 + 3])))));
                    arr_9 [i_0] = max((-1978100892), (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_0);
    var_20 = ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) < (var_4)))))));
    var_21 = ((/* implicit */long long int) 2098093187);
}
