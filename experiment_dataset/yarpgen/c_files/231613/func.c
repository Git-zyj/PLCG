/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231613
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-2147483640), (-2147483640)))) ? (-2147483640) : (min(((+(-2147483647))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_13)) : (-2147483647)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2] [14ULL])) ? (-2147483640) : (-2147483640))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (2147483639) : (((/* implicit */int) var_3)))) == (min((-2147483647), (((/* implicit */int) var_3)))))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483640)) ? (((((/* implicit */_Bool) var_14)) ? (min((2147483639), (-2147483639))) : (2147483646))) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_1 - 3]) ? (min((((/* implicit */int) var_3)), (arr_2 [i_1 + 1] [i_0]))) : (2147483646)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((max((-2147483640), (-2147483647))), (((/* implicit */int) var_10))));
}
