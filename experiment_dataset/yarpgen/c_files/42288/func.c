/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42288
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_4))));
    var_13 = ((unsigned int) (~(((var_1) + (((/* implicit */unsigned int) var_5))))));
    var_14 = (~(((/* implicit */int) (((-(var_11))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (425129181))))))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (var_3) : (var_3)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((425129181) < (var_6))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (-(var_6)))) : ((+(var_3)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = var_8;
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_1 + 4] [i_1 + 1] = ((/* implicit */unsigned int) ((((((var_11) | (arr_5 [i_2]))) | (((((/* implicit */_Bool) 17U)) ? (var_11) : (((/* implicit */unsigned int) var_6)))))) >= ((~(arr_3 [i_1 + 2])))));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -104013825)) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 + 2] [i_1 - 2])))) ? (arr_7 [i_1 - 1] [i_2] [i_2]) : (((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */unsigned int) -1716718970)) : (arr_0 [i_1 - 1] [i_2]))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0]))) ? (-425129179) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        var_18 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
        var_19 = (+(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) 1050401652)))) : (((unsigned int) 1722676227U)))));
    }
}
