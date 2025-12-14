/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218076
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [(short)8] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0])) || (((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_4]))))) >= (((((/* implicit */_Bool) max(((short)9767), (var_14)))) ? (((/* implicit */int) max(((short)-9768), ((short)-9768)))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (short)9773)))))))));
                                arr_14 [i_0] [i_1] [i_2] = ((unsigned short) max((max((var_4), (var_11))), (((short) (short)-9756))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = (unsigned short)60362;
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 3; i_5 < 10; i_5 += 3) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-6349)) ? ((~(((/* implicit */int) (short)13627)))) : (((/* implicit */int) arr_17 [i_5 - 3] [i_5 - 3]))));
        arr_18 [i_5] = (short)9758;
        arr_19 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_5 - 3] [i_5 - 3]))));
    }
    /* LoopSeq 4 */
    for (short i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        arr_23 [(unsigned short)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) max(((short)9767), ((short)-32741)))) : (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (short)22278)) : (((/* implicit */int) (short)-32723))))))) ? ((+(((/* implicit */int) ((short) (short)9767))))) : (((/* implicit */int) arr_21 [i_6]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            arr_28 [i_6] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_6] [i_6] [i_7]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-6330)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7])) || (((/* implicit */_Bool) (short)-32758)))))));
            arr_29 [i_6] = var_9;
        }
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        arr_32 [i_8] = ((/* implicit */short) max((((unsigned short) var_13)), (((/* implicit */unsigned short) max(((short)-6311), ((short)9758))))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            arr_35 [i_9] = ((/* implicit */short) ((((((/* implicit */int) arr_34 [i_8])) >= (((/* implicit */int) (unsigned short)63)))) ? (((/* implicit */int) arr_34 [i_8])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_31 [i_8])), (arr_34 [i_8]))))));
            arr_36 [i_8] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_9), (var_11)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((short) (short)32764))))), ((~((+(((/* implicit */int) (short)-32741))))))));
            var_19 = ((/* implicit */short) max((((unsigned short) var_15)), (max((var_17), (((/* implicit */unsigned short) var_2))))));
        }
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)1023)) || (((/* implicit */_Bool) (short)-19342))))) >= (((/* implicit */int) var_0))))), (max((((/* implicit */unsigned short) var_11)), ((unsigned short)81)))));
    }
    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
    {
        var_21 = (unsigned short)3364;
        arr_39 [i_10] = ((short) max((arr_38 [i_10]), (arr_38 [i_10])));
    }
    for (short i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        arr_42 [i_11] = arr_34 [i_11];
        arr_43 [i_11] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) arr_38 [(short)2]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_12 = 3; i_12 < 15; i_12 += 4) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24093)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65518)) || (((/* implicit */_Bool) (short)1604))))) : (((/* implicit */int) arr_38 [i_11]))));
            var_23 = ((/* implicit */short) (+(((/* implicit */int) (short)-32766))));
            arr_48 [(unsigned short)16] [i_12 + 3] [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)16256)) >= (((/* implicit */int) (unsigned short)3))));
        }
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_15 = 3; i_15 < 15; i_15 += 2) 
                    {
                        var_24 = var_12;
                        arr_56 [(unsigned short)7] [i_13] [i_14] [i_13] [(short)8] [i_11] = ((/* implicit */unsigned short) var_13);
                        arr_57 [i_11] [(unsigned short)12] [i_14] [i_15] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_11])) ? (((/* implicit */int) arr_30 [i_14])) : (((/* implicit */int) (unsigned short)52534))));
                    }
                    for (short i_16 = 1; i_16 < 16; i_16 += 3) 
                    {
                        var_25 = (short)32758;
                        arr_61 [i_13] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (short)-12512)))));
                    }
                    arr_62 [i_13] [i_13] = ((/* implicit */short) max((max((((/* implicit */unsigned short) (short)32758)), ((unsigned short)52094))), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned short)42262)) || (((/* implicit */_Bool) (short)32767))))))));
                    arr_63 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_53 [i_11] [i_11] [i_13] [i_14]), (arr_53 [(short)1] [i_11] [i_14] [i_13])))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
                    /* LoopSeq 1 */
                    for (short i_17 = 2; i_17 < 14; i_17 += 2) 
                    {
                        arr_66 [i_13] [(unsigned short)0] [i_13] [i_14] [i_17] [i_17] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (short)-32761)))));
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)61395))));
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (short)-12512))))) : ((+(((/* implicit */int) var_0))))))) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) var_11))));
}
