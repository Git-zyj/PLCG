/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196952
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
    var_18 &= ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647))));
                var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((((unsigned long long int) 1197838367)), (((/* implicit */unsigned long long int) var_7)))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) & (arr_4 [i_0] [i_0])))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) ((var_7) & (var_15)))) ? (((int) 1169113240U)) : (((/* implicit */int) var_12))))));
            }
        } 
    } 
}
