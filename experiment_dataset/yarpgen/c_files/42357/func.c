/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42357
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
    var_16 -= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_9)))) ? (((/* implicit */int) min((var_10), (var_10)))) : (var_6))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_0] [i_0])), (16111127951347569654ULL)))) ? (((/* implicit */int) ((signed char) 16111127951347569658ULL))) : ((~(((/* implicit */int) var_14))))))), (arr_8 [i_2] [17] [i_2] [7LL])));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_0 [i_0] [(unsigned char)17])))) ? (((((/* implicit */_Bool) var_9)) ? (((unsigned int) var_6)) : ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                    var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)109)))))));
                }
            } 
        } 
    } 
}
