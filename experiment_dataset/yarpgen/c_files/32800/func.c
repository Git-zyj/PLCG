/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32800
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (unsigned char)214)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned char)180)) >> (((((/* implicit */int) arr_1 [i_0])) - (119))))) - (90)))));
        var_15 = (unsigned char)178;
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_16 = (unsigned char)178;
        var_17 = (unsigned char)42;
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_3 [i_1] [(unsigned char)7]), ((unsigned char)1))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)225)))) & (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_5)) : (max((((/* implicit */int) max(((unsigned char)7), ((unsigned char)232)))), ((~(((/* implicit */int) (unsigned char)10))))))));
    }
    var_19 = ((unsigned char) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)205))))), (var_0)));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                var_20 = (unsigned char)20;
                arr_13 [i_2] [(unsigned char)10] = (unsigned char)213;
                var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) arr_8 [i_2]))))));
                arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)50))) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)7))));
            }
        } 
    } 
    var_22 = var_8;
}
