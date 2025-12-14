/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235471
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
    var_13 &= ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1803263408)) ? (arr_2 [i_0]) : (((/* implicit */long long int) 443390371))))) ? (((arr_0 [i_1] [i_0]) ? (2474796556U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))))), ((+(((((/* implicit */_Bool) -431854835)) ? (72448799U) : (72448799U)))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(864751512))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned short)24086))) ? (1567598894U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
}
