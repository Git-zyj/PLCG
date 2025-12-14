/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25226
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(short)0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_2))));
        var_13 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_2))))) > (((((/* implicit */_Bool) (short)412)) ? (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_4))))));
        arr_4 [i_0] [i_0] |= ((/* implicit */short) ((((_Bool) (_Bool)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_14 = ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : ((-(0U))));
        var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) arr_1 [(short)15] [i_1]))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) arr_6 [(short)13]);
        var_16 = ((/* implicit */short) ((unsigned int) ((6U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))));
        /* LoopSeq 2 */
        for (short i_2 = 4; i_2 < 14; i_2 += 2) 
        {
            var_17 = ((/* implicit */_Bool) 9U);
            var_18 = (((_Bool)0) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 4]))));
        }
        for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            var_19 = var_9;
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (~(4294967267U)));
                            arr_24 [i_4] [i_4] [(short)17] [i_4] [(_Bool)1] = (!(arr_22 [i_6] [i_5 - 1] [i_4] [i_3] [i_1]));
                        }
                    } 
                } 
            } 
            var_21 |= ((/* implicit */_Bool) arr_18 [i_1] [(short)14] [i_1] [i_1]);
        }
    }
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (short i_8 = 1; i_8 < 22; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_22 = var_12;
                    var_23 = min((38U), (((/* implicit */unsigned int) var_7)));
                    var_24 = ((/* implicit */short) ((arr_29 [i_7] [i_7] [i_9]) != (max((((/* implicit */unsigned int) var_3)), (min((arr_29 [i_8] [i_8] [i_7]), (((/* implicit */unsigned int) var_12))))))));
                    var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_28 [i_8 + 1] [i_7]))) ? (((unsigned int) arr_31 [i_8 + 1] [i_7])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_8 + 1] [i_7])) >> (((((/* implicit */int) arr_26 [i_8 + 1])) - (6412))))))));
                    arr_32 [i_8] [i_8 + 1] [(short)19] = ((/* implicit */unsigned int) arr_30 [i_7] [i_8] [8U] [(_Bool)1]);
                }
            } 
        } 
        arr_33 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7])))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) var_12)), ((short)28127)))), ((+(((/* implicit */int) var_0))))))) : (max((((((/* implicit */_Bool) var_0)) ? (arr_25 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (arr_25 [i_7])))));
        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_1 [i_7] [(short)13])))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (var_8)));
    var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_8)))) > (((/* implicit */int) var_2))));
}
