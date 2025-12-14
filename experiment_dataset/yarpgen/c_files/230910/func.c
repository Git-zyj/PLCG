/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230910
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (var_13)));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_6)) * (((/* implicit */int) (short)32767))))))) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15)))))) : (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_15)), ((unsigned char)32)))) << (((((/* implicit */int) (short)32752)) - (32727)))))) : ((+(arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            var_19 &= ((/* implicit */short) arr_4 [i_0] [i_1 - 4] [i_1]);
            arr_5 [i_0] [(unsigned char)15] = ((/* implicit */_Bool) (+(arr_3 [i_0] [i_1 + 1])));
        }
        var_20 &= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32763))));
    }
}
