/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25194
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (var_7)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)7)), (min((max((((/* implicit */unsigned short) var_8)), ((unsigned short)0))), ((unsigned short)65535))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) (unsigned char)109))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 2) 
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)25762)) & (((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) var_7))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_1] [i_4 - 1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)37710))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (var_0)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            var_20 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)1))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)183))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)22312))));
                        }
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (unsigned short)65535))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            arr_30 [(unsigned char)8] [i_1] [(unsigned char)8] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_1] [i_8] [i_2 + 1] [i_7]))));
                            arr_31 [i_1] [i_1] [i_2] [i_3] [i_7] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_12)) & (((/* implicit */int) arr_12 [i_1] [i_8] [i_3])))) & (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)62))))));
                            var_23 -= ((/* implicit */unsigned short) var_3);
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)243))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_1] [i_2] [i_3] [i_8])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (unsigned char)15))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (var_4)));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) (unsigned char)253)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) arr_11 [i_1] [i_9] [(unsigned short)1] [(unsigned char)7]))))));
                            arr_34 [i_9] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)77)))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_12)))));
                            var_29 = var_13;
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) var_12))));
                        }
                        var_31 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (signed char)-111))))));
                        var_32 = ((/* implicit */signed char) ((unsigned char) (unsigned char)61));
                    }
                    var_33 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_2 - 1] [(unsigned short)10]))));
                    arr_39 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) arr_40 [i_1] [(unsigned short)2] [i_11]);
                        arr_42 [i_11] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_2 + 1])) ^ (((/* implicit */int) arr_22 [i_1] [(unsigned short)12] [(unsigned char)3] [i_11] [i_3] [i_3] [i_3]))));
                        arr_43 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_28 [i_1] [i_2] [i_2] [i_2 - 1] [i_2]);
                        var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_35 [i_2] [i_2] [(unsigned char)7] [i_2] [i_2] [i_2 + 1] [i_2 + 1]))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned short) (unsigned char)0);
                        var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_1] [i_1] [i_2 + 1] [i_2 + 1]))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_36 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_33 [i_1] [i_2] [i_3] [i_12] [i_12] [i_12])))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)205))));
                            var_40 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-9))));
                        }
                        var_41 = ((/* implicit */unsigned short) ((signed char) arr_20 [i_1] [i_2 + 1] [i_2 + 1] [i_1]));
                    }
                }
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))) & (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)97)))) > (((/* implicit */int) (unsigned char)169)))))));
    var_43 = ((/* implicit */unsigned char) var_11);
}
