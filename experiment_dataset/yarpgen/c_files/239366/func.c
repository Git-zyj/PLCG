/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239366
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
    var_19 = ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_10))) && (((/* implicit */_Bool) ((unsigned char) var_11)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) min((var_13), (var_1)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) var_4)) - (199)))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((unsigned char) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) ((unsigned char) var_16))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_11 [i_3 + 2])), ((-(((/* implicit */int) arr_11 [i_3 - 1]))))));
                    arr_13 [i_3] = var_16;
                    arr_14 [i_1] [i_3] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_7 [i_2 + 3] [i_2 + 2] [i_2])))) + (2147483647))) >> (((/* implicit */int) ((unsigned char) arr_6 [i_1])))));
                    var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((-((-(((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_15)))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) max(((unsigned char)87), (var_7)))) : (((/* implicit */int) min((arr_6 [i_1]), (var_14))))))));
        var_25 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : ((~(((/* implicit */int) arr_5 [i_1]))))));
        arr_15 [i_1] = var_13;
    }
    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_10))) << (((((/* implicit */int) var_10)) - (33))))))));
    var_27 = ((/* implicit */unsigned char) max((var_27), (var_1)));
    var_28 = var_7;
}
