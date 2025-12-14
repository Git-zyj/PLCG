/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22242
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
    var_15 = var_12;
    var_16 = ((/* implicit */_Bool) ((var_6) ? (((((/* implicit */int) (signed char)28)) << (((1057777299U) - (1057777293U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4851)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (signed char)-74))))) ? (((((/* implicit */_Bool) (short)-27919)) ? (2046586858) : (65535))) : (((var_6) ? (((/* implicit */int) (signed char)-74)) : (-1876570992)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_8) : (var_12)));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((626506976010468882LL), (((/* implicit */long long int) (signed char)-55))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (2288546320U)));
                }
            } 
        } 
    } 
}
