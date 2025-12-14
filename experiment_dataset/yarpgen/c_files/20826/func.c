/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20826
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((arr_1 [i_0]), (arr_5 [i_0] [i_2])))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)217)))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) ((unsigned char) arr_7 [(unsigned char)0])))))));
                    arr_9 [i_2] [i_1] [i_0] = ((unsigned char) ((unsigned char) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)25)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        arr_12 [i_3] = arr_6 [i_3 - 1] [i_3] [i_3] [i_3];
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)30))));
        var_16 = ((unsigned char) (-(((/* implicit */int) arr_3 [i_3 + 1]))));
    }
    var_17 = var_4;
}
