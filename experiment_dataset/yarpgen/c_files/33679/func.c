/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33679
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_12))))) + ((-(((var_6) ? (var_9) : (var_8)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - ((((+(((/* implicit */int) arr_1 [14])))) - (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)511)) > (((/* implicit */int) max(((unsigned short)65040), ((unsigned short)65025)))))))));
                        var_19 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)493)))) || (((/* implicit */_Bool) ((((_Bool) arr_1 [i_3])) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_1 [i_0])))) : (((/* implicit */int) arr_5 [i_0])))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_11))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_21 &= ((/* implicit */short) arr_11 [i_4]);
        var_22 = arr_8 [i_4] [i_4] [i_4] [i_4];
        var_23 += ((/* implicit */_Bool) arr_1 [i_4]);
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_24 = ((/* implicit */int) var_1);
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_16 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_7);
            var_25 *= ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_5] [(short)6]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) ((unsigned short) arr_13 [i_5] [i_7]));
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5]))));
                var_28 = ((((/* implicit */_Bool) arr_15 [i_8])) || (var_5));
            }
            var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_7] [i_5])) & (((/* implicit */int) arr_14 [i_5] [i_7]))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_30 += var_15;
            arr_23 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(unsigned char)1] [(unsigned char)1])) || (((/* implicit */_Bool) arr_13 [i_5] [i_9]))));
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            var_31 = ((/* implicit */unsigned short) arr_24 [i_5] [(unsigned short)11] [14]);
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_13 [(unsigned short)10] [i_10]))) << (((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_10] [i_5])) ? (((/* implicit */int) arr_21 [i_10])) : (((/* implicit */int) arr_21 [i_10]))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    {
                        arr_34 [i_5] [i_10] = ((/* implicit */short) ((arr_22 [i_12]) << (((((/* implicit */int) arr_24 [(_Bool)1] [i_10] [i_11])) - (214)))));
                        var_33 = ((((/* implicit */_Bool) arr_29 [i_5] [i_10] [i_11] [i_12])) || (((/* implicit */_Bool) arr_29 [i_5] [i_10] [i_11] [(_Bool)1])));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_24 [i_5] [i_11] [i_11])))) & ((~(((/* implicit */int) arr_27 [i_5] [i_10] [i_13]))))));
                            var_35 = ((/* implicit */unsigned short) var_4);
                            var_36 += ((/* implicit */unsigned char) arr_29 [i_13] [i_11] [i_10] [i_5]);
                        }
                        var_37 += ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_29 [i_5] [i_10] [0] [i_12])) << (((((/* implicit */int) arr_36 [i_12] [i_10] [i_12] [i_12] [i_10])) - (44535))))));
                    }
                } 
            } 
            arr_37 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_33 [i_5] [i_10]))));
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_40 [i_14] = ((/* implicit */_Bool) min(((~(((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_21 [i_14])))))), (((/* implicit */int) arr_21 [i_14]))));
        var_38 -= (-((-(((/* implicit */int) arr_17 [i_14] [i_14])))));
        arr_41 [i_14] [i_14] = ((/* implicit */short) max(((unsigned short)36181), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-1)))))));
    }
    var_39 = ((/* implicit */short) var_15);
}
