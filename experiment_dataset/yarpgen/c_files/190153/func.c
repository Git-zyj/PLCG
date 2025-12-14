/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190153
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
    var_14 = ((/* implicit */long long int) max(((short)-3), (var_6)));
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_4))))))), (var_1)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((int) arr_2 [i_0] [i_0])) : ((+(((/* implicit */int) (signed char)127))))));
    }
    for (long long int i_1 = 4; i_1 < 13; i_1 += 2) 
    {
        var_17 = ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_11 [i_1 - 2] [(signed char)1] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)234)) < (((/* implicit */int) (unsigned char)45)))) ? (((/* implicit */int) ((((/* implicit */int) ((var_10) < (((/* implicit */long long int) var_11))))) < (((((/* implicit */int) var_13)) % (((/* implicit */int) arr_1 [i_1] [i_2]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                        var_19 = var_6;
                    }
                } 
            } 
        }
        arr_18 [i_1 + 1] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_6 [i_1 - 4] [i_1 - 4])) + (((/* implicit */int) arr_6 [i_1] [i_1 - 4])))), (((/* implicit */int) arr_6 [i_1] [i_1 - 4]))));
        var_20 = ((/* implicit */unsigned char) var_5);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) var_13);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_28 [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                        var_22 = ((short) ((_Bool) arr_1 [i_5] [i_7 - 1]));
                    }
                    var_23 = ((/* implicit */int) var_4);
                    arr_29 [i_6] [i_7] [i_7] = ((/* implicit */_Bool) ((int) var_7));
                    /* LoopSeq 4 */
                    for (signed char i_9 = 1; i_9 < 13; i_9 += 2) 
                    {
                        var_24 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_19 [i_7 - 1])), (var_10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_5)));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27877)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_31 [i_7 + 1] [i_9 + 2] [i_9 + 4] [i_9 + 1])));
                    }
                    for (signed char i_10 = 2; i_10 < 16; i_10 += 2) 
                    {
                        arr_37 [i_5] [i_10 + 1] [i_5] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_31 [i_5] [i_7 - 1] [i_10 + 1] [i_10 + 1])))));
                        arr_38 [(short)2] [i_6] [i_7] [i_10 + 1] [(unsigned char)12] [i_10 - 2] = ((/* implicit */long long int) (+(arr_20 [i_5])));
                        arr_39 [i_7] [i_7] [i_6] [i_7] = ((unsigned long long int) (signed char)55);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_44 [i_5] [i_5] [i_7] [i_11] [16] = ((/* implicit */short) ((unsigned int) max((var_4), (((/* implicit */unsigned long long int) arr_36 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1])))));
                        var_26 = min((((/* implicit */long long int) arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1])), (min((((/* implicit */long long int) arr_35 [i_7 - 1] [i_7 - 1] [i_7 + 1])), (var_12))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        arr_47 [i_5] [(_Bool)1] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) >= (var_12)));
                        arr_48 [i_5] [i_7] [i_7 + 1] [(signed char)10] = ((/* implicit */short) ((signed char) (_Bool)1));
                        arr_49 [i_5] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */signed char) min(((+(arr_32 [i_7 - 1] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_7 - 1] [i_7] [i_7] [i_7])))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_27 [i_5] [6] [i_5] [i_5] [i_7] [i_12])) <= (((((/* implicit */_Bool) arr_27 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_7 - 1]))) : (var_4)))));
                    }
                }
            } 
        } 
        arr_50 [i_5] = (+(((/* implicit */int) arr_23 [i_5] [11ULL] [(short)1])));
        /* LoopSeq 2 */
        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            arr_54 [i_5] [(signed char)11] = ((/* implicit */signed char) var_13);
            var_28 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_30 [i_5] [i_13] [i_13] [i_5])) ? (((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [i_5])) : (((/* implicit */int) arr_30 [i_5] [i_5] [i_13] [i_13])))));
        }
        for (int i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            var_29 = ((/* implicit */short) (((~(var_10))) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            var_30 = ((/* implicit */_Bool) arr_35 [i_14] [i_14] [i_5]);
            var_31 = ((/* implicit */short) ((unsigned long long int) 12376138081709453947ULL));
            arr_59 [(unsigned short)11] [i_5] [(short)1] = ((/* implicit */long long int) var_5);
            arr_60 [i_5] = ((/* implicit */signed char) arr_26 [i_14] [i_14] [i_14] [i_14]);
        }
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))))) : (((/* implicit */int) max((((/* implicit */short) ((signed char) var_9))), (arr_2 [13LL] [i_5]))))));
    }
    for (int i_15 = 1; i_15 < 22; i_15 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_66 [(short)8] [i_16] = ((/* implicit */unsigned char) ((long long int) var_7));
            /* LoopNest 3 */
            for (unsigned int i_17 = 3; i_17 < 24; i_17 += 2) 
            {
                for (int i_18 = 4; i_18 < 24; i_18 += 2) 
                {
                    for (unsigned short i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        {
                            arr_76 [i_19] [i_18 + 1] [i_17 - 3] [i_16] [i_15 + 2] [i_15 + 2] = ((/* implicit */_Bool) arr_63 [i_19] [i_15 - 1]);
                            arr_77 [(short)17] [i_16] [i_16] [15LL] [i_16] = ((/* implicit */short) var_2);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_6))));
                            arr_78 [i_19] [i_18] [i_17 - 1] [(_Bool)1] [i_15] = ((/* implicit */unsigned short) ((signed char) var_4));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned short i_21 = 4; i_21 < 24; i_21 += 2) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_88 [i_15] [i_20] [i_20] [i_20] [i_15 + 2] = ((/* implicit */short) ((_Bool) var_6));
                            var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)21513)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (unsigned short)44035)))) >= (((/* implicit */int) (short)-18122))));
                            arr_89 [i_20] [i_15] [i_16] [(unsigned short)13] [18ULL] = ((/* implicit */short) var_1);
                        }
                    } 
                } 
            } 
        }
        arr_90 [i_15] = ((/* implicit */unsigned short) var_0);
    }
}
