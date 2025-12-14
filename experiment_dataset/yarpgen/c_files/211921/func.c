/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211921
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
    var_14 += ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) ((7ULL) > (12ULL)));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)15657)) && (((/* implicit */_Bool) (unsigned short)55121)))) ? (((/* implicit */int) (unsigned short)60560)) : ((~(var_10)))))) ? (2711568564828559028ULL) : (((/* implicit */unsigned long long int) 1380555782))));
                var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -848252885)) ? (((/* implicit */int) (unsigned short)65528)) : (1097785500)))) ? (((1566973371504993412ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (12829386338651550113ULL)));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((66039922838104766ULL) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 534773760)) : (7ULL)))));
            }
        } 
    } 
}
