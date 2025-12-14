/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40061
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 2772275259U)) ? (((/* implicit */int) (short)-8404)) : (var_3))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)2729))))) : (max((8918837038091785304ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    arr_7 [i_2] [4U] [i_0] |= ((/* implicit */short) ((max((var_7), (((/* implicit */long long int) (!(((/* implicit */_Bool) 9100901729288899559LL))))))) > (((/* implicit */long long int) ((var_14) % (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((var_2) - (3468559289U)))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (-(((unsigned long long int) var_9))));
    var_18 = ((/* implicit */short) (signed char)30);
}
