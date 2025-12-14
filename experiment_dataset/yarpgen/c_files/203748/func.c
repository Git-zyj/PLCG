/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203748
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_2]))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)0))))))) : (((((/* implicit */_Bool) (+(var_13)))) ? (785394083U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_10)))))))));
                    var_16 &= ((/* implicit */unsigned short) ((max((min((var_3), (((/* implicit */unsigned long long int) -4932180141717281915LL)))), (((/* implicit */unsigned long long int) ((var_4) < (var_7)))))) < (((/* implicit */unsigned long long int) arr_4 [i_0]))));
                }
            } 
        } 
    } 
    var_17 = (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) 116651614105366019ULL)) ? (11589242150693245838ULL) : (827283547604846002ULL))))));
    var_18 = ((/* implicit */_Bool) (short)-9);
}
