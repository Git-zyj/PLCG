/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22629
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (_Bool)0);
        arr_5 [i_0] = max((var_5), (((/* implicit */long long int) ((-628806789) >= (((/* implicit */int) (signed char)75))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [(unsigned char)2] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)11))));
        arr_9 [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [(_Bool)1]))))) && (((/* implicit */_Bool) var_9))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 8; i_3 += 3) 
            {
                {
                    arr_17 [i_1] [i_3] = ((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3]);
                    arr_18 [(unsigned char)4] [i_2] [8U] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (arr_16 [i_3 - 2] [(_Bool)1] [i_3 + 2])));
                    arr_19 [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_4)) : (arr_16 [i_3 + 3] [i_1] [i_3 - 1])));
                    arr_20 [i_1] [(unsigned char)0] [i_3 - 2] = ((/* implicit */signed char) arr_7 [(short)10]);
                }
            } 
        } 
    }
    for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        arr_23 [i_4] = ((/* implicit */_Bool) arr_0 [i_4] [i_4]);
        arr_24 [10U] = ((/* implicit */short) ((((arr_1 [i_4 - 1]) >= (arr_1 [i_4 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) : (((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (arr_1 [i_4 + 1]) : (arr_1 [i_4 - 1])))));
    }
    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) var_6))) && (((/* implicit */_Bool) var_5)))) ? (var_6) : (((/* implicit */unsigned int) var_2))));
}
