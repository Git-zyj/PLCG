/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37288
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6)))))), (arr_0 [i_0])));
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */short) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) ((short) ((_Bool) -447818141))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-30150))));
        arr_8 [i_1] = (!(((/* implicit */_Bool) arr_6 [i_1])));
        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) var_19)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1]))))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_22 *= ((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)3564)) != (((/* implicit */int) (_Bool)1)))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((short) ((_Bool) (_Bool)1))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) var_8)) < (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_25 *= ((_Bool) arr_18 [i_5]);
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (arr_9 [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [(short)16]))));
        var_27 = ((/* implicit */short) arr_9 [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_28 = (((~(((/* implicit */int) arr_10 [i_6])))) & (((/* implicit */int) (_Bool)1)));
        arr_22 [i_6] = ((/* implicit */short) (((_Bool)1) ? (arr_17 [(_Bool)1]) : (((/* implicit */int) arr_5 [i_6]))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_29 = ((/* implicit */short) ((arr_14 [i_6] [i_6] [i_7] [i_7]) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_7] [i_7]))));
            var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [2] [i_6])) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) arr_10 [(_Bool)1]))))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1825997058))))) : (var_2)));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */int) (short)32751)) : (arr_6 [i_6]))))));
        }
    }
    var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_33 = ((/* implicit */short) var_16);
                arr_32 [i_9] [i_9] = ((/* implicit */short) max((63604612), (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) >> (((arr_6 [i_8]) - (2009562535)))))))));
            }
        } 
    } 
}
