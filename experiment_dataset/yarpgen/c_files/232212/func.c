/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232212
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) -467432063))))) != (((/* implicit */int) (_Bool)1)))), ((((+(((/* implicit */int) arr_3 [i_1])))) >= ((+(((/* implicit */int) arr_3 [i_1]))))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-9865)))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 467432061))))) << (((((/* implicit */int) max((arr_0 [i_1 + 1]), (arr_0 [i_1 + 1])))) - (4365)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
    var_16 = ((/* implicit */unsigned long long int) (signed char)15);
    var_17 = ((/* implicit */_Bool) max((((/* implicit */int) var_7)), (min((((((/* implicit */_Bool) (unsigned short)18894)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))), (((((/* implicit */int) (unsigned char)6)) ^ (14680064)))))));
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)48)))))));
}
