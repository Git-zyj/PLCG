/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19314
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4089917032U)) || (((/* implicit */_Bool) 18446744073709551606ULL))));
                    var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1]))))) > (18446744073709551614ULL)));
                    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) var_8))))) ? (max((arr_5 [i_2] [i_1 - 1]), (((/* implicit */unsigned int) var_10)))) : (var_3))) > (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2] [i_2] [(short)12])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) > ((-(18446744073709551606ULL)))));
    var_14 = ((/* implicit */unsigned short) var_3);
    var_15 = ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */unsigned char) var_6);
}
