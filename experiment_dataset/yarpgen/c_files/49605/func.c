/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49605
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (short)-14276))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_3))));
                    var_19 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned short) (signed char)-19)), (var_15))));
                }
            } 
        } 
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (max((-6LL), (((/* implicit */long long int) (short)-14276)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1120015112)) ? (-4) : (((/* implicit */int) max(((unsigned short)10350), ((unsigned short)10350)))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (max((arr_3 [i_0] [i_0]), (((/* implicit */int) (unsigned short)13307)))))) : ((~(((/* implicit */int) (unsigned short)55177))))));
        var_22 *= ((/* implicit */_Bool) ((unsigned long long int) var_10));
    }
}
