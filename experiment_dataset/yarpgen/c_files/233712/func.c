/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233712
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
    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (signed char)-82)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28716)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-9123))))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)))) || (((/* implicit */_Bool) min((max((((/* implicit */int) (unsigned short)5503)), (1313884885))), (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */short) (!((!(arr_1 [i_0] [i_0 + 1])))));
                    arr_8 [i_0 + 1] [i_0] [i_2] = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                    var_20 = ((/* implicit */unsigned int) (~((-(max((((/* implicit */int) (short)26861)), (1313884885)))))));
                }
            } 
        } 
    } 
}
