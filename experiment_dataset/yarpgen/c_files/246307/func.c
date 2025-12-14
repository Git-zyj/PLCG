/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246307
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (+(var_0)));
            arr_5 [i_0] = ((/* implicit */unsigned short) arr_1 [i_1]);
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)40603)) << (((((-1334881396) + (1334881427))) - (26)))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    arr_16 [i_0] [(unsigned short)6] [i_3 - 2] [i_3 - 2] [i_3 - 2] |= ((/* implicit */unsigned short) ((unsigned char) min((((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)148)))), (((((/* implicit */_Bool) arr_13 [i_0] [5] [5] [5] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_4])) : (arr_12 [(unsigned char)7] [(unsigned char)7] [i_3]))))));
                    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_2] [i_2] [9]))));
                    arr_17 [i_0] [i_0] [i_0] [i_4] = ((((/* implicit */int) arr_0 [2] [i_2])) << ((((+(((/* implicit */int) arr_9 [i_4] [4] [4])))) - (12124))));
                }
                for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_2] [(unsigned char)4]))));
                    var_16 += ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_0 [2] [2])))), (((((/* implicit */int) (unsigned char)124)) < (((/* implicit */int) (unsigned char)1))))));
                    arr_22 [i_5] [i_5] [11] [i_0] [i_0] |= ((/* implicit */unsigned char) min(((unsigned short)9293), ((unsigned short)24946)));
                }
                var_17 = arr_13 [i_0] [i_0] [i_0] [i_2] [i_0];
                arr_23 [i_0] [i_3 + 2] [i_0] [i_0] |= max((arr_18 [i_0]), (((((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned char)4] [i_0])) % (((/* implicit */int) var_12)))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_18 += ((/* implicit */unsigned short) arr_3 [i_2] [i_2]);
                arr_27 [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) (-(arr_11 [i_6] [i_6] [i_0] [i_0])));
                var_19 = ((/* implicit */unsigned char) ((((arr_7 [i_2] [i_6]) <= (((/* implicit */int) arr_13 [(unsigned short)7] [i_0] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                arr_28 [i_0] [(unsigned char)12] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_1 [(unsigned short)8])))))));
            }
        }
        arr_29 [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                {
                    arr_37 [i_7] [(unsigned char)11] [(unsigned char)8] = ((/* implicit */unsigned char) min((min((((/* implicit */int) var_8)), ((-(var_2))))), (((/* implicit */int) ((arr_18 [i_0]) <= (((/* implicit */int) ((var_0) < (((/* implicit */int) arr_13 [(unsigned char)11] [(unsigned char)11] [i_8 + 2] [i_7] [(unsigned char)11]))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [(unsigned short)8])) : (((/* implicit */int) arr_8 [i_0] [i_7])))))));
                        var_21 *= ((/* implicit */unsigned char) arr_39 [i_0] [i_7] [i_8 - 1] [i_8 + 3] [i_7]);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_8] [i_8 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)27381))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_15 [i_10 + 2] [i_7] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_10] [i_10 + 1] [i_10] [i_10] [i_10]))));
                        var_24 = ((/* implicit */int) arr_20 [i_8] [i_8 + 1] [i_10 + 2]);
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) (-(arr_34 [i_0] [i_7] [i_8 + 3] [i_0])));
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_10 + 1] [i_10 - 1] [i_10] [i_10])) ? (((/* implicit */int) arr_40 [i_10 - 1] [i_10] [8] [i_10])) : (((/* implicit */int) arr_40 [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1]))));
                        arr_44 [i_10] = ((/* implicit */unsigned char) (+(arr_12 [i_8 + 2] [i_10 + 2] [i_10 + 2])));
                    }
                }
            } 
        } 
        arr_45 [i_0] = ((/* implicit */unsigned char) arr_33 [10] [i_0] [i_0] [i_0]);
    }
    var_25 = var_10;
    var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_12)))))));
}
