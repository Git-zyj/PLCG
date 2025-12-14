/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52522
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
    var_14 = ((/* implicit */unsigned char) var_2);
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) var_8)), (var_1)));
    var_16 = min((var_0), (var_5));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = arr_0 [i_0 + 1];
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_3 [i_0 + 1]))));
            var_20 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((arr_2 [i_0] [10U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_6)))) ? (((arr_1 [0]) ? (var_3) : (arr_0 [i_1 + 1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))))));
            var_21 &= ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_1 [i_0])))))))) > (((/* implicit */int) arr_2 [i_0] [i_0])));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_22 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_2]) * (arr_3 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (arr_2 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) 4134674626U)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */unsigned int) ((arr_6 [i_0] [i_0 + 1]) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_0 + 1])) : (((/* implicit */int) var_0))))) : (((arr_4 [i_0 + 1] [(unsigned char)1]) ? (arr_5 [i_2] [i_2] [i_0 + 1]) : (arr_5 [i_0] [i_2] [i_0 + 1]))));
            var_23 *= ((/* implicit */_Bool) arr_3 [i_0 + 1]);
            var_24 = ((unsigned int) (~(((/* implicit */int) (unsigned char)255))));
        }
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_25 = (((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_7 [18U]))))))) ? (arr_8 [i_3] [i_3]) : (((1U) - (2954444483U))));
        var_26 = ((/* implicit */_Bool) var_1);
    }
}
