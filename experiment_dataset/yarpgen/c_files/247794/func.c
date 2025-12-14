/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247794
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] &= ((/* implicit */long long int) (~(max((((/* implicit */int) arr_4 [i_0] [i_1])), (313118557)))));
                arr_8 [i_0] [i_1] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_10 -= (!(((/* implicit */_Bool) var_5)));
    var_11 -= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((signed char) (_Bool)1))), (((var_0) % (((/* implicit */unsigned int) var_5)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4293111763U)) && (var_6))))) % (((unsigned int) var_3))))));
    var_12 = ((max((((var_8) + (((/* implicit */long long int) ((/* implicit */int) (short)-32763))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (-1811515560) : (((/* implicit */int) (short)24))))))) == (var_1));
}
