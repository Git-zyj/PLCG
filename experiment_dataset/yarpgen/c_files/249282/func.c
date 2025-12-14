/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249282
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((+((-(((/* implicit */int) var_1)))))) < (((/* implicit */int) var_8)))))));
    var_17 = ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)123)), ((short)1536)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] &= var_9;
                    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-18))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (short)-29503)) : (((/* implicit */int) (signed char)-18))))) <= (var_4)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) ((arr_12 [i_3]) / (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (var_3)))));
                            var_21 &= ((/* implicit */short) ((((/* implicit */int) (signed char)-32)) <= (((/* implicit */int) arr_11 [i_4 + 2] [(unsigned char)1] [i_2] [i_3] [i_3] [i_1]))));
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_4 + 1] [i_4 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_12 [i_3])) - (((((/* implicit */unsigned int) arr_12 [i_3])) & (var_4)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [(signed char)4] [i_1] [i_2] [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_3] [i_5] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]))));
                            var_23 = ((/* implicit */unsigned char) var_1);
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_24 = (-(((((/* implicit */int) var_8)) / (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_6])))));
                            var_25 = (+(((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_0])))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_6])) ? (1400496326) : (((/* implicit */int) arr_2 [i_0] [i_2]))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) + (var_13)));
                        }
                        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-5221))));
                            arr_23 [i_7] [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */int) ((unsigned int) arr_22 [i_3] [i_7] [i_3] [i_3] [i_2] [i_0] [i_0]));
                            var_28 = ((/* implicit */int) (signed char)-18);
                        }
                        /* LoopSeq 2 */
                        for (short i_8 = 1; i_8 < 13; i_8 += 2) 
                        {
                            arr_28 [i_3] [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) var_11))))));
                            arr_29 [i_3] = ((/* implicit */short) ((((/* implicit */int) (signed char)17)) ^ (((/* implicit */int) (signed char)-98))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (+(arr_17 [i_9] [i_1] [i_2] [i_2] [i_2] [i_2]))))));
                            arr_34 [i_9] [i_0] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_3] [i_9])) ? (((/* implicit */int) arr_33 [i_3] [i_2] [i_9])) : (((/* implicit */int) arr_16 [i_9] [i_3] [i_3] [i_1] [i_0]))));
                        }
                        var_30 = ((int) arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_3]);
                    }
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_1] [i_10] = arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_10] [i_10];
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (-(arr_18 [i_0] [i_1] [i_2] [i_10] [i_2]))))));
                        var_32 &= ((((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) < (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((~(-2138000936))) : ((-(((((/* implicit */int) (short)22940)) & (var_2))))));
                        arr_38 [i_0] [i_1] [i_0] [i_1] [i_10] [(signed char)9] = arr_31 [i_2] [(unsigned char)6] [(unsigned char)6] [i_0] [i_1];
                        arr_39 [i_2] [i_2] [i_2] [i_10] = ((/* implicit */short) ((((/* implicit */int) (short)17162)) % (((/* implicit */int) (signed char)-121))));
                    }
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_18 [i_0] [9U] [i_2] [i_0] [i_2])))))))));
                }
            } 
        } 
    }
    for (int i_11 = 4; i_11 < 18; i_11 += 2) 
    {
        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_11 - 1] [i_11 - 4])) ? (arr_40 [i_11 + 1] [i_11 - 3]) : (arr_40 [i_11 + 1] [i_11 - 3]))))));
        arr_42 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_11])) / (((/* implicit */int) ((unsigned char) (signed char)126)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
        {
            arr_45 [i_11] [i_12] = ((/* implicit */short) arr_40 [i_11] [i_11]);
            /* LoopSeq 1 */
            for (short i_13 = 4; i_13 < 15; i_13 += 4) 
            {
                var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4190208U)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (short)-3045))));
                arr_49 [i_11] [i_12] [7U] &= ((/* implicit */unsigned char) var_7);
                var_36 += ((/* implicit */short) ((((/* implicit */int) arr_47 [(short)0] [i_12] [i_11] [i_11])) | (((/* implicit */int) arr_46 [i_11 - 2] [i_12] [i_13 - 1]))));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (~(var_0))))));
            }
            var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)-127))));
            var_39 *= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8188))) : (var_14));
            arr_50 [i_12] [i_12] [i_11] = ((((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) arr_40 [i_11] [i_12]))))) % (((/* implicit */int) ((13) > (((/* implicit */int) arr_46 [i_11] [i_12] [i_12]))))));
        }
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
        {
            arr_54 [i_11 - 3] [i_14] = arr_51 [i_11 - 2] [i_14] [i_14];
            var_40 = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)37))))))));
            arr_55 [i_14] [i_14] [i_14] = ((/* implicit */int) (signed char)-98);
        }
    }
    for (int i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        arr_59 [i_15] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 32760)), (var_4)))))));
        var_41 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_21 [i_15] [i_15] [i_15] [i_15] [i_15]), (arr_21 [i_15] [i_15] [i_15] [(short)1] [i_15])))) > (((/* implicit */int) max((arr_6 [i_15] [i_15] [i_15]), (((/* implicit */short) arr_41 [i_15])))))));
    }
    var_42 = ((/* implicit */int) (((+(var_4))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (min((var_3), (var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-29738))))))))));
}
