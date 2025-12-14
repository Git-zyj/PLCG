/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240453
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) 3660062178U);
                    var_13 = (~((~(((/* implicit */int) (unsigned char)147)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (5613166347468007665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)40)) ? (634905118U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7)))))) : (max((11458968552540904839ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)60674))))) ? ((((_Bool)0) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13147)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)))))))));
    var_15 = ((/* implicit */unsigned short) var_5);
    var_16 = ((/* implicit */unsigned char) var_1);
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_8))));
}
