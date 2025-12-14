/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43035
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_11 = var_3;
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) var_4))))));
    }
    for (short i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (var_10)));
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2])))))));
        var_14 = ((/* implicit */unsigned char) (short)-1021);
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_2] [(short)9])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_6 [i_2]))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) (unsigned char)10))));
        var_16 = ((/* implicit */short) (~(((/* implicit */int) (short)1021))));
    }
    var_17 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)122))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
        {
            arr_15 [i_4] [i_3 + 4] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_3 + 2] [i_4 + 1])) >> (((((/* implicit */int) (short)-21532)) + (21543)))));
            var_18 += ((/* implicit */short) (~(((/* implicit */int) (short)8191))));
            var_19 *= ((/* implicit */short) (unsigned char)250);
        }
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 2; i_6 < 19; i_6 += 1) 
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)1035)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (short i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) (short)-1022);
                    var_22 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)69)) <= (((/* implicit */int) (short)-997)))))));
                }
            }
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        {
                            arr_32 [i_10] [i_8] = ((/* implicit */short) arr_22 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_3 + 1])) / (((/* implicit */int) arr_11 [i_3 + 2]))));
                            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_28 [(unsigned char)7] [i_5 - 1] [i_8] [i_3 + 1])) & (((/* implicit */int) (unsigned char)229))));
                        }
                    } 
                } 
                var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (short)1020)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [(unsigned char)2])))) : (((/* implicit */int) arr_24 [i_3 + 2] [i_5 + 1] [i_5 + 1]))));
                var_26 = arr_24 [i_3] [(unsigned char)18] [i_3];
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-8681)))))));
            }
            arr_33 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1021)) ? (((/* implicit */int) arr_17 [i_3] [(short)6])) : (((/* implicit */int) (short)1035))))) ? (((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) (short)-7555)) + (7561))) - (6))))) : (((((/* implicit */_Bool) arr_16 [i_3] [(unsigned char)13] [(unsigned char)13])) ? (((/* implicit */int) arr_21 [i_3])) : (((/* implicit */int) (short)5645))))));
        }
        for (unsigned char i_11 = 3; i_11 < 20; i_11 += 1) 
        {
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (+(((((/* implicit */int) (short)-1021)) ^ (((/* implicit */int) (short)1848)))))))));
            var_29 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)10173)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)145)))))));
            arr_36 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(short)10] [(short)10] [(unsigned char)11] [i_11])) ? (((/* implicit */int) (short)1042)) : (((/* implicit */int) (unsigned char)177))))) ? (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_3] [(short)16])))) : (((/* implicit */int) arr_31 [i_3] [i_3] [i_3] [i_11]))));
            /* LoopSeq 4 */
            for (short i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                arr_39 [i_3] [(unsigned char)17] [(unsigned char)17] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_38 [(unsigned char)2] [i_12])) : (((/* implicit */int) arr_29 [i_3 - 1] [i_11 + 1]))));
                arr_40 [i_12] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_18 [i_11] [i_11])) : (((/* implicit */int) arr_18 [i_3] [i_3]))));
                arr_41 [i_3] [i_11] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)28))));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) / (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_26 [i_3] [(short)9] [(short)18])) ? (((/* implicit */int) (short)21251)) : (((/* implicit */int) (unsigned char)210)))) : (((/* implicit */int) arr_37 [i_11 - 3] [i_11] [i_11]))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned char)240))));
            }
            for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_35 [i_3 + 1])))))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_3 + 1] [i_3 + 3] [i_3 + 4] [i_3])) ? (((/* implicit */int) arr_31 [i_3 + 3] [i_3 + 4] [i_3 + 2] [i_3])) : (((/* implicit */int) var_4))));
                arr_44 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-8188))));
            }
            for (unsigned char i_14 = 1; i_14 < 18; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    var_34 = ((/* implicit */short) (~(((/* implicit */int) arr_13 [i_3] [i_14 + 3]))));
                    var_35 = var_1;
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_3 + 2] [i_11 - 2])) & (((/* implicit */int) var_3))));
                }
                arr_50 [i_14] [i_14] [i_11] [i_14] = arr_16 [i_3] [(short)18] [(short)18];
            }
            for (short i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                var_37 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_47 [i_3] [i_11 + 1] [(short)19] [i_3 + 3]))));
                var_38 = ((/* implicit */short) ((unsigned char) arr_14 [i_3 + 1] [i_11 - 2]));
                arr_53 [i_3] [i_11] [i_3] [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_31 [i_3] [(short)10] [(short)7] [i_16])) ? (((/* implicit */int) (short)28312)) : (((/* implicit */int) arr_22 [i_3] [i_3] [(short)7] [i_11] [(short)6] [i_16])))) - (((/* implicit */int) var_0))));
                arr_54 [i_16] [(short)17] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (short)29636)))));
            }
        }
        arr_55 [i_3] [i_3] = ((/* implicit */short) (((-(((/* implicit */int) var_5)))) >= (((/* implicit */int) (short)16))));
    }
}
