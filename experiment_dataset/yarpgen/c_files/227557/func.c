/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227557
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
    var_15 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) (unsigned char)163)), (1943584081U))))), (var_3));
    var_16 = ((/* implicit */unsigned char) var_9);
    var_17 -= ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1]))))), (((/* implicit */int) var_12))));
                    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_2 [i_0]) | (((/* implicit */unsigned long long int) arr_5 [i_2]))))) ? (arr_8 [i_2] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_12))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_3);
}
