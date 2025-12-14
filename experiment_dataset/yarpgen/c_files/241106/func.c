/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241106
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
    var_12 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)0));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)-19827)))) : (((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) (unsigned char)6))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)224)), ((short)8192)))) : (((/* implicit */int) var_2))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_6 [i_1] [i_1]))));
            /* LoopSeq 3 */
            for (short i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */int) var_1)) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-32307)) : (((/* implicit */int) arr_6 [i_3] [i_2]))))));
                    var_16 = ((/* implicit */unsigned char) (unsigned short)9385);
                }
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (short)8192)))));
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) (short)-17540))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3 + 3] [i_3 - 1] [i_3] [i_5] [i_5])) ? (((/* implicit */int) arr_12 [i_2] [i_3 + 3] [(unsigned short)22] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_7))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_1] [i_2]))));
                    arr_17 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [(short)21] [i_2] [i_3] [i_5] [i_2] [i_5])) < (((/* implicit */int) arr_13 [(short)20] [(short)20] [i_5] [i_5] [i_5] [i_5]))));
                }
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_3 + 3] [i_3] [i_3 + 4] [i_3 + 4]))));
                    arr_20 [i_2] = ((/* implicit */unsigned short) var_5);
                    arr_21 [i_1] [(unsigned short)3] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)16383))));
                    var_22 = ((/* implicit */unsigned char) arr_8 [i_2] [i_6] [(unsigned char)4] [i_6]);
                    var_23 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)0))));
                }
                arr_22 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)0))));
                arr_23 [i_2] = ((/* implicit */unsigned char) arr_9 [i_2] [i_2] [i_2]);
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_28 [i_1] [i_2] [i_7] = ((/* implicit */short) arr_10 [i_2] [i_2]);
                    arr_29 [i_2] [(unsigned char)18] [(unsigned short)12] [i_7] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) (short)30119)));
                    var_24 *= ((/* implicit */short) var_10);
                }
                for (unsigned char i_8 = 1; i_8 < 23; i_8 += 1) 
                {
                    arr_32 [i_1] [(unsigned short)12] [i_2] [i_8] = ((/* implicit */unsigned char) var_5);
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        arr_35 [i_1] [i_2] [i_3] [i_8] [i_1] [i_2] [i_9] = ((/* implicit */unsigned char) arr_16 [i_1] [i_2] [i_3 + 2] [i_3 + 2]);
                        arr_36 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1] [i_8 - 1] [i_9 + 1]))));
                        arr_37 [i_1] [i_2] [i_3 + 4] [i_3 + 4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_2] [i_3] [i_8] [i_9])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_25 [i_1] [i_2] [i_3] [(unsigned char)6] [(short)20])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_3 - 2] [i_3] [i_3] [i_9]))))));
                        var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) | (((/* implicit */int) var_2))));
                        arr_38 [i_2] [i_2] [i_3 - 1] [i_8] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)0)))) != (((/* implicit */int) (short)15134))));
                    }
                    for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)0)))) / (((/* implicit */int) arr_25 [i_1] [i_2] [i_3] [i_2] [i_1]))));
                        var_27 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_3] [i_10] [i_8] [i_3] [(unsigned short)12] [(unsigned short)12])) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) var_3)))) * (((/* implicit */int) var_10))));
                    }
                }
            }
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)38722)) : (((/* implicit */int) (unsigned char)243))));
                var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-17626))));
            }
            for (unsigned char i_12 = 3; i_12 < 23; i_12 += 3) 
            {
                arr_46 [i_2] [i_2] [i_1] = ((/* implicit */short) var_0);
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_6)) - (243)))))) ? (((/* implicit */int) arr_40 [(unsigned short)6] [(unsigned short)0])) : ((~(((/* implicit */int) (unsigned short)21635)))))))));
            }
            var_31 = ((/* implicit */short) (~(((/* implicit */int) arr_39 [i_1] [i_2]))));
        }
        var_32 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) (unsigned char)161))));
        arr_47 [i_1] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (short)27591)))) + (2147483647))) >> (((((/* implicit */int) var_5)) + (26060)))));
        arr_48 [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    }
    for (short i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 2; i_14 < 9; i_14 += 1) 
        {
            for (short i_15 = 1; i_15 < 9; i_15 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-31270)) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) arr_15 [i_13] [i_14] [i_14] [i_15 + 2])))) >> (((((/* implicit */int) ((unsigned short) arr_15 [i_13] [i_13] [i_15] [i_15 + 2]))) - (115)))));
                    var_34 *= ((/* implicit */unsigned char) ((unsigned short) (((-(((/* implicit */int) arr_2 [(unsigned char)22])))) + (((((/* implicit */int) arr_50 [i_14 + 1])) + (((/* implicit */int) var_11)))))));
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)206)), (arr_51 [(unsigned short)3] [i_13] [(unsigned char)1])))) ? (((((/* implicit */_Bool) arr_49 [i_13] [i_13])) ? (((/* implicit */int) arr_0 [i_13] [(unsigned char)8])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (short)-28468))))) ? (((/* implicit */int) (short)11557)) : (((/* implicit */int) var_10))));
        /* LoopSeq 2 */
        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            arr_58 [i_13] = ((/* implicit */short) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_4 [i_16])) ? (((/* implicit */int) (short)23836)) : (((/* implicit */int) var_11))))));
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                var_36 = arr_5 [i_17] [i_16];
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_31 [i_17] [i_13] [i_16] [i_13] [i_13])) : (((/* implicit */int) ((unsigned short) max((arr_14 [i_13] [i_17]), (((/* implicit */short) var_6))))))));
                arr_62 [i_13] [i_16] [i_13] [i_13] = ((/* implicit */short) min((arr_19 [i_13] [i_16] [i_17]), (min((((/* implicit */unsigned short) arr_5 [i_17] [i_16])), (var_1)))));
            }
        }
        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            var_38 = ((/* implicit */unsigned short) min((min((((((/* implicit */int) (unsigned char)235)) | (((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned short) (unsigned short)30889))))), ((~(((/* implicit */int) (short)-1))))));
            var_39 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)22423)), (((((/* implicit */_Bool) arr_11 [i_13] [i_13] [i_13] [i_18] [i_13])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)56387)))) : (((/* implicit */int) arr_13 [i_18] [i_18] [(unsigned short)16] [i_13] [i_13] [i_13]))))));
        }
    }
}
