/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3853
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
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (50904421U)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((int) (~(4244062874U))))) ? (max((((((/* implicit */_Bool) arr_4 [i_1])) ? (var_8) : (4244062871U))), (((/* implicit */unsigned int) arr_0 [i_0 + 2] [i_0])))) : (max((((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0]))), (arr_1 [i_1])))));
                    arr_8 [i_1] &= ((/* implicit */int) var_11);
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) 1662706216526772043LL))));
                    arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_2 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (50904425U)));
                }
            } 
        } 
    } 
}
