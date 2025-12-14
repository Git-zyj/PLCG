/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200773
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
    var_14 = ((/* implicit */_Bool) (+(var_13)));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    arr_8 [i_0] [2] [2] [(_Bool)1] = (+(max((arr_0 [i_0 - 3]), (((/* implicit */int) var_7)))));
                    var_15 = ((/* implicit */short) arr_2 [2]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)3] [(short)3] [i_1] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 4] [i_0] [i_0] [i_2 + 2])) : (((/* implicit */int) arr_12 [i_0] [i_2 - 4] [(short)1] [i_2 - 4] [i_2 - 4]))))) ? (max((var_11), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_12 [i_2 + 2] [(short)4] [i_2] [i_2 - 3] [i_2 + 1])) ? (((/* implicit */int) arr_12 [i_0] [1] [i_1] [i_1] [i_2 - 3])) : (((/* implicit */int) arr_12 [i_1] [7] [i_1] [(_Bool)1] [i_2 - 3])))));
                            var_17 = ((/* implicit */_Bool) var_0);
                        }
                        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_5] [i_0] [i_0] = max((((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((int) -16)) : (((/* implicit */int) ((var_0) > (arr_6 [i_2])))))), (max((((/* implicit */int) (_Bool)1)), (var_11))));
                            arr_19 [i_0 - 4] [(_Bool)1] [i_5] = ((/* implicit */short) ((-2147483638) < (((/* implicit */int) var_9))));
                            var_18 = ((((((/* implicit */int) (short)-1)) - (arr_7 [i_5] [i_1] [(_Bool)1]))) > (((/* implicit */int) (short)6)));
                            var_19 = ((/* implicit */_Bool) arr_13 [i_0]);
                        }
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */short) arr_21 [i_0 - 3] [i_0 - 3] [4] [(short)9] [i_2 + 2] [i_2 + 2] [i_6]);
                            arr_23 [3] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-((-(max((var_10), (var_3)))))));
                            var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((-763952409), (arr_22 [i_3] [i_6])))))) || (var_1)));
                            arr_24 [i_1] = max((((((/* implicit */_Bool) arr_7 [i_2 - 3] [i_2 - 3] [i_0 - 2])) ? (arr_7 [i_2 - 4] [i_1] [i_0 + 1]) : (arr_7 [i_2 + 1] [i_2 + 1] [i_0 - 4]))), (max((((var_1) ? (arr_20 [i_0] [i_1] [(short)6] [i_2 - 4] [i_3] [i_0]) : (var_6))), (((/* implicit */int) ((((/* implicit */_Bool) (short)32741)) || (((/* implicit */_Bool) var_4))))))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = var_8;
                        arr_27 [0] [i_1] [i_1] [i_7] &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (-714639223)))) && (((/* implicit */_Bool) (-(((arr_3 [(short)3] [i_7]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_0 - 4])))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 3] [i_1] [i_0 - 3])) ? (((var_6) * (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_13 [2]))))) ? (((((/* implicit */_Bool) arr_22 [i_0 - 3] [i_0 - 3])) ? (var_11) : (arr_22 [i_0 - 2] [i_0 - 3]))) : (-2147483643)));
                            var_24 = max((((arr_21 [i_8 + 1] [i_1] [i_0 - 3] [3] [i_2 + 1] [i_8 + 1] [i_2]) ? (((/* implicit */int) arr_21 [i_8 + 1] [i_1] [i_0 - 3] [(short)3] [i_2 - 1] [i_1] [i_2 + 1])) : (var_13))), (((/* implicit */int) arr_21 [i_8 + 1] [i_1] [i_0 - 2] [i_7] [i_2 - 3] [i_0 - 2] [i_0 - 2])));
                            var_25 &= ((/* implicit */short) -1772920065);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_7] = (-(((((/* implicit */_Bool) var_0)) ? (((arr_28 [i_2 - 2] [i_2 - 4] [i_7] [i_7] [(_Bool)1] [i_2 - 4] [i_7]) ? (var_3) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [(short)5] [i_1] [i_2 + 2] [i_7] [i_9])) == (arr_9 [(_Bool)1])))))));
                            arr_34 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((-349194379) | (((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1] [i_2 - 4] [i_7] [i_9] [i_0 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_13 [i_1])))));
                            var_26 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (arr_7 [i_7] [i_2 - 2] [i_0]) : (((/* implicit */int) max((((/* implicit */short) var_9)), ((short)25)))))), ((+(((/* implicit */int) arr_13 [i_0 - 2]))))));
                            arr_35 [i_0] [i_1] [i_7] [i_7] [i_9] [i_2 - 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0 - 3] [i_2 - 4])), ((-(((/* implicit */int) arr_17 [i_7] [i_1] [i_2 - 1] [i_7] [i_9]))))))) ? (((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) != (var_11)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_32 [1] [i_7] [(short)7] [i_9])) : (((/* implicit */int) var_1)))))) : (min((-134217728), (1073725440)))));
                            var_27 = ((/* implicit */_Bool) min((var_10), (((((arr_30 [0] [7] [3] [i_2 - 2] [7] [3] [(short)4]) && (var_9))) ? (((/* implicit */int) min((var_7), ((short)-10)))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_0] [i_9]))))));
                        }
                        for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_5 [i_2 + 1]))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) arr_37 [i_0 + 1] [i_1] [i_2 - 1] [i_0 - 1] [i_1])) ? (min((((/* implicit */int) arr_1 [7])), (var_6))) : (((/* implicit */int) var_8))))));
                            arr_40 [i_7] [1] [1] [(short)3] = ((/* implicit */_Bool) (((_Bool)1) ? (((-1823273163) | (-1861673071))) : (((/* implicit */int) (short)-18))));
                            var_29 = ((var_3) & (((arr_20 [5] [i_10] [8] [i_2 + 2] [i_1] [i_1]) & (arr_20 [i_0 - 1] [i_2] [i_2 - 2] [i_2 - 2] [i_0 - 1] [(short)1]))));
                        }
                    }
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_30 = (-(((/* implicit */int) var_8)));
                    var_31 = ((/* implicit */_Bool) arr_10 [(_Bool)1] [1] [(_Bool)1] [(_Bool)1]);
                    /* LoopSeq 2 */
                    for (int i_12 = 1; i_12 < 7; i_12 += 1) 
                    {
                        var_32 |= ((short) ((arr_28 [i_0] [i_0 - 2] [i_1] [0] [2] [i_0] [0]) ? (((/* implicit */int) (short)-16384)) : (arr_5 [i_0 - 1])));
                        var_33 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_11] [i_12 + 2])) ? (max((var_11), (((/* implicit */int) arr_26 [i_0] [(short)3])))) : (((/* implicit */int) arr_39 [i_1]))))) ? (1456202330) : (min((((/* implicit */int) arr_13 [(_Bool)1])), (((arr_9 [i_11 - 1]) - (((/* implicit */int) arr_1 [i_0]))))))));
                        arr_47 [i_11] [i_1] [i_11] = ((short) ((_Bool) arr_7 [i_0 - 3] [4] [4]));
                        var_34 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_44 [i_0] [i_1] [i_11 - 1] [i_12 + 2])) ? (var_0) : (((var_1) ? (((/* implicit */int) arr_21 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1] [4] [(short)6] [6])) : (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0])))))) != (max(((~(665354768))), ((~(((/* implicit */int) arr_11 [i_0] [i_1] [i_11] [i_12 + 1] [i_12]))))))));
                        var_35 = ((/* implicit */int) max((var_35), (max((((/* implicit */int) (_Bool)1)), (75401219)))));
                    }
                    for (int i_13 = 1; i_13 < 8; i_13 += 1) 
                    {
                        arr_50 [(_Bool)1] [i_1] [i_11] [i_13 + 1] [(short)8] = ((/* implicit */short) (((~(((((/* implicit */int) var_8)) ^ (var_0))))) << (((((/* implicit */int) ((((/* implicit */_Bool) (short)32762)) && (((/* implicit */_Bool) (short)255))))) - (1)))));
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((40451009) < (((/* implicit */int) (_Bool)1)))))));
                        var_37 = min((min((min((arr_22 [i_0] [i_0]), (((/* implicit */int) arr_11 [0] [i_13 - 1] [i_0] [(short)6] [i_0])))), (var_6))), (((((/* implicit */int) arr_15 [i_0 - 3] [7] [i_1] [i_11 - 1] [i_13 - 1] [i_1] [i_0 - 2])) ^ (((/* implicit */int) arr_15 [i_0 - 2] [i_1] [4] [i_11 - 1] [i_13 + 1] [i_13 - 1] [i_0 - 2])))));
                    }
                    arr_51 [i_11] [i_1] [i_11] = (-(((/* implicit */int) min((var_5), (var_12)))));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_38 = ((((/* implicit */_Bool) var_4)) ? (max((((((/* implicit */_Bool) 75401235)) ? (var_11) : (((/* implicit */int) arr_11 [i_0] [7] [i_11 - 1] [i_14] [7])))), (((((/* implicit */int) var_12)) & (129024))))) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) arr_38 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0])))));
                                arr_56 [i_0] [i_11] [i_0] [i_14 - 1] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_0 - 2] [i_11] [i_11] [i_14 - 1])) ? (((/* implicit */int) arr_30 [(_Bool)0] [i_1] [(short)0] [i_11 - 1] [5] [3] [5])) : (arr_5 [i_14 - 1]))) : ((~(((/* implicit */int) (short)2))))));
                            }
                        } 
                    } 
                }
                for (int i_16 = 1; i_16 < 9; i_16 += 1) 
                {
                    var_39 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) >= (arr_42 [i_1] [i_16 - 1] [i_16 + 1] [(short)2])))) <= (((/* implicit */int) var_9))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (short)31059))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -34843441))))) : (((arr_41 [4] [i_1] [i_0]) ? (((/* implicit */int) arr_41 [i_1] [(_Bool)0] [i_1])) : (((/* implicit */int) arr_41 [i_16 + 1] [i_1] [i_0])))))))));
                    var_41 = ((/* implicit */short) arr_52 [i_1]);
                    var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_1])) ? (((/* implicit */int) arr_38 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_0 - 4] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_38 [i_0 - 2] [i_16] [i_16 + 1] [i_0 - 2] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (+(arr_20 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0 - 1])))) ? ((-(((/* implicit */int) (short)-1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_1] [(short)9] [i_0])) || (((/* implicit */_Bool) var_11)))))))));
                }
                var_43 = ((((/* implicit */_Bool) ((arr_49 [i_0 + 1] [i_1] [i_1] [i_0 - 4]) - (arr_49 [2] [2] [i_0 + 1] [i_0 - 3])))) ? (min((arr_49 [9] [9] [9] [i_0 - 3]), (arr_49 [i_0 - 2] [4] [0] [i_0 - 3]))) : (((arr_49 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2]) >> (((((/* implicit */int) var_8)) + (21594))))));
                var_44 = max((-1918057669), (566863264));
                var_45 = ((int) var_4);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_17 = 1; i_17 < 20; i_17 += 4) 
    {
        var_46 = ((_Bool) max((((/* implicit */int) arr_61 [i_17 + 2] [i_17 + 2])), (arr_60 [i_17 + 2])));
        var_47 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_17] [i_17 - 1]))))) ? (((((/* implicit */_Bool) (short)8)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-22445)))) : (((((/* implicit */_Bool) 298584334)) ? (((/* implicit */int) (short)17306)) : (-5))));
        arr_62 [i_17] = ((/* implicit */int) arr_61 [(_Bool)1] [(short)3]);
        var_48 += ((/* implicit */short) ((int) ((((/* implicit */_Bool) min((-40451028), (var_3)))) ? (((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_61 [i_17 + 2] [(short)21])) - (22424))))) : ((+(-1146412495))))));
    }
}
