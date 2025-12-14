/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209751
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
    var_11 += ((/* implicit */unsigned char) (unsigned short)6);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((((unsigned int) 2097088U)), (((/* implicit */unsigned int) var_4))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_13 |= min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_4)))))), (((unsigned short) arr_0 [i_0 + 1] [i_0 + 1])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [23U] = ((/* implicit */unsigned char) min((arr_0 [i_1] [i_1]), (var_9)));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_14 = ((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 1760084173)))))) % (arr_2 [i_1] [i_1 + 1]));
                        var_15 |= ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_0 + 1] [5] [i_2] [i_3]));
                    }
                }
            } 
        } 
        arr_9 [i_0] = var_10;
        var_16 = ((/* implicit */unsigned short) 575911431);
    }
}
