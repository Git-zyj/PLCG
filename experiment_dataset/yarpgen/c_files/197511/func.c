/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197511
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((int) ((((/* implicit */int) ((_Bool) 589485066))) - ((-(((/* implicit */int) (unsigned short)32738))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -589485067)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)85))) : ((-(4036628975148564370LL)))));
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((((17694989041970711121ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)85)) || (((/* implicit */_Bool) var_5))))) < (min((2076983864), (((/* implicit */int) (unsigned char)12))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */int) var_1);
}
