/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224125
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32)))))));
                    var_19 = ((/* implicit */unsigned short) max((arr_3 [i_0] [i_1 + 3] [i_1 + 1]), (((signed char) (unsigned short)15360))));
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_1 + 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
                    arr_9 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 3])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)26)), (var_6)))) : (((/* implicit */int) (unsigned short)59167))))));
                }
            } 
        } 
    } 
    var_20 = max(((unsigned short)19565), (var_17));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned short) var_1)), ((unsigned short)7))))));
}
