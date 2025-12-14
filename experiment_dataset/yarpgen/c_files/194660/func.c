/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194660
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
    var_12 -= ((/* implicit */unsigned long long int) max((max((var_2), (min((var_8), (var_8))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (signed char)126))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2 + 3] = ((/* implicit */unsigned char) min(((~(arr_5 [i_0] [i_1] [i_2] [i_0]))), (arr_5 [i_0] [i_0] [i_1] [i_0])));
                    arr_8 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775779LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 3] [i_0]))))))))));
                    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2] [i_2 - 1] [i_2 - 3])) + (((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_2 + 4] [i_2 - 1])))) : (((/* implicit */int) max((arr_2 [i_0] [21U] [i_2 - 1]), (((/* implicit */short) (signed char)-67)))))));
                }
            } 
        } 
    } 
}
