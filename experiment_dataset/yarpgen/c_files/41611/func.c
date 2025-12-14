/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41611
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) max((max(((unsigned short)0), ((unsigned short)3))), (var_13)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) arr_0 [i_0])))))) > (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)65521)))))))));
                    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))))) : (max((((/* implicit */long long int) var_4)), (var_0)))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (unsigned short)65533)) / (((/* implicit */int) (signed char)-118)))));
                }
            } 
        } 
    } 
}
