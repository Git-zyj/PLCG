/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40398
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
    var_11 ^= ((/* implicit */unsigned char) (+((~(min((var_10), (((/* implicit */unsigned int) var_9))))))));
    var_12 ^= ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)103))))), ((~(1063690908U))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = (+(((unsigned int) max((2986724298U), (arr_1 [i_0])))));
        var_13 ^= (+(((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */unsigned int) max((-2006850338), (2006850340)))) : (max((arr_0 [(unsigned char)5]), (arr_0 [i_0 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) (-(var_3)))) ? ((+(var_7))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_1 [9]) : (12810426U))))), (((unsigned int) min((2147483647), (((/* implicit */int) (unsigned char)44)))))));
            arr_7 [i_0 + 1] [i_1] = max((max((max((((/* implicit */unsigned int) var_6)), (var_8))), (((/* implicit */unsigned int) min(((unsigned char)225), ((unsigned char)251)))))), (((/* implicit */unsigned int) ((int) 4013124417U))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] |= max((((/* implicit */int) ((unsigned char) min((536608768U), (((/* implicit */unsigned int) 1253480288)))))), (((((/* implicit */_Bool) 2006850338)) ? (1945655360) : (130007013))));
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (-(min((var_8), (2548940801U)))))) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_4)) : (arr_0 [i_0]))), (min((arr_12 [i_0 - 1] [i_0]), (4294967290U))))) : (((unsigned int) 4104809056U)))))));
                        arr_14 [i_0] [i_1] [i_3] [i_3] [i_0] [1U] = ((/* implicit */unsigned int) ((int) max((((((/* implicit */_Bool) var_1)) ? (8U) : (var_8))), (((/* implicit */unsigned int) min((11), (((/* implicit */int) (unsigned char)67))))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (max((var_5), (((/* implicit */int) arr_6 [i_6] [i_4]))))))), ((~(((((/* implicit */_Bool) arr_20 [5U] [i_4] [i_4] [i_4])) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_5 - 1] [i_0 - 1] [i_6]) : (((/* implicit */unsigned int) arr_17 [i_0 - 2] [(unsigned char)5] [i_0 + 1])))))))))));
                        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) arr_19 [i_0] [i_4] [i_4] [i_6 - 1])), (4013124417U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_4] [i_5 + 1] [5]))) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1575446441U))))) : (max((((/* implicit */int) var_0)), (1144838309)))))) : (max((min((var_7), (((/* implicit */unsigned int) arr_6 [i_0] [i_4])))), (((/* implicit */unsigned int) min((var_0), (arr_2 [i_0] [i_0]))))))));
                        var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_0] [0] [i_5 + 1] [i_6 + 1])), (arr_16 [i_0 + 1])))) ? ((~(var_4))) : (max((2147483647), (((/* implicit */int) (unsigned char)242))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    {
                        arr_32 [i_7] [i_8 - 1] [(unsigned char)13] [(unsigned char)13] = ((/* implicit */unsigned int) ((int) ((unsigned int) var_0)));
                        arr_33 [i_7] [i_7] [i_9] [13U] = ((/* implicit */int) (~(((unsigned int) arr_22 [i_7]))));
                        arr_34 [i_7] [i_8] [i_9] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 963512001U)) ? (3575289412U) : (3605789081U)))) ? (((/* implicit */unsigned int) ((int) (unsigned char)63))) : (((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_29 [i_7] [(unsigned char)6] [i_9] [(unsigned char)6]))));
                    }
                } 
            } 
            var_19 -= ((/* implicit */unsigned char) ((int) ((int) 14U)));
            arr_35 [i_7] [i_7] = ((/* implicit */int) ((unsigned int) ((unsigned char) arr_29 [i_7] [i_8] [i_7] [i_8])));
            /* LoopSeq 3 */
            for (unsigned int i_11 = 2; i_11 < 12; i_11 += 3) 
            {
                arr_38 [13U] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((int) 8)) : (((int) 719677884U))));
                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((((/* implicit */_Bool) -1935092799)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned char)229)))) : (10)));
                var_21 = ((((/* implicit */_Bool) ((unsigned int) var_2))) ? ((+(var_3))) : ((~(1896237840U))));
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_11])) ? (((/* implicit */int) var_9)) : (1935092802)))) ? ((~(1896237831U))) : (((unsigned int) arr_36 [i_7] [i_7] [i_7] [i_7 + 1])));
            }
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                arr_42 [i_12] [i_8 + 1] [i_7] = ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) 3784267559U)) ? (var_7) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_40 [i_7])))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 12; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        {
                            arr_47 [i_7] [4U] [i_12] [i_13] [i_14] |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_46 [i_13 + 2] [i_8 + 1] [i_12] [i_13] [i_14] [i_8 + 1] [i_7])))));
                            var_23 = ((/* implicit */unsigned int) ((int) ((int) var_4)));
                            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_31 [i_14] [i_12] [i_14] [i_13 + 1]))) ? (((int) 624496615U)) : (((/* implicit */int) ((unsigned char) arr_29 [i_7] [i_8 - 1] [i_8 - 1] [i_14])))));
                        }
                    } 
                } 
                arr_48 [i_7] [(unsigned char)11] [i_12] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_37 [i_7] [i_8 + 1] [i_12] [i_7])))) ? (((((/* implicit */_Bool) arr_27 [i_7 - 1] [i_8 - 1] [i_12] [i_12])) ? (1432016319U) : (1014080988U))) : (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */unsigned int) 2147483634)) : (2883513930U)))));
                var_25 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 4289609224U)) ? (3U) : (30U))));
            }
            for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                arr_51 [i_15] [i_7] = ((/* implicit */unsigned char) ((unsigned int) (~(arr_25 [i_7]))));
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (+(((unsigned int) arr_40 [(unsigned char)6])))))));
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)1))));
                    arr_54 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_7])) ? (arr_40 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_37 [i_7] [i_8] [i_15] [i_16])))) : (((((/* implicit */_Bool) var_0)) ? (624496615U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))));
                    arr_55 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_0))))));
                    arr_56 [i_8 + 1] [i_8 + 1] [i_7] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_7)) ? (arr_24 [i_7] [i_7]) : (arr_22 [i_7])))));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (-(((((/* implicit */_Bool) 885246230U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))) : (var_10))))))));
                }
                var_29 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)77))));
            }
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_28 [8U] [i_7] [i_8 - 1] [i_8 - 1])))) ? (((((/* implicit */_Bool) 4011292382U)) ? (0U) : (18U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2999101197U)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) arr_37 [i_7] [6] [i_8] [i_8])))))));
        }
        /* vectorizable */
        for (int i_17 = 4; i_17 < 13; i_17 += 2) 
        {
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 510699752U))) ? (((unsigned int) arr_41 [i_17])) : (((((/* implicit */_Bool) 352160439)) ? (((/* implicit */unsigned int) 11)) : (2329308984U))))))));
            /* LoopNest 3 */
            for (int i_18 = 4; i_18 < 12; i_18 += 4) 
            {
                for (int i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    for (unsigned int i_20 = 0; i_20 < 15; i_20 += 4) 
                    {
                        {
                            arr_66 [i_7] [i_7] [i_18 - 1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (-(arr_41 [i_7])))) : (((unsigned int) var_7))));
                            arr_67 [i_19] [i_17] [3U] [i_19] [i_20] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (-1339415890) : (arr_45 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7])))));
                            var_32 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_61 [i_7] [(unsigned char)6] [(unsigned char)6]))))));
                            var_33 ^= ((/* implicit */unsigned char) (+(((int) (unsigned char)121))));
                        }
                    } 
                } 
            } 
            var_34 = ((/* implicit */unsigned int) min((var_34), ((~(((((/* implicit */_Bool) arr_65 [i_7 + 1] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) : (663624281U)))))));
            var_35 = ((/* implicit */int) (-((+(arr_26 [i_7] [i_17] [i_7] [i_7 - 1])))));
            arr_68 [i_7 - 1] [i_7] = ((/* implicit */int) ((unsigned int) (~(-1935092799))));
        }
        var_36 = ((/* implicit */int) max(((+(((unsigned int) -1935092780)))), (min((((/* implicit */unsigned int) min(((-2147483647 - 1)), (8)))), (min((2938350846U), (arr_40 [i_7])))))));
        arr_69 [i_7] = ((/* implicit */unsigned char) min((((unsigned int) (~(31457280)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_7 + 1] [1U] [i_7 + 1] [i_7 - 1] [1U] [1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (+(0)))) : (((((/* implicit */_Bool) var_9)) ? (var_8) : (4294967291U)))))));
        arr_70 [i_7] = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) min((arr_62 [i_7 + 1] [5U] [13] [i_7 + 1] [i_7] [i_7]), (arr_62 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7] [i_7 - 1]))))), (max((((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (arr_59 [9] [i_7] [i_7])))), (min((2641798596U), (((/* implicit */unsigned int) var_4))))))));
    }
}
