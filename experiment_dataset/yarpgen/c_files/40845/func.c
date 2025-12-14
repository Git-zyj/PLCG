/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40845
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
    var_20 = ((/* implicit */int) 2272904849U);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) ((unsigned short) arr_0 [2U]))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [7U]))) <= ((~(2272904826U)))));
                var_21 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2022062447U)) ? (((/* implicit */int) arr_2 [(short)8])) : (arr_1 [2] [i_1])))) + (((long long int) arr_0 [i_1])))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) ((262143U) == (2022062465U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2272904832U))))))));
}
