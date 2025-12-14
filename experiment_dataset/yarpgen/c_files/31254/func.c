/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31254
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
    var_16 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)55867)), (4091542988U)))) / (((((/* implicit */_Bool) 0LL)) ? (-8378778678917703116LL) : (((/* implicit */long long int) 4091542988U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (10103470113298173147ULL) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) max(((unsigned short)52145), (((/* implicit */unsigned short) var_0))))) : (-19))))));
    var_17 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 385173732U)) ? (203424308U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52152))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [3LL] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195)))))), (0LL))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((arr_0 [i_0]), (arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned char) 203424308U));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) ((unsigned char) arr_0 [i_1 + 1]));
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3167028427U)) ? (((/* implicit */int) (unsigned short)15)) : (-125083256)));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) arr_6 [i_0]);
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    /* LoopSeq 4 */
                    for (short i_4 = 2; i_4 < 14; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) -125083281)) ? (arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [7U] [7U] [i_2]))))))));
                        var_22 = ((/* implicit */_Bool) arr_1 [i_0]);
                        var_23 = ((/* implicit */int) (+(arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4])));
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                    {
                        arr_19 [i_2] = ((/* implicit */int) -6851796681210539875LL);
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(arr_18 [4ULL] [i_1 - 1] [i_1 - 1] [4ULL] [i_5]))))));
                        var_25 = ((/* implicit */signed char) arr_15 [i_5] [i_2] [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                    }
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((unsigned short) arr_21 [i_0] [i_0] [i_0] [i_1 - 1] [i_6]));
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned int) arr_18 [i_1] [i_1 + 1] [2] [i_2] [i_2]));
                        arr_22 [i_0] [i_1 + 1] [i_6] [i_6] [i_6] [i_3] [i_1] = ((/* implicit */int) ((signed char) -8270964133030525564LL));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [13] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_18 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1])))));
                    }
                    for (signed char i_7 = 3; i_7 < 13; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (+(arr_18 [i_0] [i_0] [i_1 + 1] [i_7 - 1] [i_7]))))));
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_7 - 1]))));
                        var_31 = ((/* implicit */int) arr_15 [i_7] [i_3] [i_3] [i_1] [i_1] [i_0]);
                        arr_27 [i_7 - 3] [i_1] [i_7] [i_1] [i_0] = ((/* implicit */short) (!(arr_26 [6ULL] [i_7 - 2] [4ULL] [i_7] [i_7 - 3] [i_7])));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_17 [i_0] [i_0] [(unsigned char)13] [6U] [i_7 + 2] [(signed char)13] [i_2]))))))));
                    }
                    arr_28 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [4LL] [i_1] [i_2] [i_1] [i_3]);
                }
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_1 [13ULL]))));
            }
            for (int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
            {
                arr_31 [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 + 1] [i_1] [i_1 + 1] [(signed char)1] [i_8] [i_8])) : (((unsigned long long int) 1U)));
                var_34 = ((/* implicit */unsigned int) (unsigned short)13390);
            }
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                var_35 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_1] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))));
                var_36 = ((/* implicit */long long int) arr_7 [i_1 + 1] [i_1] [i_1 - 1]);
            }
            var_37 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
    }
    for (long long int i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */int) arr_18 [i_10] [i_10] [9LL] [i_10] [(unsigned short)6]);
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            var_39 = ((/* implicit */signed char) var_6);
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) arr_37 [i_11 + 1] [i_10]))));
        }
        for (unsigned char i_12 = 3; i_12 < 13; i_12 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_13 = 2; i_13 < 14; i_13 += 1) 
            {
                arr_46 [i_10] [i_12] [i_13 + 1] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-117)) == (125083293)));
                var_41 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_13 - 2] [i_12] [i_13 - 2] [i_12 - 3] [i_12])) ? (((/* implicit */int) min((arr_20 [i_13 - 2] [i_12] [i_12] [i_12 - 3] [i_10]), (arr_20 [i_13 - 2] [i_12 + 2] [i_13 - 2] [i_12 - 3] [i_12])))) : (((/* implicit */int) ((_Bool) arr_20 [i_13 - 2] [i_12] [10] [i_12 - 3] [i_10])))));
                /* LoopSeq 1 */
                for (unsigned short i_14 = 3; i_14 < 13; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_47 [i_12] [i_12] [i_12] [i_14] [i_15] [i_14]))));
                        arr_51 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (-(35184372088832LL)))) ? (((((/* implicit */unsigned int) -781515904)) / (3734324881U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12] [i_13] [i_13 - 1]))))));
                        var_43 = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) (signed char)-126)), (0LL)))));
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_10] [i_12] [i_12 - 2] [i_14] [i_12 + 2])) : (((/* implicit */int) arr_13 [i_10] [i_12] [i_12 - 2] [i_14] [i_15])))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)(-127 - 1))))));
                        var_46 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) -7LL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        arr_59 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) var_12);
                        arr_60 [i_12] = (!(((/* implicit */_Bool) arr_18 [i_14 - 1] [i_14] [i_12 - 1] [i_13 + 1] [i_12 - 1])));
                    }
                    for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned char) (unsigned short)65510);
                        var_48 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_12 - 2] [i_12 - 2] [i_13 + 1] [12] [12] [i_14 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)58)), ((unsigned char)28))))) : (756619298U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned short)17484)) : (((/* implicit */int) var_2))))) : (-4806897229904050160LL));
                    }
                    var_49 = ((/* implicit */signed char) arr_33 [i_10] [i_12] [i_13] [i_14]);
                }
            }
            /* LoopSeq 1 */
            for (signed char i_19 = 0; i_19 < 15; i_19 += 1) 
            {
                var_50 = ((/* implicit */_Bool) arr_47 [i_10] [i_12] [4LL] [4LL] [i_10] [i_10]);
                var_51 ^= ((/* implicit */unsigned char) (signed char)-119);
                arr_66 [i_19] [i_10] [i_12] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-120)) & (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)25405))))))) ? (((((unsigned long long int) (signed char)48)) << (((((/* implicit */int) var_0)) - (179))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)30624))))));
                var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((signed char) arr_9 [i_12 - 1] [i_12] [i_19])))));
            }
        }
    }
    for (long long int i_20 = 0; i_20 < 15; i_20 += 2) /* same iter space */
    {
        var_53 = ((/* implicit */_Bool) max((var_53), ((!(((/* implicit */_Bool) min((arr_29 [i_20]), (arr_29 [i_20]))))))));
        var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_62 [i_20] [i_20]))) ? (((/* implicit */int) arr_65 [i_20] [i_20])) : (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))))))));
        var_55 ^= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (unsigned char)167)), (9223372036854775780LL))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)89)))))))));
    }
}
