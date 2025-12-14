/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192581
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [(short)9] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-532)))), (((/* implicit */int) arr_0 [i_0]))))));
        var_11 -= ((short) ((((/* implicit */int) (short)-32745)) - (((/* implicit */int) (short)32745))));
        arr_4 [i_0] [i_0] = ((short) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            var_12 -= ((short) arr_7 [i_1] [i_2 - 1]);
            var_13 = (short)-7692;
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) arr_0 [i_2])) > (((/* implicit */int) arr_5 [i_1] [i_2]))))), (var_8)))))))));
        }
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((((/* implicit */_Bool) (short)28)) ? (((/* implicit */int) (short)-7679)) : (((/* implicit */int) (short)32735)))), ((~((-(((/* implicit */int) var_10)))))))))));
        var_16 -= ((short) (short)-11933);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))));
    }
    for (short i_3 = 4; i_3 < 15; i_3 += 3) 
    {
        var_18 = arr_11 [i_3] [(short)14];
        arr_12 [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)28672))))) ? (((/* implicit */int) arr_10 [(short)6] [i_3])) : (((/* implicit */int) ((short) var_3))))) < (((/* implicit */int) ((short) (+(((/* implicit */int) var_5))))))));
        arr_13 [(short)15] [(short)6] = ((/* implicit */short) (-(((/* implicit */int) min(((short)23993), ((short)32762))))));
    }
    /* LoopSeq 3 */
    for (short i_4 = 4; i_4 < 14; i_4 += 1) 
    {
        arr_16 [(short)13] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 - 1])) && (((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 - 1])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)32765))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) max((arr_15 [i_4] [(short)6]), (var_3)))))) : (((/* implicit */int) (short)14134))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_19 -= ((/* implicit */short) (~(((/* implicit */int) min((arr_0 [i_4 + 1]), (var_10))))));
                        arr_26 [i_7] [i_5] [i_6] [i_7] = var_10;
                        var_20 = ((/* implicit */short) min((var_20), (var_7)));
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-30294)))))));
        arr_31 [i_8] [(short)8] = arr_28 [(short)19] [i_8];
    }
    for (short i_9 = 4; i_9 < 19; i_9 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) var_2))) : ((-(((/* implicit */int) arr_36 [(short)9] [i_10]))))));
            arr_37 [i_9] [i_9] = ((short) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) (short)14194))));
            arr_38 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */int) var_4)) << (((((((/* implicit */int) arr_35 [i_9 - 3] [(short)3])) + (31448))) - (14)))));
        }
        for (short i_11 = 2; i_11 < 18; i_11 += 3) 
        {
            var_23 -= ((/* implicit */short) min((((/* implicit */int) arr_33 [i_9] [i_9])), (((((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) arr_27 [(short)15] [i_11])) : (((/* implicit */int) var_6)))) + (((/* implicit */int) var_10))))));
            var_24 = min((arr_29 [i_9]), (arr_34 [i_9] [(short)11]));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_28 [i_11] [i_11 - 1])) : (((/* implicit */int) arr_28 [i_9] [i_11 + 1]))))) ? (((((/* implicit */int) arr_28 [(short)9] [i_11 - 2])) % (((/* implicit */int) arr_28 [i_11] [i_11 - 1])))) : (((/* implicit */int) arr_28 [i_9] [i_11 + 1])))))));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            arr_43 [i_9] = (short)1;
            arr_44 [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_34 [i_9] [i_12]))));
        }
        /* LoopNest 2 */
        for (short i_13 = 4; i_13 < 16; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                {
                    arr_50 [i_9] [i_13] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (short)-1346))))) >= ((+(((/* implicit */int) arr_30 [i_9 - 4]))))));
                    /* LoopSeq 4 */
                    for (short i_15 = 1; i_15 < 18; i_15 += 2) 
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) arr_52 [i_15] [(short)11] [i_15 + 1] [(short)3] [i_15 - 1] [i_15])))))));
                        var_27 = ((/* implicit */short) min((var_27), (((short) ((((/* implicit */int) min((arr_27 [(short)12] [i_13]), ((short)21128)))) > (((/* implicit */int) arr_28 [i_9] [i_14])))))));
                        var_28 -= ((/* implicit */short) min((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_33 [i_9] [(short)8]))))))), ((~(((/* implicit */int) arr_36 [i_9] [i_15 + 1]))))));
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        arr_55 [i_9] [i_14] = arr_39 [i_9];
                        var_29 = ((/* implicit */short) max((var_29), ((short)32761)));
                    }
                    for (short i_17 = 3; i_17 < 19; i_17 += 2) 
                    {
                        arr_58 [i_9] [i_9] [i_9] [(short)14] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((short) (short)-32744))) - (((/* implicit */int) arr_40 [i_9] [i_13] [i_9]))));
                        var_30 -= ((/* implicit */short) (-(((/* implicit */int) (short)-26471))));
                    }
                    for (short i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        arr_62 [(short)9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (short)-11230)))))) ? ((-(((/* implicit */int) (short)5793)))) : (((/* implicit */int) ((short) var_10)))));
                        arr_63 [i_9] [i_9] [(short)14] [i_18] = arr_61 [i_9] [(short)16] [i_9] [i_9];
                        arr_64 [i_9] [i_13] [i_9] = arr_45 [i_9] [i_9 - 3];
                        var_31 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), ((+(((/* implicit */int) arr_42 [(short)1] [i_9] [i_9 + 1]))))));
                    }
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */int) (short)-8192)) - (((/* implicit */int) (short)(-32767 - 1))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_19 = 0; i_19 < 12; i_19 += 4) 
    {
        for (short i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_21 = 0; i_21 < 12; i_21 += 2) 
                {
                    for (short i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        for (short i_23 = 4; i_23 < 9; i_23 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) arr_20 [(short)6] [i_21] [i_22])) ? (((/* implicit */int) arr_72 [i_22] [i_23])) : (((/* implicit */int) var_7))))))));
                                var_34 -= arr_18 [i_19] [i_22];
                            }
                        } 
                    } 
                } 
                arr_79 [(short)11] [i_20] = (short)-32718;
                var_35 -= var_10;
            }
        } 
    } 
    var_36 = ((short) ((short) min((var_10), (var_2))));
}
