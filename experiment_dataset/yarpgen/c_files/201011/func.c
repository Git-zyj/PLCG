/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201011
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
    var_10 |= ((((/* implicit */int) var_2)) - (((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned char) arr_3 [i_0] [i_0])))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (0U)))))));
                arr_5 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_2 [i_1] [i_0]))))) ? (arr_0 [i_1]) : (min((arr_0 [i_1]), (805306368)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)23698)) / (arr_0 [13]))) > (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))))));
                    var_13 = 4294967295U;
                }
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned int) arr_4 [i_0] [2ULL] [i_0])), (min((1977735468U), (((/* implicit */unsigned int) arr_1 [i_0])))))) : (((/* implicit */unsigned int) (-(min((((/* implicit */int) (short)-6920)), (1260045460))))))));
            }
        } 
    } 
}
