/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233410
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
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((((/* implicit */int) (short)-793)) + (((/* implicit */int) (short)-792)))) : (((/* implicit */int) (unsigned short)62020)))))));
    var_16 &= ((/* implicit */signed char) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) (short)808));
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1]))));
            var_20 = ((/* implicit */long long int) (-(arr_3 [i_0] [i_0 - 1] [i_0 + 1])));
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)1022))));
            arr_5 [i_0 - 2] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [21] [i_0]);
        }
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_8 [i_0] [i_2] = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (short)-790)))));
            var_22 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0 + 1]);
            var_23 = ((/* implicit */long long int) (+((-(arr_6 [i_2] [i_0 - 2])))));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
            {
                var_24 += ((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0]);
                var_25 = ((/* implicit */signed char) arr_7 [i_2]);
                arr_11 [i_3] [i_0] = var_10;
                var_26 = ((unsigned char) ((arr_3 [i_0] [i_0] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)790)))));
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((-6) / (4096)))) || ((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 - 1] [i_0]))))));
                arr_15 [i_4] [i_4] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_0] [i_2])) >= (((/* implicit */int) (short)-797))));
            }
            for (long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) (+(((int) var_8))));
                    var_29 = ((/* implicit */long long int) ((int) (short)790));
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_17 [i_0] [i_0] [i_0] [i_0])));
                    arr_21 [i_0] [(_Bool)1] [i_0 - 3] [i_0] [(unsigned short)12] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_2] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_17 [i_0 - 1] [i_2] [i_5] [i_5]))));
                }
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    var_31 &= ((/* implicit */int) ((unsigned long long int) (short)832));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_27 [i_0] = ((/* implicit */long long int) arr_7 [i_0 - 3]);
                        var_32 -= ((/* implicit */signed char) (-(arr_17 [i_0 - 1] [i_2] [(signed char)3] [i_7])));
                        var_33 = ((/* implicit */signed char) var_3);
                    }
                    arr_28 [i_0] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) ((signed char) var_4));
                }
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_34 = (~(((/* implicit */int) (short)793)));
                    arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0 - 1]);
                }
                /* LoopSeq 2 */
                for (long long int i_10 = 3; i_10 < 21; i_10 += 2) 
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_0 + 1] [i_0 - 3] [i_0 - 2] [i_0 + 1])) != (((/* implicit */int) arr_34 [i_0 - 1] [i_10 - 3] [i_10 - 3] [i_10 - 2] [i_0]))));
                    var_36 = ((/* implicit */unsigned short) min((var_36), ((unsigned short)34844)));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned char) arr_25 [i_0 - 2] [i_10 + 2]);
                        arr_37 [(signed char)6] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_34 [i_0] [i_2] [i_5] [i_10] [i_11]);
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_10 - 2])) ? (((/* implicit */int) arr_1 [i_10 - 1])) : (((/* implicit */int) arr_1 [i_10 - 1]))));
                        var_39 += ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (arr_3 [i_11] [i_2] [i_5])))));
                    }
                }
                for (signed char i_12 = 2; i_12 < 23; i_12 += 4) 
                {
                    arr_40 [(short)14] [i_2] [i_5] [i_12] = ((/* implicit */int) arr_10 [i_0] [i_2] [i_5]);
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                    {
                        var_40 &= ((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_13]);
                        var_41 = ((/* implicit */int) (((~(var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_12 + 1] [i_0 - 3] [i_0] [i_0])))));
                        arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_32 [i_0] [i_2] [i_5] [i_5] [i_13] [i_0 - 1]);
                        var_42 = ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
                    }
                    for (short i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) (short)811)))));
                        arr_48 [i_0] [i_2] [i_12 - 2] [i_12 + 1] [i_14] = ((/* implicit */short) ((unsigned short) ((long long int) var_12)));
                    }
                    for (short i_15 = 0; i_15 < 24; i_15 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0 + 1] [i_12 - 1] [i_5] [i_12])) != (((/* implicit */int) arr_9 [i_0 + 1] [i_12 - 2] [i_2] [i_0]))));
                        var_45 = ((/* implicit */unsigned int) 8384512);
                    }
                }
            }
        }
        for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            arr_54 [i_0 - 1] [i_16] [i_16] = ((/* implicit */long long int) var_9);
            /* LoopSeq 1 */
            for (unsigned short i_17 = 4; i_17 < 23; i_17 += 2) 
            {
                var_46 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_47 [i_0] [i_16] [i_0])))));
                var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_16] [i_17] [i_16] [i_16])) ? (((/* implicit */int) arr_35 [i_0] [i_16] [i_16] [i_0 - 1] [(unsigned short)0] [i_16] [i_17])) : (arr_45 [i_0] [i_0] [i_17] [(signed char)19] [i_17])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-13690)))) : (arr_55 [i_0]))))));
            }
            var_48 = ((/* implicit */int) var_13);
        }
        var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) arr_35 [20] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)9]))));
    }
}
