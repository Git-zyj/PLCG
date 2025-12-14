/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28347
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
    var_19 = var_11;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) != (1377513335U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((int) arr_2 [i_0])))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_4]))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1] [i_3] [i_3]))));
                            var_24 &= var_11;
                        }
                        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) arr_11 [i_1] [13U] [i_1] [13U] [i_1] [i_1] [i_1])) ? (((unsigned int) arr_5 [i_3] [(unsigned short)3] [i_1])) : (((unsigned int) var_17))))));
                            arr_16 [i_0] [i_0] [15U] [7U] [15U] [(unsigned char)0] = (~(((/* implicit */int) arr_12 [9U] [i_6] [i_2] [i_3] [i_6 - 1])));
                            var_26 -= ((/* implicit */unsigned int) (unsigned short)24576);
                        }
                        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_2]))));
                        var_28 &= ((/* implicit */unsigned char) (~(-195813331)));
                        /* LoopSeq 1 */
                        for (int i_7 = 4; i_7 < 16; i_7 += 1) 
                        {
                            var_29 = ((2241026121U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))));
                            var_30 = var_18;
                            var_31 &= ((unsigned char) arr_5 [i_7 - 4] [i_7 - 2] [i_7 - 4]);
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_7] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_1))))));
                        }
                        var_32 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [16U] [i_3])));
                    }
                    var_33 *= arr_6 [i_1] [i_1];
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        var_34 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) arr_22 [i_8])) : (((/* implicit */int) arr_22 [i_8]))));
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_35 = ((/* implicit */unsigned int) arr_22 [i_8]);
            var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)24))))) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) 4134701949U)))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 363543987U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) arr_22 [i_10])) : (((/* implicit */int) arr_22 [(unsigned char)10]))))) : (arr_26 [i_10] [17U] [i_8])));
                        arr_31 [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) ((arr_28 [i_8] [i_9] [i_10] [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155)))));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (((/* implicit */int) arr_30 [i_9] [i_10])) : (((/* implicit */int) arr_30 [i_11] [i_9]))));
                    }
                } 
            } 
            arr_32 [i_8] [i_8] [i_8] = ((/* implicit */int) ((unsigned int) arr_21 [i_8] [i_9]));
        }
    }
    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                {
                    var_39 = ((/* implicit */int) ((min(((~(arr_18 [i_14] [i_12] [9U] [i_12] [i_12]))), (arr_35 [i_12]))) < (((((/* implicit */_Bool) (~(100663296U)))) ? (arr_21 [i_12] [i_14]) : (arr_20 [i_13])))));
                    arr_41 [i_12] [i_13] [i_14] = var_0;
                }
            } 
        } 
        var_40 = ((/* implicit */signed char) min((var_9), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [14U] [i_12] [14U] [(signed char)12] [(signed char)12]))) >= (16256U))))));
        /* LoopSeq 2 */
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_16 = 1; i_16 < 8; i_16 += 2) 
            {
                arr_46 [i_12] [i_15] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2147483644U)))) ? ((+(2955492922U))) : (max((((/* implicit */unsigned int) 752524203)), (1192417788U))))))));
                arr_47 [3U] [i_15] = ((/* implicit */signed char) 2735614593U);
                var_41 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_12] [16U] [(signed char)7]))) : (2979366214U)))) ? (1755058939U) : (min((((/* implicit */unsigned int) var_5)), (arr_20 [i_15]))))));
            }
            /* vectorizable */
            for (unsigned int i_17 = 2; i_17 < 9; i_17 += 4) 
            {
                var_42 = ((/* implicit */signed char) -341748555);
                var_43 = ((/* implicit */unsigned int) (unsigned char)235);
            }
            for (int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    var_44 ^= ((/* implicit */unsigned int) arr_22 [i_12]);
                    var_45 = ((((/* implicit */_Bool) arr_48 [i_12] [i_15])) ? (arr_48 [i_12] [i_15]) : (arr_48 [i_19] [i_18]));
                    var_46 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 4294967277U)) ? (arr_43 [i_12] [i_12]) : (arr_23 [i_19] [16] [16])))));
                    var_47 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_42 [i_18] [(unsigned char)3] [i_12]))));
                    var_48 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_55 [i_12] [i_12] [i_15]))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    arr_60 [i_12] [i_18] [i_18] [i_18] [i_20] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (arr_37 [i_12] [i_12]) : (arr_37 [i_15] [i_15])))));
                    var_49 = ((/* implicit */unsigned short) var_10);
                }
                var_50 = ((/* implicit */signed char) -464844277);
            }
            for (int i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((4290772992U), (4294967289U)))) ? (((/* implicit */unsigned int) 171936728)) : (1354557345U))), (((((/* implicit */_Bool) (signed char)-103)) ? (994229386U) : (((/* implicit */unsigned int) -1080956230))))));
                var_52 |= ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_7)) : (935288802U))) >= (arr_26 [i_12] [i_12] [i_12]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_59 [6U] [i_15] [i_15] [(unsigned short)6] [(unsigned short)6])) * (((/* implicit */int) arr_49 [i_12] [i_12] [i_21] [i_12]))))) : (((((/* implicit */_Bool) 228301360U)) ? (max((((/* implicit */unsigned int) (unsigned char)21)), (57344U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))));
            }
            var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_58 [i_15] [i_12]), (((/* implicit */unsigned int) (signed char)0))))) ? (min(((+(3834799320U))), (((/* implicit */unsigned int) (-(arr_62 [i_15] [i_12] [i_12])))))) : (((((/* implicit */_Bool) arr_45 [i_12])) ? (arr_8 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12])))))));
            /* LoopNest 2 */
            for (signed char i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                for (unsigned char i_23 = 4; i_23 < 9; i_23 += 1) 
                {
                    {
                        arr_70 [i_23] [(unsigned char)3] [(unsigned char)3] [i_23] [i_15] = ((/* implicit */unsigned char) arr_56 [i_23] [i_23] [i_23] [7]);
                        var_54 &= ((/* implicit */unsigned int) arr_12 [i_23 - 3] [i_23 - 1] [i_23 - 3] [i_23] [i_23 - 1]);
                        var_55 = min((4150665639U), (((/* implicit */unsigned int) (unsigned char)5)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_24 = 2; i_24 < 9; i_24 += 1) 
            {
                var_56 = ((/* implicit */unsigned int) (unsigned char)113);
                var_57 = ((/* implicit */unsigned int) var_5);
            }
            for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 10; i_26 += 1) 
                {
                    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 2) 
                    {
                        {
                            var_58 = ((/* implicit */unsigned short) (((-(var_7))) & ((+(((/* implicit */int) arr_65 [i_26]))))));
                            arr_80 [i_26] [i_26] [i_26] [i_25] [i_15] [i_12] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_68 [i_12] [i_12] [i_12] [i_12]), (arr_68 [i_12] [i_12] [i_12] [i_12]))))) | (min((((/* implicit */unsigned int) (unsigned char)0)), (arr_15 [i_27] [i_27] [(signed char)16] [i_26] [i_25] [i_12] [i_12])))));
                            var_59 = max(((signed char)23), (((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_12] [i_25] [i_27])) != (((/* implicit */int) arr_42 [i_25] [i_26] [i_27]))))));
                        }
                    } 
                } 
                var_60 = max((((/* implicit */int) ((1462909574U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_12] [i_12] [i_15] [i_15] [i_25])))))), (((((/* implicit */int) arr_7 [i_12] [i_15] [i_12] [i_12] [i_12])) ^ (((/* implicit */int) (unsigned short)26)))));
                arr_81 [4U] [i_15] [i_15] [i_25] = ((/* implicit */unsigned int) arr_9 [i_12] [i_12] [(unsigned char)0]);
            }
        }
        for (unsigned int i_28 = 1; i_28 < 9; i_28 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_29 = 0; i_29 < 10; i_29 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_30 = 0; i_30 < 10; i_30 += 2) 
                {
                    for (signed char i_31 = 0; i_31 < 10; i_31 += 2) 
                    {
                        {
                            arr_92 [i_12] [i_12] [i_28] = ((((/* implicit */_Bool) ((unsigned int) (unsigned char)221))) ? (min((arr_18 [i_12] [17U] [14U] [i_30] [i_31]), ((+(4294967295U))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1820768747U)) ? (((/* implicit */int) arr_55 [i_12] [i_12] [(unsigned char)3])) : (((/* implicit */int) (signed char)-83)))), (min((arr_82 [(unsigned char)8] [(unsigned char)8]), (((/* implicit */int) (unsigned short)65526))))))));
                            arr_93 [i_28] [(unsigned char)8] [i_28] [i_30] [i_30] [3] [i_30] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned int) -1866742127)) : (84517571U)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_8)) != (6U))))))));
                            var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [(unsigned short)8] [i_28 + 1] [i_28 + 1] [(signed char)5])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))) || (((/* implicit */_Bool) 2149893087U))));
                        }
                    } 
                } 
                var_62 = var_16;
                var_63 = (-(((unsigned int) 1493463397)));
            }
            arr_94 [(unsigned char)6] &= (-(((((/* implicit */_Bool) min((var_11), (3671492621U)))) ? ((~(25138724U))) : (arr_51 [i_12] [i_12] [i_28]))));
            var_64 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)171), ((unsigned char)199))))) : (((((/* implicit */_Bool) arr_58 [i_28 - 1] [i_28])) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))));
            var_65 ^= ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))));
        }
        var_66 = ((/* implicit */unsigned char) max((var_66), (((/* implicit */unsigned char) ((1U) < (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_5 [2U] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_12] [0U] [0U]))) : (630568929U))))))))));
    }
}
