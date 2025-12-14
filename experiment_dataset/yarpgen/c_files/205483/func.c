/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205483
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 &= ((/* implicit */long long int) (-(arr_4 [i_0] [(unsigned short)8] [i_1])));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_9))))), (arr_2 [i_0] [i_1])))));
                var_19 = ((/* implicit */unsigned char) (-(((int) var_13))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_7);
}
