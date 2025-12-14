/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215591
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
    var_20 = ((/* implicit */long long int) var_19);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (min((((/* implicit */long long int) (short)-1839)), (arr_6 [i_1] [i_0] [i_1])))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_3 [i_0])))) || (((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1] [i_1 - 1])))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_3 [i_1 + 1])))));
            }
        } 
    } 
}
