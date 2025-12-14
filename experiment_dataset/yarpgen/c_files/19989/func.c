/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19989
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
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2133862226)) - (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */unsigned long long int) -2133862226)) : (var_1)))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (short i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_16 [i_3] [i_4 - 1] [i_3] [i_5] = ((/* implicit */signed char) var_1);
                    arr_17 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */int) arr_14 [i_4 - 3] [i_4] [i_5 - 1] [i_4 - 3])), (-2133862203))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (2084422445U)))), (((((/* implicit */_Bool) 2133862226)) ? (var_1) : (var_1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) -2133862210))) | (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))) : (((unsigned int) 2133862225))));
}
