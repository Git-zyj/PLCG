/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45578
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
    var_20 = ((unsigned short) 742415384U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3552551894U)) && (((/* implicit */_Bool) var_4))));
                    arr_9 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */signed char) var_13);
                }
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_0] [i_1] [5U] [16U] [i_5] [5U] = ((/* implicit */unsigned int) ((unsigned short) (!(((((/* implicit */int) (unsigned short)4446)) >= (((/* implicit */int) (unsigned short)43045)))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (max((((/* implicit */unsigned int) (signed char)118)), (742415401U)))));
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3552551916U)) ? (3552551920U) : (2919541056U)));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) min((max((min((152854141U), (var_7))), (((/* implicit */unsigned int) var_19)))), (742415361U)));
                        }
                        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (signed char)-102))) & (((/* implicit */int) max(((unsigned short)32089), (arr_2 [i_0 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_7 + 1] [i_6] [i_1])))))));
                                arr_28 [i_0 - 1] [i_1] [i_1] [i_7] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (unsigned short)65520)), (152854141U))) & (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)124), (var_16)))))));
                                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)2417))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                for (unsigned short i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) max((min(((unsigned short)1), ((unsigned short)37930))), (min((max((var_19), (var_3))), (arr_15 [i_8 + 1] [i_8 + 2] [i_0 + 3])))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        arr_33 [i_1] [i_1] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-61)))))))), (((((/* implicit */int) ((unsigned short) var_18))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (742415401U))))))));
                        arr_34 [i_0] [i_0] [i_1] [(unsigned short)21] [14U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) == (max((((/* implicit */unsigned int) max(((unsigned short)10664), (((/* implicit */unsigned short) var_16))))), (min((((/* implicit */unsigned int) var_12)), (876764021U)))))));
                        var_27 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)54871))));
                    }
                    arr_35 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 742415379U)) ? (((/* implicit */int) (unsigned short)19855)) : (((/* implicit */int) (signed char)-115)))) < (((/* implicit */int) var_19))));
                }
                for (unsigned short i_10 = 1; i_10 < 21; i_10 += 1) /* same iter space */
                {
                    arr_39 [i_10] [i_1] [i_1] [i_0] = var_10;
                    var_28 *= ((/* implicit */signed char) var_14);
                    var_29 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (signed char)-116)), (min((3552551916U), (((/* implicit */unsigned int) (unsigned short)16125)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), ((unsigned short)65535)))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned short)63119)))))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)54871)) >> (((/* implicit */int) (unsigned short)0))));
                }
                for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
                {
                    var_31 = ((unsigned short) (signed char)118);
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 2; i_12 < 18; i_12 += 1) 
                    {
                        var_32 = min((max((742415421U), (((/* implicit */unsigned int) var_10)))), (((unsigned int) (signed char)99)));
                        var_33 = ((/* implicit */signed char) min((min((max((var_8), (var_8))), ((unsigned short)58180))), (((/* implicit */unsigned short) arr_27 [i_0] [i_0] [i_0] [i_1] [i_11] [i_0]))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54871))))) | (((/* implicit */int) (signed char)106))));
                        arr_45 [i_1] [(unsigned short)6] [i_1] [2U] [i_0 + 3] [i_1] = min((((/* implicit */unsigned int) (unsigned short)46813)), (((unsigned int) (unsigned short)0)));
                    }
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)127), ((unsigned short)39639)))))))) - (2191897237U)));
                }
                /* LoopNest 3 */
                for (unsigned short i_13 = 1; i_13 < 21; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            {
                                arr_53 [(unsigned short)0] [i_1] [(unsigned short)0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) var_17)) - (23588)))))), (((unsigned int) max((((/* implicit */unsigned int) (unsigned short)52267)), (742415401U))))));
                                var_36 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (signed char)-127)))));
                                arr_54 [i_1] [i_13] [i_1] = ((/* implicit */unsigned short) max((((unsigned int) (signed char)(-127 - 1))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127)))))));
                            }
                        } 
                    } 
                } 
                arr_55 [i_1] = ((/* implicit */unsigned short) min((((unsigned int) (unsigned short)56893)), (((/* implicit */unsigned int) var_13))));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)58167)) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) var_15))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_16 = 2; i_16 < 23; i_16 += 4) 
    {
        arr_59 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3479182848U)) && (((/* implicit */_Bool) 3587780007U))));
        arr_60 [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)47)) * (((/* implicit */int) (signed char)45))));
        arr_61 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_19)) : ((+(((/* implicit */int) (unsigned short)4966))))));
    }
}
