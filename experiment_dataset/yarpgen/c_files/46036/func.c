/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46036
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)15)))))));
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
        var_13 = ((/* implicit */short) (~((-(((/* implicit */int) (unsigned char)165))))));
        var_14 = var_9;
        arr_4 [i_0] = var_8;
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) var_9);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 22; i_2 += 1) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) var_6))))));
            arr_13 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_7))))));
            arr_14 [i_1] [(unsigned char)22] [i_1] = ((/* implicit */unsigned char) var_0);
            arr_15 [i_1] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)62))));
        }
    }
    var_16 = ((/* implicit */unsigned char) var_8);
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-1))));
}
