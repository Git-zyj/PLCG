/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222658
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((arr_0 [i_0] [(short)18]) <= (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (short)(-32767 - 1));
            arr_8 [i_1] [i_1 + 1] [i_1] = ((/* implicit */unsigned int) ((int) (unsigned char)124));
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-59))));
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)103)) != (((/* implicit */int) arr_1 [i_1 - 1]))))))))));
                        arr_13 [i_3 + 2] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) (+(arr_0 [i_1 - 1] [i_1 - 1])));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_5 [(short)6]))));
                            arr_16 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 274964320U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))) : (274964302U)));
                            arr_17 [i_0] [i_1 - 2] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) ((((var_14) + (((/* implicit */unsigned long long int) var_2)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(unsigned char)1] [(unsigned char)1] [i_1])) ? (((/* implicit */int) (short)-30433)) : (((/* implicit */int) var_8)))))));
                            var_19 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_15 [i_1 - 2] [i_1] [(short)13] [i_1 - 2] [i_3])))) == (((((/* implicit */int) (_Bool)1)) << (((-346227500) + (346227505)))))));
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 3313583454U)))))) : (var_14)));
            /* LoopNest 3 */
            for (unsigned int i_6 = 3; i_6 < 15; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */short) min((var_22), (var_7)));
                            var_23 = ((/* implicit */unsigned long long int) ((3313583462U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191)))));
                        }
                    } 
                } 
            } 
            arr_29 [i_0] [i_5] = ((/* implicit */unsigned short) var_10);
            var_24 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)8169)) ? (var_3) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_5])))));
        }
        arr_30 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    for (int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) 1993160567U))));
                            var_26 = ((signed char) var_9);
                        }
                    } 
                } 
            } 
            arr_42 [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) arr_39 [i_0] [i_9] [i_0] [i_9] [i_9] [i_9]);
        }
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32748)) ? (arr_25 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */long long int) var_1)))))));
            var_28 = ((/* implicit */unsigned char) ((arr_21 [i_0] [(short)8] [i_0] [i_13]) ? (var_2) : (((/* implicit */int) arr_21 [i_13] [i_13] [i_13] [i_13]))));
            var_29 = ((/* implicit */int) (+(arr_0 [i_0] [i_13])));
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_3))))))));
        }
    }
    var_31 = ((((/* implicit */int) var_11)) ^ (var_3));
    /* LoopSeq 2 */
    for (short i_14 = 0; i_14 < 10; i_14 += 3) 
    {
        var_32 = ((/* implicit */_Bool) ((unsigned long long int) (+(var_6))));
        var_33 = ((/* implicit */unsigned int) min((((((var_12) + (((/* implicit */int) var_7)))) == (((var_0) ? (((/* implicit */int) arr_19 [i_14] [i_14] [i_14])) : (((/* implicit */int) (short)32763)))))), (((((((/* implicit */_Bool) 4294967295U)) ? (arr_5 [10LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_14] [i_14] [1U]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)10539))))))))));
    }
    for (long long int i_15 = 4; i_15 < 21; i_15 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            for (long long int i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4020002971U)) ? (((/* implicit */int) (unsigned short)57355)) : (((/* implicit */int) (short)10375))))));
                        var_35 *= ((/* implicit */unsigned long long int) arr_48 [i_15]);
                        var_36 ^= ((/* implicit */unsigned long long int) ((-5314973818686603236LL) / (2029731270002031086LL)));
                        var_37 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) arr_48 [i_15 + 2])) * (arr_53 [i_15 - 4])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
            {
                for (unsigned short i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    {
                        var_38 += ((/* implicit */short) ((unsigned int) (_Bool)1));
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_49 [i_21] [i_20] [i_20])))))));
                        var_40 = ((/* implicit */short) ((unsigned short) max((arr_53 [i_15 - 3]), (((/* implicit */unsigned int) arr_59 [i_20] [i_21] [i_19])))));
                        arr_63 [i_21] [i_19] [i_19] [i_15] = ((/* implicit */unsigned int) ((((_Bool) arr_55 [i_15 - 2] [i_15 + 2] [i_15 - 2] [i_15] [i_15 + 2])) ? (((var_5) ? (((/* implicit */int) arr_55 [i_15 - 2] [i_15 - 1] [i_15] [i_15] [i_15 + 2])) : (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) arr_59 [i_15 - 4] [i_15 + 2] [i_19]))))));
                    }
                } 
            } 
        } 
    }
    var_41 -= ((/* implicit */long long int) var_7);
}
