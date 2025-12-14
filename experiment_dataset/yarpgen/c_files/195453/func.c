/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195453
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
    var_14 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_0]) : (-7143295302054268221LL)))) & (((unsigned long long int) arr_3 [i_0] [i_0])))) : (arr_1 [i_0])));
                var_15 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (((+(15557776419635219896ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) % ((~(8589934591LL)))));
            }
        } 
    } 
}
