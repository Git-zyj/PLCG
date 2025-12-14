/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210009
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((_Bool) var_8)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 -= ((unsigned int) (unsigned char)183);
        var_15 = ((/* implicit */unsigned int) (+((+(arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_9 [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_10 [i_1] [i_2]))))) + ((+(arr_5 [i_1]))))));
                    var_16 += ((/* implicit */unsigned int) var_10);
                    var_17 = ((/* implicit */unsigned short) arr_11 [3U] [i_2] [i_2]);
                }
            } 
        } 
        var_18 -= ((/* implicit */long long int) var_5);
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [(short)2] [i_1 + 1]))))) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1 + 1]))) == (arr_5 [i_1])))));
    }
}
