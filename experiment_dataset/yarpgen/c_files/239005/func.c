/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239005
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    var_13 = var_0;
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_7) : (arr_3 [i_1] [i_2 + 2]))) : (max((((/* implicit */int) var_1)), (arr_2 [i_0] [i_0])))))) ? ((-(((/* implicit */int) (unsigned short)22)))) : ((~(var_4))));
                    arr_10 [i_2] [i_2] [i_2 - 2] [i_2] = max((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10))))))));
                    var_15 = ((/* implicit */unsigned short) (((~(-920727549))) >= ((-(((/* implicit */int) arr_0 [i_2 - 1]))))));
                }
                arr_11 [i_0] [i_1] [i_2] = min(((~(2101827473))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (arr_6 [i_0] [i_2 + 2] [i_2] [i_2]))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (((+(max((((/* implicit */int) arr_18 [i_0] [i_5])), (var_11))))) - (-159836378)));
                            var_17 += max((((/* implicit */int) ((unsigned char) var_6))), ((~(((/* implicit */int) (unsigned short)24027)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_18 = ((var_5) & (arr_3 [10] [i_1]));
                arr_23 [i_6] = ((/* implicit */unsigned short) 10);
                var_19 = ((/* implicit */int) min((var_19), (2141601075)));
                var_20 = ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6])) ? (var_5) : (((/* implicit */int) arr_16 [i_0] [19] [i_1] [i_1] [i_1] [i_6])));
            }
            for (int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_21 ^= (+(((max((-2147483624), (-2147483624))) / (arr_9 [1] [i_0] [i_1]))));
                            arr_31 [i_7] [i_1] [i_7] [i_7] [i_7] [13] [i_7] = (-(min(((+(((/* implicit */int) arr_15 [i_0] [i_1] [i_7] [i_8 + 1] [i_9])))), (2147483647))));
                            var_22 = ((((max((var_2), (((/* implicit */int) arr_13 [15] [i_1] [i_7] [i_7])))) | (754046635))) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (arr_26 [i_0] [i_7] [i_8 + 2]))) : (((/* implicit */int) arr_13 [8] [i_7] [i_8 + 1] [i_9])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_10 = 3; i_10 < 19; i_10 += 2) 
                {
                    var_23 = ((/* implicit */int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_24 = (unsigned short)59995;
                        arr_36 [8] [i_1] [i_7] [i_7] [i_7] = min(((((-(var_6))) - (((((/* implicit */int) var_1)) & (arr_3 [i_0] [i_0]))))), ((+(max((arr_5 [i_11]), (var_10))))));
                    }
                }
                for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    var_25 = ((/* implicit */int) max((var_25), ((-(max((754046635), (-1)))))));
                    var_26 = ((/* implicit */int) max((var_26), (max((((arr_5 [i_12]) / (arr_5 [i_0]))), (max((arr_5 [i_0]), (var_11)))))));
                }
                for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    var_27 = ((((/* implicit */int) (!(((var_9) == (var_4)))))) & (((/* implicit */int) ((((/* implicit */_Bool) max((-1481026590), (arr_39 [i_0] [i_0] [i_0] [i_0])))) || ((!(((/* implicit */_Bool) arr_17 [i_1] [1] [(unsigned short)16]))))))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)46164))))) && (((var_5) >= (var_5))))))))));
                }
                var_29 = ((/* implicit */unsigned short) (~(17)));
            }
            var_30 = (~((~(arr_6 [i_1] [i_1] [i_1] [i_0]))));
            /* LoopSeq 1 */
            for (int i_14 = 1; i_14 < 17; i_14 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_15 = 1; i_15 < 19; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        var_31 = (unsigned short)35990;
                        var_32 = (-(((/* implicit */int) arr_40 [i_15 - 1] [i_14 + 3] [i_14])));
                    }
                    for (int i_17 = 1; i_17 < 19; i_17 += 1) 
                    {
                        var_33 = arr_38 [i_0] [i_0] [i_14] [i_17] [i_0];
                        var_34 = (-(-754046633));
                        var_35 = ((/* implicit */unsigned short) (+((+(arr_12 [i_1] [i_15 + 1])))));
                        arr_53 [i_0] [i_17] [i_0] [i_0] [i_0] [i_0] [i_0] = (-(-2101827471));
                        var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)16449))));
                    }
                    var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_32 [i_15 + 1] [i_14 + 1] [i_15 + 1] [i_15] [i_1]))));
                    var_38 = ((arr_19 [i_0] [9] [i_14]) >> (((((/* implicit */int) arr_46 [i_14 + 1] [i_14 + 2] [i_14] [i_14 + 3] [i_14 + 3])) - (39089))));
                    arr_54 [i_14 - 1] [11] [i_0] = ((0) << (((2147483643) - (2147483638))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_18 = 1; i_18 < 17; i_18 += 1) 
                {
                    var_39 = ((/* implicit */unsigned short) 2147483647);
                    var_40 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)242)), (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned short)29702))))));
                }
                for (unsigned short i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    arr_60 [i_0] [(unsigned char)4] [i_1] [i_1] [i_19] [19] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_14] [i_19])), (((-104980600) & (var_2)))))));
                    var_41 ^= var_9;
                }
                /* vectorizable */
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        var_42 ^= ((/* implicit */unsigned char) (+(-248214892)));
                        arr_67 [i_21] [i_14 + 2] [i_1] [i_0] = ((/* implicit */int) (((~(arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_21]))) >= (arr_35 [i_14 + 3] [i_14 + 1] [i_14 - 1])));
                        var_43 = ((/* implicit */unsigned short) (-(1026255693)));
                    }
                    for (int i_22 = 3; i_22 < 19; i_22 += 2) 
                    {
                        arr_70 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_52 [10] [10] [10] [i_20] [i_22] [11])) ? (var_12) : (var_2)))));
                        var_44 += ((/* implicit */unsigned short) (-(arr_39 [(unsigned short)10] [i_1] [i_14 + 2] [i_22 - 2])));
                        var_45 = ((((((/* implicit */_Bool) arr_64 [i_0])) && (((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0] [i_0] [(unsigned char)10])))) ? (arr_26 [i_22 + 1] [i_20] [i_20]) : (((/* implicit */int) ((((/* implicit */_Bool) -829893614)) || (((/* implicit */_Bool) arr_20 [i_1]))))));
                    }
                    for (int i_23 = 0; i_23 < 20; i_23 += 2) 
                    {
                        var_46 = ((((/* implicit */_Bool) arr_58 [i_14 + 2] [i_14 + 1] [i_14 + 2] [i_14 - 1])) ? (((/* implicit */int) arr_58 [i_14 + 3] [i_14 + 1] [i_14 - 1] [i_14 + 3])) : (((/* implicit */int) arr_58 [(unsigned char)3] [i_14 + 1] [i_14 + 1] [i_14 + 1])));
                        var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_0] [19] [i_0])) ? (arr_22 [i_14] [i_20] [7]) : (((/* implicit */int) (unsigned char)0))))) ? (var_7) : ((-(((/* implicit */int) (unsigned char)106)))));
                        arr_73 [i_0] [i_1] [i_1] [(unsigned short)19] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -778312594)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)8))))) ? (var_2) : (((/* implicit */int) arr_16 [i_1] [i_14] [i_14 + 1] [i_14 - 1] [i_14] [i_23])));
                        var_48 = (-(((/* implicit */int) var_8)));
                    }
                    arr_74 [i_0] [i_1] [i_14 + 2] [i_20] = arr_19 [i_20] [i_14] [i_1];
                    var_49 = (-(((16776960) ^ (arr_64 [i_0]))));
                    var_50 = (+((-(arr_47 [i_0] [i_1] [i_1] [(unsigned short)1] [i_1]))));
                }
            }
        }
        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_25 = 1; i_25 < 18; i_25 += 3) 
            {
                for (unsigned short i_26 = 2; i_26 < 19; i_26 += 2) 
                {
                    for (int i_27 = 1; i_27 < 18; i_27 += 1) 
                    {
                        {
                            var_51 -= ((/* implicit */unsigned char) max(((+(var_9))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)192)) / (arr_17 [i_0] [i_0] [i_25])))))));
                            var_52 = arr_79 [i_24] [i_25 + 1] [i_26] [(unsigned short)14];
                            var_53 = min(((~(max((((/* implicit */int) (unsigned char)204)), (-378890003))))), ((~(arr_37 [i_27] [i_27] [i_27] [i_27 - 1] [i_27]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 20; i_28 += 3) 
            {
                for (unsigned short i_29 = 0; i_29 < 20; i_29 += 4) 
                {
                    {
                        var_54 ^= ((/* implicit */unsigned char) ((((int) (-2147483647 - 1))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_0] [i_0] [i_0])) ? (arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] [1]) : (((/* implicit */int) (unsigned short)1830))))) ? (((var_5) / (var_9))) : ((+((-2147483647 - 1))))))));
                        var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) (+(max((((arr_75 [5]) & (var_6))), (-1293908864))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 20; i_30 += 2) 
        {
            for (unsigned short i_31 = 3; i_31 < 18; i_31 += 2) 
            {
                {
                    var_56 = ((/* implicit */unsigned short) (((~(2147483647))) == (((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [i_0]))));
                    arr_100 [i_0] [i_30] [i_31] = (-(max((255933319), (((/* implicit */int) arr_8 [i_31 - 2])))));
                    arr_101 [i_31] [i_30] [i_31] = ((((/* implicit */_Bool) max(((-(var_9))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_6)))))))) ? (max((arr_29 [i_0] [(unsigned short)1] [i_31 + 2] [i_31 + 2] [i_31 - 3] [(unsigned short)11] [i_31 - 2]), (var_10))) : ((+((+(((/* implicit */int) (unsigned char)11)))))));
                    var_57 = (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> ((((~(((/* implicit */int) (unsigned short)65535)))) + (65548))))));
                }
            } 
        } 
        arr_102 [i_0] = var_4;
        var_58 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) arr_87 [10] [i_0] [i_0]))), ((+(((((/* implicit */int) (unsigned char)240)) | (var_4)))))));
    }
    var_59 = (+(max((((/* implicit */int) var_1)), (max((var_12), (1203226047))))));
}
