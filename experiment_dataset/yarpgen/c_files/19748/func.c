/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19748
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
    var_10 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            var_11 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (1715069651)))));
            var_12 ^= ((/* implicit */int) (-((~(547320355974651584LL)))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_0])) ^ (max((max((arr_7 [(unsigned char)8]), (((/* implicit */long long int) 3200421800U)))), (((/* implicit */long long int) arr_8 [i_0]))))));
            var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((int) 547320355974651584LL)) + (2147483647))) >> (((max((((/* implicit */long long int) (_Bool)0)), (arr_6 [i_0] [i_2] [i_2 - 2]))) - (1522025632930618869LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8429010122118337992LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_3 [i_0] [(signed char)8] [i_0])))) ? (var_3) : (((/* implicit */unsigned int) (-(1715069655))))))));
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) (_Bool)0);
        }
        var_15 = ((((/* implicit */_Bool) 3616159391310695564LL)) || (((/* implicit */_Bool) arr_0 [i_0])));
    }
}
