/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52421
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) ((((int) var_2)) | (min((var_5), (((/* implicit */int) (_Bool)1)))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)236)) : (222943535)))) ? (728459689U) : (298899905U)));
                var_21 = ((/* implicit */int) (+(((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (arr_1 [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_1);
    var_23 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (var_7)))) : (((/* implicit */int) var_18))))));
    var_24 = ((/* implicit */short) ((((_Bool) -222943541)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (min((4396972769280ULL), (((/* implicit */unsigned long long int) (short)30710)))))))) : (4294967295U)));
}
