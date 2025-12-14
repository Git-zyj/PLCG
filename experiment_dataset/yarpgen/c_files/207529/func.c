/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207529
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)11)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((-33554432) + (33554445))) - (13)))))) : (((((/* implicit */_Bool) 2925069379U)) ? (536870911LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_18 = ((/* implicit */int) 536870911LL);
                    var_19 = ((/* implicit */unsigned int) 33554426);
                    var_20 += min((((((/* implicit */_Bool) (~(-33554432)))) ? (max((536870911LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0]), (arr_6 [i_2 + 1] [i_1] [i_0]))))))), (min((((/* implicit */long long int) (short)2)), (((long long int) (short)32766)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_12))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24338)) ? (536870911LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24328)))));
    var_23 = (-(((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */long long int) var_10)), (var_17))))));
}
