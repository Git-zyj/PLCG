/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230211
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (arr_3 [i_0])));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned short) var_5);
                var_19 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) > (((/* implicit */int) max((arr_6 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) (_Bool)1))))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) var_13);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [(unsigned short)2])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))) ? (((/* implicit */int) ((unsigned short) max((var_6), (((/* implicit */short) var_2)))))) : (((/* implicit */int) ((_Bool) ((arr_4 [i_3] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3]))))))));
            }
        }
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_23 = (_Bool)1;
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)13435)))))))));
            var_25 ^= (short)-13439;
        }
        var_26 = ((/* implicit */short) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)23005)) : (((/* implicit */int) (_Bool)0)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_27 = ((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_5]))))), (((short) arr_8 [i_5] [i_5]))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (short i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) (((!((!((_Bool)0))))) ? (min((((/* implicit */int) arr_11 [i_9] [i_8] [(_Bool)1])), (((((/* implicit */_Bool) (short)16784)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-13436)))))) : ((~(((/* implicit */int) min((arr_22 [(_Bool)1] [(_Bool)1] [i_7 + 1] [i_7 + 3]), ((_Bool)1))))))));
                                var_29 = var_11;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)5324)))) - ((((_Bool)0) ? (((/* implicit */int) (short)-17120)) : (((/* implicit */int) (short)29073))))));
                        var_31 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_9 [i_6 + 1] [i_6 + 1])) + (((/* implicit */int) arr_11 [i_6 + 1] [i_6 + 1] [i_6 + 1]))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_18 [i_7 + 3] [i_6 + 1] [i_6 + 1])), (var_16)))) ^ (((((var_14) && (((/* implicit */_Bool) arr_10 [i_6])))) ? (((((/* implicit */_Bool) arr_20 [i_7] [i_6] [i_5] [i_7])) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) arr_23 [(short)4] [i_7] [i_7] [(short)4] [i_6] [i_6 + 1] [i_5])))) : (((/* implicit */int) var_5)))))))));
                    }
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_15 [i_5] [i_5]))));
                    var_34 = ((/* implicit */short) ((_Bool) var_8));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            for (unsigned short i_13 = 2; i_13 < 21; i_13 += 1) 
            {
                {
                    arr_37 [i_13] [i_12] [i_13] [i_11] &= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_11] [i_11])) << (((((/* implicit */int) ((unsigned short) (short)5883))) - (5881)))))));
                    var_35 = ((/* implicit */short) var_0);
                }
            } 
        } 
        var_36 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_11))) + (((/* implicit */int) arr_33 [i_11]))));
        var_37 += ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
        var_38 = ((/* implicit */_Bool) ((((((arr_31 [i_11]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_30 [i_11] [i_11])))) != (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_11]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_11] [i_11] [i_11]))))) : (((/* implicit */int) ((unsigned short) var_2))))) : (((/* implicit */int) var_15))));
    }
    var_39 = ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (short i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            {
                var_40 = (_Bool)1;
                /* LoopNest 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned short i_17 = 1; i_17 < 17; i_17 += 1) 
                    {
                        {
                            var_41 *= ((/* implicit */unsigned short) var_5);
                            var_42 = ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_31 [i_17 - 1])))), (((/* implicit */int) ((_Bool) min(((short)14442), (((/* implicit */short) (_Bool)1))))))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */unsigned short) arr_31 [i_14]);
                var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (short)10481))))) <= (((/* implicit */int) arr_42 [i_14] [i_14])))))));
                var_45 = arr_27 [i_15];
            }
        } 
    } 
}
