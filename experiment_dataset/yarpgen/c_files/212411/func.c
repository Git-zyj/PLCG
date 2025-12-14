/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212411
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
    var_20 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [(short)12] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)150)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)61)) != (((/* implicit */int) (unsigned char)140)))))));
                    arr_8 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_2 [i_0]))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)232)) == (((/* implicit */int) (unsigned char)44)))))));
                    var_21 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) min((arr_4 [i_2]), (arr_0 [(unsigned char)12] [(unsigned char)12])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_4 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                arr_14 [i_0] [i_3] [i_3] [i_4] = (unsigned char)223;
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)89)) < (((/* implicit */int) (unsigned char)236)))) ? (((/* implicit */int) ((short) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */int) arr_11 [i_3]))));
                            var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)10)) ? (((((/* implicit */int) (unsigned char)81)) << (((((((/* implicit */int) (short)-11064)) + (11094))) - (16))))) : (((((/* implicit */int) arr_11 [i_3])) / (((/* implicit */int) arr_15 [i_3] [i_3] [i_5] [i_3]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)254)) > (((/* implicit */int) (short)-10612))))))))));
                            arr_26 [i_0] [i_7] [(unsigned char)5] [i_7] [i_7] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)32))));
                            arr_27 [i_7] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-31608))));
                            var_26 += ((/* implicit */short) ((((/* implicit */int) arr_16 [i_0] [i_3] [i_3] [i_4] [i_7] [i_7])) & (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_17))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_28 = ((short) (short)-10616);
                    var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)0))));
                    var_30 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)89)) & (((/* implicit */int) (unsigned char)255))));
                }
                for (unsigned char i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    arr_32 [i_0] = ((/* implicit */unsigned char) arr_10 [i_4]);
                    arr_33 [i_0] [i_3] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (short)-10612)) : (((/* implicit */int) arr_20 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 2]))));
                    var_31 ^= (short)7;
                }
                for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        arr_39 [i_3] [i_3] [i_4] [i_11] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (short)-10767))));
                        var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)41)) ? (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) arr_15 [i_3] [i_4] [i_11] [i_3])) : (((/* implicit */int) arr_10 [i_0])))) : (((((/* implicit */int) (unsigned char)165)) >> (((((/* implicit */int) arr_3 [i_12] [i_4] [i_12])) - (47)))))));
                        var_33 = ((unsigned char) (unsigned char)93);
                    }
                    for (short i_13 = 2; i_13 < 13; i_13 += 1) 
                    {
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (unsigned char)0))));
                        var_35 = ((/* implicit */short) (unsigned char)167);
                    }
                    for (unsigned char i_14 = 2; i_14 < 13; i_14 += 1) 
                    {
                        arr_45 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)39))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_0] [i_3] [i_14 - 2] [i_3])) ? (((/* implicit */int) arr_38 [i_14] [(short)7] [(short)7] [i_14] [i_14])) : (((/* implicit */int) (short)-379))));
                        arr_46 [i_14] [i_14] [i_14 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_4] [(unsigned char)3])) : (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) arr_34 [i_14 - 1])) : (((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3]))));
                        var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)21750)) ? (((/* implicit */int) (short)32746)) : (((/* implicit */int) (short)-5814)))) < (((/* implicit */int) arr_40 [(unsigned char)2] [i_3] [i_3] [i_3] [i_3] [i_14]))));
                    }
                    var_38 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_0] [(unsigned char)13] [i_4] [(unsigned char)13]))));
                    arr_47 [i_0] [i_0] [i_4] [i_11] = ((/* implicit */unsigned char) ((short) arr_10 [i_0]));
                    arr_48 [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)59))));
                }
            }
        }
        var_39 += arr_17 [i_0] [(unsigned char)3] [i_0];
        var_40 += ((/* implicit */unsigned char) ((short) max(((short)29556), (((/* implicit */short) arr_9 [i_0] [i_0] [i_0])))));
        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (+(((/* implicit */int) var_7)))))));
    }
    for (short i_15 = 0; i_15 < 13; i_15 += 2) 
    {
        var_42 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)187)) != (((/* implicit */int) var_1))))))), ((((~(((/* implicit */int) (unsigned char)255)))) ^ (((/* implicit */int) (short)-14521))))));
        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (~(min((((((/* implicit */int) arr_44 [i_15] [i_15] [i_15] [(short)7] [i_15])) * (((/* implicit */int) (unsigned char)15)))), ((~(((/* implicit */int) arr_28 [i_15] [i_15] [i_15] [i_15])))))))))));
    }
    var_44 = ((/* implicit */short) var_12);
}
