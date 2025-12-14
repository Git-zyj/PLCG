/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195987
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 -= ((/* implicit */short) ((((((/* implicit */int) (short)-32763)) + (2147483647))) << (((((((/* implicit */int) var_12)) + (12051))) - (1)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned short i_4 = 4; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_21 ^= var_0;
                            arr_15 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_4 + 2] [(short)4])) >> (((((/* implicit */int) var_13)) - (18896)))));
                            arr_16 [i_0] [i_1] [(short)1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-26470)) ? (((/* implicit */int) (unsigned short)47865)) : (((/* implicit */int) (unsigned short)47879)))) + (((/* implicit */int) var_13))));
                            arr_17 [i_0] [i_1] [i_0] [i_1] [i_4] = ((short) var_11);
                        }
                    } 
                } 
            } 
            arr_18 [(unsigned short)11] [i_0] [(unsigned short)11] = ((/* implicit */short) ((unsigned short) var_16));
        }
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-30383)))) + (2147483647))) >> (((((((/* implicit */_Bool) (short)2536)) ? (((/* implicit */int) (unsigned short)4080)) : (((/* implicit */int) (short)-26074)))) - (4074))))))));
        arr_19 [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
    {
        arr_23 [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)25792))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5])) - (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((short) arr_20 [i_5] [i_5]))) : (((/* implicit */int) (unsigned short)25064))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((/* implicit */int) ((short) (short)6931))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_20 [i_6] [i_6])))))))));
        arr_27 [(short)0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_21 [i_6] [(short)11]), (arr_21 [i_6] [i_6])))) >> (((((((/* implicit */_Bool) (short)31234)) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) (short)-26458)))) - (32740)))));
        var_24 = ((/* implicit */unsigned short) arr_20 [i_6] [i_6]);
        arr_28 [i_6] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)39872)) : (((/* implicit */int) arr_21 [i_6] [i_6]))))) && ((!(((/* implicit */_Bool) var_14))))))), (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)4080)) : (((/* implicit */int) var_11)))), (((/* implicit */int) (short)-13768))))));
    }
    var_25 = var_0;
    var_26 *= ((/* implicit */short) ((((/* implicit */int) var_0)) + (((/* implicit */int) ((short) var_8)))));
}
