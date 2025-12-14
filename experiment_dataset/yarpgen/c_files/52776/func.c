/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52776
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_8 [i_0 - 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) (+(106864117)))))) && (((/* implicit */_Bool) ((signed char) ((arr_6 [i_0 + 1]) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_2))))))));
                arr_9 [i_1] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))), (((arr_4 [i_0] [i_0] [i_1]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0 - 1] [(_Bool)1] [i_1]))))));
            }
        } 
    } 
    var_16 += ((/* implicit */long long int) (~((~(-106864099)))));
}
