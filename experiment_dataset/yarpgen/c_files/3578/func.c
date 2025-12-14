/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3578
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
    var_11 = min((var_4), (var_2));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((short) arr_1 [i_0 + 1] [i_0 + 1]);
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_14 = ((short) var_2);
            var_15 = ((/* implicit */short) ((arr_6 [i_0 + 2] [i_1] [i_1]) != (((/* implicit */int) var_5))));
            var_16 = ((short) var_7);
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (short i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_17 = arr_16 [i_4] [i_3] [i_2] [i_0 + 1];
                        arr_17 [i_0] [i_3] [i_3] = var_9;
                        var_18 = (~(((/* implicit */int) var_5)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((short) arr_23 [i_0 + 2] [i_2] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]));
                            var_20 = ((/* implicit */short) ((int) arr_9 [i_0] [i_0]));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) min((var_21), (var_6)));
            }
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (int i_10 = 1; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_22 ^= ((short) var_1);
                            var_23 = var_10;
                            var_24 -= ((/* implicit */short) (~(((/* implicit */int) var_10))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) var_7);
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    {
                        arr_38 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1] = arr_2 [i_12];
                        var_26 = ((/* implicit */short) (-(((int) arr_21 [i_2]))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */short) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_6)) - (1034)))));
    }
    /* vectorizable */
    for (short i_13 = 3; i_13 < 7; i_13 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_14 = 2; i_14 < 8; i_14 += 2) 
        {
            for (short i_15 = 3; i_15 < 9; i_15 += 3) 
            {
                for (int i_16 = 3; i_16 < 9; i_16 += 2) 
                {
                    {
                        arr_48 [i_15] [i_14] [i_14] [i_15] = var_9;
                        arr_49 [i_14] &= ((short) var_9);
                        var_28 = ((short) arr_18 [i_13] [i_13] [i_15] [i_13]);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) arr_46 [i_13] [i_13] [6] [i_13 + 2]);
    }
    for (short i_17 = 3; i_17 < 7; i_17 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
        var_31 = ((/* implicit */int) ((short) var_10));
        /* LoopSeq 1 */
        for (short i_18 = 3; i_18 < 8; i_18 += 2) 
        {
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                for (short i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    for (short i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        {
                            var_32 ^= (~(((/* implicit */int) ((short) var_3))));
                            var_33 = ((short) min((((/* implicit */int) var_10)), (arr_4 [i_17 - 2] [i_17 - 1])));
                            arr_65 [i_17 - 3] [i_18] [i_17] [i_20] [i_21] = var_9;
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_17 + 2] [i_17] [i_18 - 1] [i_18] [i_18] [i_17 + 2])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_18 - 3] [i_17] [i_17] [i_17])) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) arr_62 [i_17] [i_18] [i_17 + 2] [i_18 - 2] [i_18]))));
            /* LoopNest 2 */
            for (short i_22 = 0; i_22 < 10; i_22 += 1) 
            {
                for (short i_23 = 1; i_23 < 7; i_23 += 2) 
                {
                    {
                        var_35 = ((/* implicit */short) arr_46 [i_18 - 3] [i_18 - 3] [i_17] [i_23 - 1]);
                        /* LoopSeq 1 */
                        for (short i_24 = 0; i_24 < 10; i_24 += 2) 
                        {
                            var_36 = ((/* implicit */short) min((min((((/* implicit */int) var_6)), (arr_55 [i_18 + 2] [i_23 - 1]))), (((/* implicit */int) var_5))));
                            var_37 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_35 [i_18 - 1] [i_17 - 3] [i_22])) ? (var_0) : (((/* implicit */int) arr_35 [i_18 - 1] [i_17 - 3] [i_18])))), (((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) var_4)) : (var_0)))));
                            var_38 = var_1;
                            var_39 = ((short) max((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (arr_21 [i_23 - 1])));
                        }
                        var_40 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_36 [i_23] [i_18 - 2] [i_18] [i_17 - 3])) ? (((/* implicit */int) arr_36 [i_22] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_31 [i_23] [i_23 + 3] [i_17] [i_17] [i_22] [i_22]))))));
                        var_41 &= arr_42 [i_22];
                        var_42 = ((/* implicit */short) arr_15 [i_17 + 3]);
                    }
                } 
            } 
        }
        arr_73 [i_17] = ((/* implicit */short) min((max(((-(var_0))), (((/* implicit */int) var_1)))), ((+(((/* implicit */int) (short)-18314))))));
    }
    /* LoopNest 2 */
    for (short i_25 = 0; i_25 < 22; i_25 += 2) 
    {
        for (short i_26 = 0; i_26 < 22; i_26 += 2) 
        {
            {
                arr_78 [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_6), (min((var_4), (arr_75 [i_25])))))) ? (((/* implicit */int) arr_75 [i_25])) : (((/* implicit */int) arr_75 [i_25]))));
                var_43 = ((/* implicit */int) max((arr_76 [i_25] [i_25]), (((short) (short)18313))));
            }
        } 
    } 
    var_44 = ((/* implicit */short) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))), (var_3)));
}
