/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46238
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) (short)11552)))))));
    var_20 = max((var_6), (max((var_17), (max((var_9), (var_17))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) var_15)))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_0 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (arr_0 [i_0 + 2])));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0 + 2]), (var_18)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max((arr_4 [i_0] [i_0 - 1] [(short)7]), (var_9))))));
                                var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */int) var_12)) << (((((/* implicit */int) ((short) arr_4 [i_0 + 2] [i_0 + 2] [i_2]))) - (2133))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) max(((+(((/* implicit */int) var_12)))), ((+(((/* implicit */int) (short)9393))))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */short) max((((/* implicit */int) max((var_12), (arr_3 [i_5 + 1] [i_0 + 2] [i_2])))), (((((/* implicit */int) arr_3 [i_5 + 1] [i_0 + 2] [i_2])) & (((/* implicit */int) arr_3 [i_5 + 1] [i_0 + 2] [(short)8]))))));
                                var_29 = ((/* implicit */short) (~((+(((/* implicit */int) arr_9 [i_0 + 2] [(short)7] [i_2] [i_0] [i_1]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 14; i_8 += 2) 
                    {
                        for (short i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) min((var_30), (arr_23 [i_8 - 1] [i_8] [i_8] [(short)9] [i_9 - 1] [i_9])));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_12 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8])) : (((/* implicit */int) (short)28149))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        for (short i_11 = 4; i_11 < 14; i_11 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_10] [i_11 + 1] [i_11 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_25 [i_0] [i_0 + 2])) : (((/* implicit */int) var_12))));
                                var_33 += ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_10] [(short)4] [i_0 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_10 [i_10] [(short)14] [i_0 + 2]))));
                                var_34 = ((/* implicit */short) ((((/* implicit */int) (short)25073)) + (((/* implicit */int) (short)9679))));
                                var_35 = ((/* implicit */short) ((((((/* implicit */int) (short)-24802)) + (2147483647))) << (((((/* implicit */int) var_18)) - (5973)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (short i_12 = 1; i_12 < 12; i_12 += 1) 
                {
                    for (short i_13 = 3; i_13 < 12; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-11552), (var_3)))) ? (((/* implicit */int) arr_25 [i_12 + 2] [(short)0])) : (((/* implicit */int) var_13))));
                                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_36 [i_14] [i_13] [i_12] [i_1] [i_0 + 1]), ((short)-32759)))) ? ((~(((/* implicit */int) arr_10 [i_14] [i_12 + 1] [i_12 - 1])))) : (((((/* implicit */_Bool) arr_21 [i_1] [i_12 - 1] [i_13 - 2] [i_14])) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_12] [i_13] [i_14])) ? (((/* implicit */int) arr_25 [i_0] [i_0])) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) (short)9746))))));
                                var_38 = ((/* implicit */short) (~(((/* implicit */int) (short)-32759))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_39 = var_4;
}
