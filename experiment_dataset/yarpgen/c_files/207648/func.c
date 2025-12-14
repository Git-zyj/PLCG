/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207648
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)-14937))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7)));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-49)) ? (var_1) : (((/* implicit */unsigned long long int) -5888781448937766608LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned char)201)))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (max((2154318419855307319LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
                    arr_6 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [5LL])) ? ((+(((/* implicit */int) arr_5 [i_2])))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0 + 1]))))));
                }
            } 
        } 
    } 
}
