/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242470
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
    var_19 = var_12;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */unsigned char) ((unsigned short) (+((((-2147483647 - 1)) - (((/* implicit */int) (short)-15076)))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) max((max((min((((/* implicit */int) var_7)), (var_2))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)248)))))), (((/* implicit */int) var_7))));
                arr_7 [i_0] |= (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? ((~(arr_3 [i_0] [i_0] [i_0]))) : (((1481685425) - (((/* implicit */int) (signed char)122)))));
                arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) arr_4 [i_0] [i_0])), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (signed char)106))))))) : (var_5)));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_8);
}
