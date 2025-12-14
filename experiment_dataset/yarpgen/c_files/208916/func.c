/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208916
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) | (((long long int) arr_0 [i_0]))));
        var_13 += ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)99)) || (((/* implicit */_Bool) -2079423482)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (+((-(((unsigned long long int) 3484836108016725840LL))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 22; i_3 += 3) 
            {
                for (int i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (2079423482) : (((/* implicit */int) arr_12 [(unsigned short)14] [(unsigned short)14] [i_3 - 1] [i_2]))))))));
                        var_15 = ((/* implicit */signed char) ((int) 6422736041762070121ULL));
                        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                        arr_13 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */int) ((unsigned char) arr_7 [i_3 - 2] [i_1 - 1] [i_1]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_5 = 2; i_5 < 24; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned int) ((2079423482) & (((/* implicit */int) arr_16 [i_1] [i_2] [0LL] [i_6]))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_21 [i_1] [i_1] = ((/* implicit */_Bool) var_7);
                            arr_22 [i_7] [i_7] [i_1] [i_6] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) -991129458708344980LL);
                            var_18 += ((/* implicit */unsigned char) arr_11 [i_1] [(unsigned char)12]);
                            var_19 -= ((/* implicit */unsigned char) (~(arr_6 [i_1 - 1] [i_2] [i_7 + 1])));
                        }
                        var_20 = ((/* implicit */unsigned short) ((3600623455761935028ULL) & (((/* implicit */unsigned long long int) 2975276480U))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (short i_9 = 4; i_9 < 22; i_9 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) ((arr_19 [i_1 - 1] [i_9 - 1] [i_9 - 2] [i_9] [1U]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (short)25)) % (((/* implicit */int) ((arr_26 [i_1] [i_2] [i_8] [24U] [i_9] [i_9]) != (((/* implicit */int) arr_27 [i_1] [i_2] [i_2] [i_9]))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_10 = 3; i_10 < 22; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            arr_37 [i_1 - 1] [i_2] [i_10] [i_11] [i_1] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) | (-1027400366341765657LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            var_23 = ((/* implicit */unsigned char) var_2);
                        }
                        var_24 = ((/* implicit */signed char) var_4);
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 1; i_14 < 21; i_14 += 4) 
            {
                for (int i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    {
                        arr_45 [i_1] [i_14] [i_13] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))) << ((((~(arr_24 [i_1] [i_13] [i_14] [i_15]))) + (4500088914375899850LL)))));
                        arr_46 [i_1] [i_13] [i_13] [i_15] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (arr_41 [i_1 - 1] [i_13] [i_14]) : (((/* implicit */unsigned long long int) arr_42 [(_Bool)1] [(unsigned char)8] [i_14])))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_1] [i_1 - 1] [i_1 - 1] [i_1])))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (short)-25051))));
                        var_27 = ((/* implicit */int) ((unsigned short) arr_6 [i_14 + 4] [i_14 - 1] [i_14 + 3]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_16 = 2; i_16 < 24; i_16 += 3) 
            {
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    {
                        arr_53 [i_1] [i_1] [i_1] = var_4;
                        arr_54 [i_1] [i_13] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 2079423482)) / (var_8)));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1] [6] [(unsigned char)13] [i_17])) ? (((/* implicit */int) ((arr_5 [18LL] [18LL]) > (((/* implicit */int) var_3))))) : (((/* implicit */int) var_0)))))));
                        var_29 = ((/* implicit */unsigned short) (unsigned char)255);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned int i_18 = 1; i_18 < 24; i_18 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_19 = 1; i_19 < 22; i_19 += 4) 
            {
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (arr_41 [12ULL] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) > (arr_15 [12ULL] [i_18] [12ULL]))))))))));
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_63 [i_1] [i_18 + 1] [i_19] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_18 + 1] [i_19 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
                    arr_64 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_61 [i_19 - 1] [(_Bool)1] [i_19] [i_19] [i_18 + 1])) == (((arr_18 [i_20] [i_19] [(_Bool)1] [i_1]) * (((/* implicit */unsigned long long int) 4294967281U))))));
                    var_31 += ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) + (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))))));
                    arr_65 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_20] [(_Bool)1] [i_18] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_1] [i_19 + 1])))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_19] [i_1])) ? (((/* implicit */unsigned int) var_2)) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_19] [i_1] [i_19] [i_20] [i_19])))));
                }
            }
            var_32 -= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_34 [i_18 - 1] [18] [i_18 - 1] [18] [i_1])) ? (68652367872ULL) : (((/* implicit */unsigned long long int) 915365109)))));
        }
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_68 [i_21 - 1] [i_21 - 1] [i_1]))) - (((/* implicit */int) ((_Bool) arr_26 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_21])))));
            var_34 -= arr_32 [i_1] [i_21 - 1] [i_21 - 1] [i_21 - 1];
        }
    }
}
