/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211703
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((-(172398928041432118LL))) : (((/* implicit */long long int) ((unsigned int) var_7)))))) : (((((/* implicit */_Bool) max((172398928041432124LL), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = 6140800416206340161LL;
                arr_5 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_2)))));
            }
        } 
    } 
}
