/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19200
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
    var_13 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_7)));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_9 [i_0] [i_1 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) (+(arr_7 [i_0] [i_0] [i_0])));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (short)4656))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            arr_16 [i_4] = ((/* implicit */signed char) arr_12 [i_2] [i_2]);
                            arr_17 [i_2] [(unsigned char)3] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)-4663)) / (((/* implicit */int) arr_13 [i_0] [i_1 + 3] [3ULL] [i_1 - 3]))));
                            arr_18 [i_4] = ((/* implicit */unsigned int) -711279888);
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((4769807220453836238ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_4])))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (signed char i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    {
                        arr_24 [i_5] [i_5] [10LL] [i_6] = ((/* implicit */unsigned long long int) arr_0 [i_6]);
                        arr_25 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_5])) : (arr_1 [i_1 + 2])));
                        var_16 = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_1 - 3] [i_5] [i_6 - 1] [i_6] [i_1 + 2]) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1 - 1] [i_1] [i_5] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_5] [i_6] [i_6 + 2] [i_6 + 1]))));
                    }
                } 
            } 
        }
    }
    for (signed char i_7 = 1; i_7 < 20; i_7 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((35184372088831ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_7] [i_7 + 2])))));
        /* LoopSeq 4 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            arr_32 [i_7] [i_8] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_7])))))));
            arr_33 [i_8] [i_7] = ((/* implicit */unsigned int) 1301446122);
            arr_34 [i_7 + 2] [i_7] [i_8] = ((/* implicit */unsigned short) ((_Bool) (short)4673));
            arr_35 [i_7] [i_7] = (+(min((arr_29 [i_8]), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-7501)), (arr_31 [i_7] [i_7])))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((/* implicit */int) arr_27 [(unsigned char)14])), ((-(-711279919))))))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_39 [i_7] [i_7] = ((unsigned short) (!(((/* implicit */_Bool) 32767ULL))));
            arr_40 [i_7] [i_9] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_4)))) / (((/* implicit */int) ((signed char) var_5)))))), (max((arr_29 [i_9 - 1]), (((((/* implicit */_Bool) arr_31 [i_7 - 1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))) : (arr_30 [i_9 - 1] [i_9 - 1] [(short)14])))))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                arr_45 [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(arr_37 [i_7] [i_11])));
                arr_46 [i_7 + 1] [i_7] [i_11] = ((/* implicit */unsigned short) ((unsigned int) (~(var_2))));
                arr_47 [i_10] [i_7] [i_10 - 1] [i_10 - 1] = ((/* implicit */long long int) (short)24);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((min((((unsigned long long int) 8608810154167203923ULL)), (((/* implicit */unsigned long long int) arr_37 [i_7] [i_12])))) & (((/* implicit */unsigned long long int) (~(-711279917)))))))));
                arr_50 [i_7 + 1] [i_7] [i_12] = (signed char)-28;
                var_20 = ((/* implicit */unsigned short) arr_42 [i_7]);
                var_21 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((-7803927767577761454LL), (((/* implicit */long long int) arr_26 [i_10 - 1]))))), (((((/* implicit */unsigned long long int) 7803927767577761427LL)) + (min((((/* implicit */unsigned long long int) arr_36 [i_7] [(unsigned char)2] [i_12])), (arr_29 [i_7 + 1])))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                arr_54 [i_7] [i_7] [i_10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (+(arr_37 [i_10 - 1] [i_13]))))) && (((/* implicit */_Bool) var_10))));
                var_22 *= ((((/* implicit */_Bool) (~((~(var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_51 [i_10 - 1] [i_7 + 1] [i_7 - 1])))) : (16776960LL));
            }
            /* LoopNest 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    for (unsigned char i_16 = 2; i_16 < 21; i_16 += 4) 
                    {
                        {
                            arr_64 [i_15] [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)4664)), (370362163U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_56 [i_7] [i_10 - 1] [i_7]))))) : (((((/* implicit */_Bool) (short)-4646)) ? (4889950126823734232ULL) : (((/* implicit */unsigned long long int) 3494943665U)))))));
                            arr_65 [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_7 + 2] = ((/* implicit */signed char) max(((unsigned short)65522), (((/* implicit */unsigned short) arr_26 [12LL]))));
                            arr_66 [i_7] [i_7] [i_7] [i_16] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_9)))) ? (arr_29 [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -16776959LL))))))));
                        }
                    } 
                } 
            } 
            var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_58 [i_7] [i_7 - 1] [i_10 - 1])) : (((/* implicit */int) var_5))))) ? ((~(((7143077092208063963ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [(unsigned short)8] [(unsigned short)8] [(unsigned char)2] [(signed char)10]))))))) : (((/* implicit */unsigned long long int) 711279889))));
            arr_67 [2LL] [i_10 - 1] &= ((/* implicit */short) arr_42 [(signed char)12]);
            arr_68 [i_7 + 2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_53 [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_28 [i_7] [i_10 - 1])), (var_11))))))) ? (var_0) : ((-(((((/* implicit */_Bool) (unsigned char)48)) ? (7803927767577761439LL) : (((/* implicit */long long int) ((/* implicit */int) (short)4670)))))))));
        }
        for (unsigned short i_17 = 4; i_17 < 19; i_17 += 3) 
        {
            arr_71 [i_7] [i_7] = ((/* implicit */unsigned int) arr_27 [i_7]);
            arr_72 [12U] [i_7] [12U] &= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_17] [i_17 + 2])) ? (((/* implicit */int) (signed char)-53)) : (arr_48 [i_17] [i_17 + 1])))), (18446744073709518859ULL));
            var_24 = ((/* implicit */unsigned long long int) arr_26 [i_7 - 1]);
        }
    }
    var_25 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
    {
        arr_77 [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((long long int) var_2)) >= (((/* implicit */long long int) arr_36 [i_18] [i_18] [(unsigned short)0]))));
        arr_78 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)106)) ? (6969373665580123086ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
    }
}
