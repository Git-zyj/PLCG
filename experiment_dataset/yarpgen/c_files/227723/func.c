/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227723
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
    var_20 *= var_17;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 ^= max((14390731569326704662ULL), (((var_0) * (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0])))));
                var_22 = ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -699608008)) ? (((/* implicit */unsigned long long int) var_10)) : (14390731569326704662ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32753))) : (arr_1 [i_0]))))))) : (((/* implicit */int) ((min((((/* implicit */int) (_Bool)1)), (-572072676))) != (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
