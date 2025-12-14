/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42467
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        var_16 = arr_5 [i_0] [i_1] [i_2 + 1];
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(unsigned short)14])) : (((/* implicit */int) ((unsigned char) (short)14149)))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)20219))))) ? (((((/* implicit */int) arr_8 [(unsigned char)1] [(short)16] [(short)16] [i_1] [i_0])) / (((/* implicit */int) arr_5 [i_1] [i_0] [i_3])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)0])) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)8])))))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_18 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14149)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)223)))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((unsigned short) ((short) (unsigned char)18)))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_8 [i_6] [i_2] [(short)1] [(unsigned char)10] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_16 [i_0] [i_0])))) : ((~(((/* implicit */int) (short)0))))));
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_1] [(short)15]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (unsigned char)250))));
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) arr_9 [i_2] [(unsigned char)11])))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            arr_22 [i_0] [(unsigned char)8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_1] [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_8])) : (((/* implicit */int) arr_16 [i_1] [i_1])))) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_2]))));
                            var_24 = (unsigned char)80;
                            arr_23 [i_8] [i_8] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1] [(unsigned short)10] [i_8])) * (((/* implicit */int) (unsigned short)36101))))) ? (((/* implicit */int) arr_18 [i_2 + 1] [i_1] [i_2] [i_1] [i_1] [i_1])) : (((/* implicit */int) ((unsigned char) (unsigned char)139)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (unsigned short)65528))));
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (short)-9972)) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0])) != (((/* implicit */int) (unsigned char)16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)174))))))))));
                                arr_30 [i_9] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) (short)-29073)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (short)-4928)) : (((/* implicit */int) (short)-26812)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)185)) || (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (short i_11 = 1; i_11 < 19; i_11 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~((~(((/* implicit */int) min((arr_31 [i_11]), (arr_31 [i_11])))))))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            for (unsigned short i_13 = 1; i_13 < 21; i_13 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_11])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_33 [i_12]))))) ? (((/* implicit */int) arr_32 [i_12])) : (((/* implicit */int) arr_36 [i_11] [i_11] [i_11 + 3])))) : (((/* implicit */int) min((min((arr_31 [(unsigned char)12]), (((/* implicit */unsigned short) (unsigned char)255)))), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)122)))))))))));
                    var_30 = ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) arr_33 [i_11])))))), (((((/* implicit */_Bool) arr_38 [i_12] [i_12] [i_13])) ? (((/* implicit */int) arr_37 [i_11] [i_12] [i_13 + 1] [i_11 + 2])) : (((((/* implicit */int) arr_33 [i_12])) % (((/* implicit */int) (short)2153))))))));
                    var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)8))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_14 = 1; i_14 < 21; i_14 += 2) 
        {
            for (unsigned short i_15 = 4; i_15 < 21; i_15 += 1) 
            {
                for (unsigned char i_16 = 1; i_16 < 20; i_16 += 1) 
                {
                    {
                        arr_46 [i_15] [i_16] [i_15] [i_14] [i_16] [i_11] = ((/* implicit */unsigned char) ((min((((((/* implicit */int) arr_33 [i_11 - 1])) ^ (((/* implicit */int) arr_41 [i_16] [i_15] [(unsigned char)0] [i_11])))), (((/* implicit */int) arr_40 [i_11])))) >= ((-(((/* implicit */int) arr_31 [(unsigned char)19]))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45317)) ? (((/* implicit */int) (unsigned short)58334)) : (((/* implicit */int) arr_43 [i_11] [i_14] [i_15] [i_16] [i_16] [i_16]))))) ? (((/* implicit */int) arr_40 [(unsigned char)21])) : (((((/* implicit */_Bool) arr_45 [i_11] [i_14 + 1] [i_14 + 1] [i_16] [i_16])) ? (((/* implicit */int) arr_41 [i_14 - 1] [i_14] [(unsigned char)5] [(unsigned char)5])) : (((/* implicit */int) arr_38 [i_16] [i_15 - 1] [i_11]))))))) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (unsigned char)252))));
                        var_33 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_34 [i_11 + 3] [i_14 - 1])) ? (((/* implicit */int) arr_34 [i_14 - 1] [i_15 - 3])) : (((/* implicit */int) (unsigned char)9)))), ((~(((/* implicit */int) (short)0))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_17 = 3; i_17 < 14; i_17 += 1) 
    {
        var_34 = ((/* implicit */unsigned char) min((var_34), ((unsigned char)135)));
        /* LoopNest 2 */
        for (unsigned char i_18 = 2; i_18 < 13; i_18 += 4) 
        {
            for (unsigned char i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                {
                    arr_55 [i_18] [(short)8] [i_18] [i_18] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)20219)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned short)7198))));
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (short)23683)) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) (unsigned short)45327)) ? (((/* implicit */int) arr_53 [i_18] [i_19] [i_18])) : ((~(((/* implicit */int) (unsigned short)8)))))))))));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((unsigned char) (unsigned short)54504))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)15)))) : (((/* implicit */int) var_1))))));
    var_37 = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned char)109)))) : (((/* implicit */int) min((var_11), (var_11)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60808)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65531))))) ? (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)112)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))));
    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_5), (((/* implicit */short) var_0)))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)115))))))) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)21137)) : (((/* implicit */int) (unsigned short)65535)))) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))))));
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) (unsigned char)137)))));
}
