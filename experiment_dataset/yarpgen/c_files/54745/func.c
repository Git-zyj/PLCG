/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54745
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
    var_17 = ((short) ((short) ((short) var_5)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 = ((short) ((short) ((short) (short)32767)));
                                arr_13 [i_1] [i_3] [i_0] [(short)12] [i_0] [i_1] = ((short) ((short) ((short) var_7)));
                                var_19 = ((short) ((short) ((short) (short)21295)));
                            }
                        } 
                    } 
                    var_20 -= ((short) (short)-9839);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_21 = ((short) ((short) ((short) arr_17 [i_0] [i_5] [i_2] [i_0] [i_1] [(short)0] [i_1 - 3])));
                                var_22 = ((short) ((short) ((short) arr_9 [i_6] [i_1] [i_1] [i_1])));
                                var_23 = ((short) ((short) ((short) (short)32761)));
                                var_24 = ((short) (short)0);
                            }
                        } 
                    } 
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        var_25 -= ((short) ((short) (short)-32762));
                        var_26 = ((short) ((short) ((short) arr_10 [i_8 + 1] [(short)8] [(short)0] [i_7] [(short)8] [i_1 - 3] [i_0])));
                        arr_25 [(short)23] [i_1 - 3] [i_1 - 3] [i_1] [i_7] = ((short) ((short) (short)6120));
                    }
                    var_27 = ((short) ((short) ((short) (short)24576)));
                }
                /* LoopNest 2 */
                for (short i_9 = 4; i_9 < 23; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            var_28 |= ((short) ((short) ((short) arr_23 [i_0] [i_1 + 2])));
                            arr_30 [i_1] [i_1] = ((short) ((short) (short)26669));
                            arr_31 [i_1] [i_1] = ((short) (short)-26669);
                        }
                    } 
                } 
                var_29 -= ((short) ((short) ((short) var_12)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        for (short i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            for (short i_13 = 1; i_13 < 20; i_13 += 2) 
            {
                {
                    arr_39 [i_11] = ((short) ((short) ((short) (short)32750)));
                    var_30 = ((short) ((short) (short)32767));
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        var_31 = ((short) ((short) ((short) (short)23690)));
                        /* LoopSeq 3 */
                        for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                        {
                            arr_48 [i_11] [i_12] [i_13 + 1] [(short)10] [i_15] = ((short) (short)-9839);
                            arr_49 [i_12] [(short)12] [i_15] = ((short) ((short) ((short) arr_26 [i_11] [(short)14] [i_13] [i_12])));
                            arr_50 [(short)2] [i_12] [i_11] [i_11] [i_12] [i_14] = ((short) (short)-16957);
                        }
                        for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            arr_53 [(short)2] = ((short) ((short) ((short) (short)-8411)));
                            var_32 = ((/* implicit */short) min((var_32), (((short) ((short) ((short) arr_28 [i_12] [i_13 - 1] [i_12] [i_12]))))));
                            var_33 = ((short) ((short) ((short) arr_6 [(short)15] [i_12] [i_13])));
                            var_34 = ((short) (short)-26497);
                        }
                        for (short i_17 = 2; i_17 < 19; i_17 += 4) 
                        {
                            arr_56 [i_13] [i_11] [i_13] [i_14] = ((short) ((short) ((short) (short)31094)));
                            arr_57 [(short)16] [i_17 + 2] = ((short) ((short) (short)-4096));
                        }
                        var_35 = ((short) ((short) ((short) (short)-30683)));
                        arr_58 [(short)3] [i_13 + 1] [i_14] = ((short) ((short) ((short) var_15)));
                    }
                }
            } 
        } 
    } 
}
