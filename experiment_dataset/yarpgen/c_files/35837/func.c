/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35837
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
    var_17 |= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = arr_3 [i_0] [i_0];
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_19 = ((/* implicit */int) (+(var_7)));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_2 [3]);
            arr_7 [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) (short)5416)) ? (arr_1 [i_0] [6ULL]) : (arr_1 [i_0] [i_1])));
            var_20 -= ((/* implicit */unsigned short) ((_Bool) arr_0 [i_1]));
        }
        arr_8 [i_0] = ((/* implicit */_Bool) var_12);
        var_21 *= ((/* implicit */unsigned int) ((arr_5 [i_0] [i_0]) | (arr_5 [5U] [5U])));
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (min(((-(var_7))), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((min((1204283843), (var_11))) >= ((+(((/* implicit */int) var_13))))))))));
}
