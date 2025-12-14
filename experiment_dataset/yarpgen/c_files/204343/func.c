/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204343
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) 536870911U);
                    arr_10 [i_0] [9] [i_0] = ((/* implicit */int) arr_7 [i_1]);
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (3758096385U) : (((/* implicit */unsigned int) 1119945296))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) / (arr_7 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) <= (arr_5 [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_11);
}
