/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211183
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
    var_10 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)38758))))) : (2329270569646813776ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [9ULL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) 281474976710400LL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (unsigned short)65535)))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 3] [i_1])) ? (arr_6 [(unsigned short)5] [i_0 - 3] [(unsigned char)19]) : (arr_6 [4LL] [i_0 - 3] [i_0 - 3]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))));
            }
        } 
    } 
}
