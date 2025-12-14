/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28033
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
    var_20 = ((/* implicit */signed char) var_17);
    var_21 = ((/* implicit */unsigned int) max((max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (short)-29697)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_19)))))), (((/* implicit */int) ((((/* implicit */int) var_2)) == (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2 - 3])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0 + 3]))));
                    var_22 += ((/* implicit */unsigned int) var_11);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_14 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) var_13)))) : ((~(((/* implicit */int) arr_1 [i_1]))))));
                        var_23 = arr_12 [i_0 + 2];
                        arr_15 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_3)) > (((((/* implicit */int) arr_7 [i_1] [(unsigned short)12] [i_3])) * (((/* implicit */int) arr_13 [i_2] [(signed char)10]))))));
                        arr_16 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_12 [i_0 + 2]))));
                        arr_17 [i_0] [(short)7] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) var_12)))) / ((+(((/* implicit */int) var_9))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            for (signed char i_5 = 4; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        var_24 += ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_6 - 1] [i_6 - 1] [i_5 + 3])) <= (((((/* implicit */_Bool) (short)-18725)) ? (((/* implicit */int) (short)10130)) : (((/* implicit */int) (unsigned char)31))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [(signed char)8] [i_5 - 3] [i_4] [i_6]))));
                            var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_4 + 1] [i_4])) || (((/* implicit */_Bool) (signed char)127))));
                            arr_29 [i_0] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) (-(((((((/* implicit */int) (short)-26095)) + (2147483647))) << (((((/* implicit */int) (short)10180)) - (10180)))))));
                            arr_30 [i_0] [i_4] [i_5] [i_4] [i_7] [i_7] = ((/* implicit */short) arr_27 [i_4] [i_7] [i_0] [i_0] [(signed char)1] [(unsigned char)1] [i_4]);
                            var_26 += ((/* implicit */short) var_18);
                        }
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            arr_33 [i_4] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [i_0 - 3] [i_4]))));
                            var_27 += ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_5 - 4] [i_0 - 1]))));
                            arr_34 [i_4] [i_4] [i_4] [i_8] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_6 + 1] [i_6 + 1]))));
                        }
                        arr_35 [i_5] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) var_15);
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 3; i_10 < 12; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) (-((~(((/* implicit */int) var_5))))));
                                arr_43 [i_0] [i_0] [i_5] [i_4] [i_10 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
                                arr_44 [i_0] [(signed char)11] [i_4] [i_9] [i_10] [i_10] = ((/* implicit */short) arr_32 [i_4 + 2] [i_10] [i_10] [i_10 - 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_11 = 3; i_11 < 13; i_11 += 3) 
    {
        arr_48 [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)94))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 1; i_12 < 12; i_12 += 3) 
        {
            for (short i_13 = 3; i_13 < 13; i_13 += 2) 
            {
                {
                    arr_54 [i_11 + 2] [i_11 + 2] = ((/* implicit */signed char) ((((arr_46 [i_13 + 1]) & (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)59542), (((/* implicit */unsigned short) (signed char)-127)))))))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5994)) ? (((/* implicit */int) arr_53 [i_11] [i_12] [i_13] [(short)13])) : (((/* implicit */int) var_17))))) : (arr_46 [(unsigned short)11])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 1; i_15 < 13; i_15 += 1) 
                        {
                            var_29 += ((/* implicit */signed char) var_12);
                            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) arr_47 [i_11 - 3]))));
                        }
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)116)) < (((/* implicit */int) arr_53 [i_11] [i_12] [i_13] [(short)7]))));
                        arr_61 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_51 [i_12 + 3] [i_12 + 1] [i_12]))));
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (signed char)121)))) >> (((((/* implicit */int) arr_49 [i_11 - 1])) - (11219))))))));
                    }
                    for (short i_16 = 1; i_16 < 13; i_16 += 4) 
                    {
                        var_33 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_55 [i_11] [i_12] [i_12 + 3] [i_13] [i_16])) ? (((/* implicit */int) arr_49 [i_13 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_16 - 1] [i_12] [i_11])) || (((/* implicit */_Bool) var_2))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_11] [i_12] [i_11])) ? (((/* implicit */int) arr_45 [i_12])) : (((/* implicit */int) (unsigned short)5994))))))))));
                        arr_66 [i_16] = var_4;
                        var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                    }
                    for (short i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_59 [i_11] [i_12] [i_12 + 1] [i_17] [i_13 - 1] [i_13] [i_11 + 2])) : (((/* implicit */int) arr_50 [i_11] [i_11] [i_12 + 2]))))) ? (((((/* implicit */_Bool) arr_50 [i_11] [i_12] [i_12 + 1])) ? (((/* implicit */int) arr_50 [i_11] [i_11] [i_12 + 3])) : (((/* implicit */int) arr_50 [i_17] [i_12] [i_12 + 3])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)59842)) <= (((/* implicit */int) (short)29824)))))));
                        var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21354)) ? (arr_46 [i_11 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */_Bool) (short)19931)) ? (((/* implicit */int) (short)-26095)) : (((/* implicit */int) (signed char)-96)))) : (((/* implicit */int) arr_55 [i_11] [i_12 + 3] [i_13] [i_17] [i_17]))));
                    }
                    var_37 += ((/* implicit */unsigned short) max((((((((/* implicit */int) (signed char)-31)) <= (((/* implicit */int) arr_56 [i_11] [i_12] [i_13])))) ? (arr_63 [i_11 - 1] [i_12 + 2] [i_13] [(signed char)13]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21907))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_67 [i_11])))))))));
                    arr_69 [i_11] [(short)12] = ((/* implicit */signed char) max(((unsigned short)57989), (((/* implicit */unsigned short) (signed char)127))));
                }
            } 
        } 
        var_38 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_62 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])), (arr_67 [i_11])))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_11 + 2] [i_11] [i_11 + 1] [i_11] [i_11 + 2] [i_11 - 3] [(signed char)13])))))));
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            var_39 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_45 [i_18])))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)62687))))) ? (((((/* implicit */_Bool) arr_62 [i_18] [i_18] [i_18] [(signed char)10] [i_11] [i_11])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_58 [i_11 - 1] [i_18] [i_11 - 3])))) : (((/* implicit */int) (signed char)5))));
            var_40 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_72 [i_11 + 2])) * (((/* implicit */int) (unsigned char)224))))));
        }
        arr_73 [i_11] = ((/* implicit */signed char) (+((((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_67 [i_11])) ? (arr_63 [i_11] [(signed char)8] [(short)1] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23106))))) - (2921085847U)))))));
    }
}
