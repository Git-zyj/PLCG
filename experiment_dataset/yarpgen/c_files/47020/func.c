/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47020
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 133169152)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (unsigned short)41404)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))) - (52809)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_0])), (arr_1 [i_0])))) != (arr_5 [i_2]))))));
                    var_14 &= ((/* implicit */int) var_2);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) (unsigned short)31468))))) / ((+(((/* implicit */int) (unsigned short)46335))))))));
    var_16 = (unsigned char)201;
    var_17 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) var_11)))));
}
