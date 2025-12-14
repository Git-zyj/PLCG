/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243307
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
    var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min(((unsigned short)60185), (var_13))))) ? (((((/* implicit */int) var_3)) << ((((~(((/* implicit */int) var_9)))) + (56076))))) : (((/* implicit */int) (unsigned short)20616))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((arr_3 [i_0]) << (((((/* implicit */int) var_8)) - (105))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((arr_3 [i_0]) - (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))))) - (2127380282961946524ULL)))))) : (((/* implicit */long long int) ((((arr_3 [i_0]) << (((((/* implicit */int) var_8)) - (105))))) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((arr_3 [i_0]) - (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))))) - (2127380282961946524ULL))) - (7800032817088991204ULL))))));
                    arr_9 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 4] [i_2 - 4] [i_2 - 2] [i_2 - 4]))))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) var_3)) : (var_2))) : (((/* implicit */int) min(((unsigned short)27368), ((unsigned short)27353))))))));
                    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) min((-353564538), (((/* implicit */int) var_10)))));
                }
            } 
        } 
    } 
}
