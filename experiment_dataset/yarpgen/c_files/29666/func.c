/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29666
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_17 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_1]))));
        /* LoopSeq 4 */
        for (int i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            var_18 *= ((unsigned char) arr_7 [i_2 + 3] [i_2 + 3] [i_2 + 1]);
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_1] [i_2 + 2])) : (((((/* implicit */int) arr_5 [i_2])) | (((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))))));
            var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (unsigned char)7)))));
        }
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                var_21 = ((/* implicit */signed char) (unsigned char)226);
                var_22 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)249)) ? (-165018282) : (((/* implicit */int) (unsigned char)6))))));
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)0))));
                var_23 = ((/* implicit */unsigned char) ((((arr_9 [i_1] [i_1] [i_4 - 2]) >= (((/* implicit */int) arr_12 [i_4])))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_14 [i_4]))))));
            }
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 21; i_5 += 3) 
            {
                for (unsigned short i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    {
                        arr_21 [i_6 - 1] [i_5] [i_3 - 2] [i_3 - 1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? ((+(((/* implicit */int) var_16)))) : (arr_9 [i_5] [i_5 - 1] [i_5]));
                        arr_22 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_5] [i_6] [i_6 - 1])) * (((/* implicit */int) arr_18 [i_1] [i_3 + 1] [i_5 - 1]))));
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)249)) << (((((/* implicit */int) (unsigned char)57)) - (55)))));
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                for (unsigned short i_9 = 2; i_9 < 20; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            arr_33 [i_8] = ((/* implicit */unsigned short) (+(((int) (unsigned short)3))));
                            var_25 = ((((/* implicit */_Bool) arr_32 [i_9 + 2] [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_7] [i_7])) ? ((-(((/* implicit */int) arr_30 [i_1] [i_7] [i_7] [i_7] [i_8] [i_9] [i_7])))) : (((/* implicit */int) arr_27 [i_9] [i_9])));
                            arr_34 [i_1] [i_7] [i_10] [i_1] [i_7] [i_8] [i_1] = ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned char)89)) : (-301199816));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            arr_38 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) / (arr_19 [i_1] [i_1] [i_1] [i_11] [i_11] [i_11]))))));
            var_26 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned char)91)) & (var_11))));
            /* LoopSeq 4 */
            for (int i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                var_27 = arr_18 [i_12] [i_11] [i_1];
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    for (int i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        {
                            arr_46 [i_1] [i_11] [i_11] [i_11] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_12] [i_14])) ? (((/* implicit */int) arr_8 [i_1] [i_12] [i_12])) : (((/* implicit */int) var_15))));
                            var_28 = ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_36 [i_11] [i_11] [i_11])) == (((/* implicit */int) arr_20 [i_1] [i_1])))));
                            arr_47 [i_1] [i_11] [i_1] [i_13] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_1] [i_11] [i_1] [i_13])) || (((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_11] [i_1])))))));
                        }
                    } 
                } 
                var_29 |= ((/* implicit */unsigned char) arr_12 [i_1]);
            }
            for (int i_15 = 2; i_15 < 20; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_16 = 3; i_16 < 22; i_16 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_17 = 1; i_17 < 22; i_17 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_16] [i_16] [i_17 - 1] [i_17 - 1] [i_17] [i_17])) >= (((/* implicit */int) arr_42 [i_16] [i_16] [i_16] [i_17 - 1] [i_17] [i_17])))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (arr_50 [i_17])));
                    }
                    for (unsigned short i_18 = 1; i_18 < 21; i_18 += 4) 
                    {
                        var_32 = (~(((/* implicit */int) arr_28 [i_11] [i_16 - 2] [i_18 + 1] [i_16 - 2])));
                        arr_57 [i_11] [i_11] = ((/* implicit */signed char) arr_32 [i_11] [i_11] [i_16] [i_16 - 2] [i_16] [i_18 + 2] [i_18]);
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)38)) - (((/* implicit */int) (unsigned char)7)))))));
                    }
                    arr_58 [i_1] [i_11] [i_1] [i_11] = ((/* implicit */unsigned char) arr_45 [i_1]);
                }
                arr_59 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_42 [i_1] [i_1] [i_15] [i_15] [i_15] [i_15 + 1]))));
                var_34 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_15 [i_1] [i_11] [i_1])))) ? (((/* implicit */int) arr_53 [i_11] [i_15 - 2])) : (((int) arr_27 [i_1] [i_15]))));
            }
            for (signed char i_19 = 0; i_19 < 23; i_19 += 2) 
            {
                arr_62 [i_1] [i_1] [i_19] [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (-417975565) : (-64)))));
                var_35 = (unsigned char)233;
                arr_63 [i_11] [i_11] = ((/* implicit */int) var_5);
                var_36 = ((/* implicit */int) (((+(-1612221581))) > (((/* implicit */int) arr_14 [i_11]))));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_1] [i_1] [i_11] [i_11] [i_11] [i_19] [i_19])) ? (((((/* implicit */int) arr_35 [i_19] [i_19] [i_19])) ^ (((/* implicit */int) (unsigned short)60428)))) : (((/* implicit */int) (signed char)85))));
            }
            for (unsigned short i_20 = 3; i_20 < 21; i_20 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_21 = 1; i_21 < 22; i_21 += 3) 
                {
                    var_38 |= ((/* implicit */unsigned short) ((signed char) arr_37 [i_20 - 1] [i_20 - 1] [i_21 + 1]));
                    var_39 |= (+(((/* implicit */int) arr_10 [i_21] [i_21] [i_21 - 1])));
                }
                arr_69 [i_11] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)21))));
            }
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_11])) || (((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_11]))));
        }
    }
    var_41 = (~((-(min((((/* implicit */int) var_7)), (var_11))))));
    var_42 = ((/* implicit */signed char) var_12);
}
