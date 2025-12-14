/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191913
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
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((((/* implicit */int) var_15)) - (36)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_2 [0U] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned short) (+(((unsigned int) (-(((/* implicit */int) (unsigned char)122)))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    var_19 ^= ((/* implicit */unsigned long long int) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */short) (-(((unsigned long long int) (signed char)-122))));
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_3]))));
        var_21 *= ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) 1327974279867441255LL)))));
    }
}
