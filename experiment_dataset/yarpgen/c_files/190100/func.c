/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190100
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
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) & (var_8))) : ((+(var_8))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) 0U);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                    {
                        arr_13 [(unsigned char)13] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(arr_8 [i_2 - 1] [12] [i_2 - 1] [i_1 + 1])));
                        var_14 = (((_Bool)1) || (((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2 - 1] [i_2 - 1])));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 20U)) ? (arr_12 [i_0] [i_1 - 1] [(short)17]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)896)))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 1])) : (((/* implicit */int) (!((_Bool)1))))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)156)) | ((~(var_3)))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (172470932U)));
                        arr_20 [i_0] [i_1] = ((/* implicit */_Bool) (-(((long long int) arr_5 [i_2 - 1] [i_1]))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (var_2) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                        var_17 = ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_7)) : (4294967295U)));
                    }
                }
            } 
        } 
    } 
}
