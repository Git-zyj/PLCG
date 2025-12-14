/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246745
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
    var_11 = var_6;
    var_12 = ((/* implicit */short) min((var_12), (var_7)));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) (+(max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_10))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0 + 3] [i_1] [i_1] [i_2] = var_1;
                    arr_10 [i_0] [i_1] [i_2] |= ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_0 + 3] [(short)10]))));
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 4])) : (((/* implicit */int) arr_2 [i_0 + 4])))))));
                    var_15 |= var_0;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
        {
            var_16 &= ((/* implicit */short) min((max((((/* implicit */int) arr_0 [i_3] [i_3])), (((((/* implicit */int) var_8)) % (((/* implicit */int) var_6)))))), ((-(((/* implicit */int) arr_1 [i_0]))))));
            arr_14 [(short)15] |= ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)8525))))) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 1] [i_0 + 4])) : ((-(((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-22369)) : (((/* implicit */int) (short)-22051))))));
        }
        for (short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] [i_4] [i_4] = max((max((var_8), (min((var_9), (var_9))))), (((/* implicit */short) (((~(((/* implicit */int) var_0)))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)20822)) : (((/* implicit */int) var_8))))))));
            arr_19 [i_4] [i_4] [i_0 + 4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)25559)) | (((/* implicit */int) (short)28)))))));
            arr_20 [(short)10] [i_4] [i_4] = var_8;
        }
    }
    for (short i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        arr_23 [i_5] &= ((/* implicit */short) (((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)3059)))))) >= (min((((((/* implicit */int) var_6)) * (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-9205))))))));
        var_17 &= var_5;
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_6), (var_3)))))))));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 23; i_6 += 4) 
    {
        arr_27 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)3997)) || (((/* implicit */_Bool) (short)32767))));
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 23; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                {
                    var_19 = var_3;
                    arr_33 [i_6 - 2] [i_7] [i_8] = var_1;
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (short i_10 = 4; i_10 < 23; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_31 [i_10 - 2] [i_10 - 1] [i_10 - 4]))));
                                var_21 = ((/* implicit */short) max((var_21), (((short) arr_35 [i_6 - 2] [i_10 + 1] [i_6 - 2] [i_7 - 2]))));
                                arr_40 [i_10] = var_10;
                                arr_41 [i_6] [i_10] [i_8] [i_9] [i_10 - 1] = arr_26 [(short)14];
                            }
                        } 
                    } 
                    arr_42 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                    arr_43 [i_8] [i_8] &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_11 = 1; i_11 < 20; i_11 += 4) /* same iter space */
        {
            var_22 = arr_38 [(short)5] [i_11] [i_11] [i_11] [i_11];
            var_23 &= var_8;
            /* LoopSeq 2 */
            for (short i_12 = 3; i_12 < 22; i_12 += 1) 
            {
                arr_50 [(short)4] [i_11] = ((/* implicit */short) (+(((/* implicit */int) ((short) var_2)))));
                arr_51 [i_11] [i_6] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_6 - 1])) ? (((/* implicit */int) arr_34 [i_12 - 2] [i_11 + 3] [i_6 + 1])) : (((/* implicit */int) arr_34 [i_12 - 2] [i_11 + 1] [i_11]))));
            }
            for (short i_13 = 1; i_13 < 23; i_13 += 1) 
            {
                var_24 = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_6 - 1])) > (((/* implicit */int) var_7))));
                arr_54 [i_11] [i_11 + 2] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-1))) ? (((/* implicit */int) (short)20825)) : (((/* implicit */int) (short)13353))));
            }
        }
        for (short i_14 = 1; i_14 < 20; i_14 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_15 = 1; i_15 < 23; i_15 += 2) 
            {
                for (short i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((short) ((short) var_0)))));
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                        var_27 = ((/* implicit */short) max((var_27), (((short) arr_45 [i_6 - 2] [i_6]))));
                        arr_65 [i_6] [i_14 + 4] [i_15] [i_14] = ((/* implicit */short) (~(((/* implicit */int) arr_35 [i_15 + 1] [i_14 - 1] [i_6 - 2] [(short)9]))));
                    }
                } 
            } 
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_6 + 1])) ? (((/* implicit */int) (short)20822)) : (((/* implicit */int) var_8))));
            var_29 = var_0;
            var_30 = var_0;
        }
    }
    for (short i_17 = 3; i_17 < 14; i_17 += 4) 
    {
        var_31 = ((/* implicit */short) min((var_31), (var_1)));
        arr_69 [i_17] [i_17 + 1] &= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_17] [i_17 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))))));
    }
}
