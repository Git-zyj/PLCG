/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191002
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_2))));
    var_11 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned char) min((var_12), (var_6)));
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -342564447)) ? (((/* implicit */int) (unsigned short)49847)) : (-1090809679))))));
    }
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (max((arr_4 [i_1 - 1]), (arr_4 [i_1 + 1])))));
        var_15 = ((/* implicit */unsigned char) min((min((arr_7 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned int) arr_4 [i_1 - 1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 25U)) && (((/* implicit */_Bool) (unsigned short)59302)))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            var_16 = ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6449))))) - (max((((/* implicit */unsigned int) var_2)), (arr_5 [i_2 - 1]))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)57377))));
        }
    }
}
