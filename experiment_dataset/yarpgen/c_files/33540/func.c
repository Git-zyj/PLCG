/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33540
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_5)))))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32753)))))));
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6750)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_6)))))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_0)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_8)))) & (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-32753)))), (((/* implicit */int) ((((/* implicit */int) (short)-32759)) != (((/* implicit */int) (unsigned char)121)))))))));
            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2])))) - (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_6)))))));
            arr_14 [i_2] = ((/* implicit */unsigned char) (short)-6752);
        }
        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        arr_21 [i_2] [(unsigned char)6] [i_5] [i_2] [i_6] = ((/* implicit */short) min((((/* implicit */int) arr_11 [i_2] [i_4 + 2] [i_5])), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-32767)))), (((((/* implicit */_Bool) (short)19)) ? (((/* implicit */int) arr_1 [i_2 - 1] [i_2])) : (((/* implicit */int) var_3))))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 11; i_7 += 4) 
                        {
                            arr_25 [i_2] [i_2] [i_5] [i_6] = ((/* implicit */short) (unsigned char)108);
                            arr_26 [i_2] [(unsigned char)12] [i_2] [i_7] [i_7] [i_5] = min(((unsigned char)253), (arr_10 [i_6] [i_7]));
                            var_16 = ((/* implicit */short) (~(((/* implicit */int) max((min(((short)18991), (((/* implicit */short) arr_1 [(unsigned char)12] [i_6])))), (((/* implicit */short) min(((unsigned char)250), (var_6)))))))));
                            arr_27 [i_2] [i_4 + 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)114))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((((/* implicit */short) arr_17 [i_2] [i_7 + 2] [i_7])), (arr_16 [i_2])))) : ((+(((((/* implicit */int) var_12)) & (((/* implicit */int) var_1))))))));
                            var_17 = ((short) (+(((/* implicit */int) arr_11 [i_2 - 1] [i_7 - 3] [i_4 - 1]))));
                        }
                        var_18 = ((/* implicit */unsigned char) min((var_18), (var_12)));
                    }
                } 
            } 
            arr_28 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_3), (var_10))))));
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_37 [i_10] [i_4] [i_8] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_23 [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2]), (arr_17 [i_2] [i_4] [i_2])))), (((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)11))))))) && (((/* implicit */_Bool) (short)-12587))));
                            var_19 += ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_2 [i_9] [(short)6] [i_8])) & (((((/* implicit */_Bool) arr_12 [i_2] [i_8] [i_9])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) min((min((arr_33 [i_2] [i_4] [(short)8] [i_2]), (((/* implicit */short) var_10)))), (((/* implicit */short) (unsigned char)242))))) * (((/* implicit */int) ((((((/* implicit */int) var_0)) * (((/* implicit */int) var_2)))) < (((/* implicit */int) max((((/* implicit */short) var_5)), ((short)32756)))))))));
                            arr_38 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_2] [(short)1])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_4])))) * (((/* implicit */int) max(((short)2044), ((short)-1))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)119)) ? (min((((((/* implicit */int) arr_34 [i_4] [i_2] [i_4] [(unsigned char)4] [i_2])) & (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (short)1064)) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [(short)8])) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) min(((unsigned char)27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-32766))))))))));
            arr_39 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) min((arr_17 [i_2] [i_2] [(unsigned char)10]), ((unsigned char)185)))))))));
        }
        arr_40 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_2 + 1] [i_2 + 1])) > (((/* implicit */int) max((var_8), (arr_32 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_1))));
    }
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_12 = 3; i_12 < 24; i_12 += 3) 
        {
            arr_45 [i_12] [i_11] [(unsigned char)8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (short)7962)) : ((~(((/* implicit */int) var_0))))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_11] [i_12 - 1])) ? (((/* implicit */int) arr_44 [i_12] [i_12 - 3] [(unsigned char)14])) : (((/* implicit */int) var_1))));
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)12))));
                arr_48 [i_12] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_2)))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_1))))));
                arr_49 [i_11] [i_13] [i_12] [(unsigned char)17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_11] [i_12 - 3] [i_13])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))));
                arr_50 [i_12] [i_13] [i_13] [i_13] = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)140)))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) var_8))))));
                arr_51 [i_11] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_12 - 1])) ? (((/* implicit */int) arr_46 [i_13] [i_12] [i_12 - 3] [i_12 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            }
            for (short i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                var_25 = ((/* implicit */short) ((((/* implicit */int) arr_43 [i_12 - 1] [i_12 - 1])) > ((~(((/* implicit */int) (short)10079))))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 2; i_15 < 22; i_15 += 4) 
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_12] [i_14] [i_15] [i_15 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_52 [i_14] [i_15] [i_15] [i_15 - 1]))));
                    arr_58 [i_12] [i_11] [i_14] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_55 [i_15 + 1] [i_15]))));
                    arr_59 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_15 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))));
                    var_27 = var_0;
                }
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_16 = 3; i_16 < 24; i_16 += 2) 
        {
            var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_44 [i_11] [i_11] [i_16])) - (((/* implicit */int) var_12))))))) ? ((((!(((/* implicit */_Bool) var_11)))) ? ((-(((/* implicit */int) arr_44 [i_11] [i_16] [(short)10])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-19143)) + (((/* implicit */int) (short)32761))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_12), ((unsigned char)235))))))));
            var_29 = ((/* implicit */short) min(((~(((((/* implicit */int) (short)-31868)) - (((/* implicit */int) var_3)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))))));
        }
    }
    var_30 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (short)-1908)) : (((/* implicit */int) (short)32743)))), (((((/* implicit */int) var_11)) - (((/* implicit */int) var_2))))))));
}
