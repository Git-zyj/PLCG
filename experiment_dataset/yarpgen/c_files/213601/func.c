/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213601
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
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [(_Bool)1] [18LL] [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) - (var_5)))) ? (((/* implicit */int) (short)5698)) : (((/* implicit */int) var_11))))) ? ((~((~(var_5))))) : (((/* implicit */unsigned long long int) var_10))));
                    var_12 = ((/* implicit */unsigned short) max((((((((/* implicit */unsigned long long int) var_2)) >= (var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) var_9))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (var_6))))), (((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) var_3))))));
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */unsigned short) (-(var_2)));
    var_14 = ((/* implicit */unsigned long long int) (unsigned short)45963);
}
