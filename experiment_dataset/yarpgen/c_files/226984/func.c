/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226984
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_12)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)22385)) ? (((/* implicit */int) (unsigned short)62136)) : (((/* implicit */int) (short)-22061))));
                    arr_6 [i_0] = ((signed char) arr_0 [i_1 - 1] [i_0 - 1]);
                    arr_7 [i_1] [i_1 - 1] = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) ((unsigned short) var_10))), (min((((/* implicit */long long int) (unsigned char)213)), (-7207646735351600035LL)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)52034)), ((((-(8740748252658957674LL))) - (-7207646735351600016LL)))));
}
