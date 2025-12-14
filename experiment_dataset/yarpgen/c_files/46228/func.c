/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46228
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 ^= ((/* implicit */int) var_3);
        var_12 = ((/* implicit */int) ((unsigned short) arr_0 [i_0]));
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
            var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)224))) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) var_8))));
        }
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) -1800273581)) && (((/* implicit */_Bool) var_0)))))));
    }
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((var_10) > (var_10))))))));
    var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))));
}
