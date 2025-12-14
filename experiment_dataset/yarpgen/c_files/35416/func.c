/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35416
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
    var_18 = ((/* implicit */short) var_9);
    var_19 = ((/* implicit */short) (+(((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)11] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0 - 2])))) && (((var_14) || (((/* implicit */_Bool) min((var_8), (((/* implicit */short) arr_2 [i_1])))))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-26860)) + (2147483647))) << (((((((/* implicit */int) (short)-27218)) + (27229))) - (11)))));
                arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 2]))))) ? (((((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_2 [(short)6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0 + 1]))))) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (var_15)))))) : (((/* implicit */int) ((short) (-(((/* implicit */int) (short)28428))))))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-3839))))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0])))))), (((/* implicit */int) var_1))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (short)-3839)))))) ? (((arr_2 [i_2 + 1]) ? (((/* implicit */int) max(((short)3837), ((short)3853)))) : (((/* implicit */int) ((short) arr_10 [i_2]))))) : (((/* implicit */int) arr_11 [(short)14]))));
        /* LoopNest 3 */
        for (short i_3 = 4; i_3 < 15; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 ^= ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [i_2])), (2736709646U)))) ? (((/* implicit */int) arr_15 [i_2 + 1])) : (((arr_2 [i_4]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [i_2] [i_3] [i_4] [i_2] [i_3 + 2] [i_2]))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((/* implicit */int) var_12)), ((-(((/* implicit */int) arr_0 [i_4] [i_5])))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_2 + 1]))))), (max((((/* implicit */unsigned int) arr_10 [i_2 + 2])), (arr_16 [i_2 + 1])))));
        arr_21 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_2] [i_2])), (((arr_12 [i_2] [i_2] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))))))) ? (((((/* implicit */_Bool) ((short) var_16))) ? (((arr_14 [i_2] [(short)0]) << (((((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])) - (26279))))) : (max((var_6), (((/* implicit */unsigned int) arr_19 [i_2] [3U] [3U] [3U] [(short)0] [(short)0])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (short)14793)) ? (((/* implicit */int) (short)-32472)) : (((/* implicit */int) (short)-14672)))) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
    }
    var_24 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (var_9) : (var_17))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11)))))));
}
