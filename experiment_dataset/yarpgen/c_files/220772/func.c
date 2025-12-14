/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220772
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0 - 1] [i_0 - 1])));
        var_18 -= ((/* implicit */unsigned short) arr_0 [i_0 + 1] [i_0 + 1]);
        var_19 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)48)) < (((/* implicit */int) var_2)))))) : (var_10));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_13))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) max(((-(((/* implicit */int) (signed char)-67)))), (arr_6 [i_3 - 2] [6U] [i_1])))) == (arr_0 [i_3] [i_2])));
                    arr_9 [i_1] [i_2] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) arr_7 [i_3] [(unsigned short)7] [i_1]);
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-44)), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3539080959U)))))) : (min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned int) 424010954)))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) (~(3539080959U)));
}
