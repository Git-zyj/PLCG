/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226108
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) (short)12305);
        arr_3 [(short)21] = var_11;
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) (unsigned short)64166)) : ((~(((/* implicit */int) (unsigned short)64166))))));
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned short)64166);
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_2);
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1369)) ^ (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)1369)) : (((/* implicit */int) (unsigned short)1369))))));
            }
            /* LoopSeq 4 */
            for (unsigned char i_3 = 3; i_3 < 21; i_3 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    arr_17 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_1])) * (((/* implicit */int) arr_14 [i_1]))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)1369)) < (((/* implicit */int) var_1))));
                }
                for (short i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 2; i_6 < 23; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */short) (-((-(((/* implicit */int) var_3))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((((/* implicit */_Bool) arr_7 [(short)20] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [(unsigned char)1])) : (((/* implicit */int) (unsigned short)1369))))));
                        var_21 = ((/* implicit */long long int) (!(arr_1 [i_5 + 2])));
                        arr_24 [i_0] [i_1] [i_1] [i_3 + 2] [i_5] [i_1] = ((/* implicit */short) (unsigned short)1369);
                    }
                    for (unsigned char i_7 = 4; i_7 < 24; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */short) (unsigned short)64167);
                        arr_28 [i_0] [i_1] [i_1] [i_0] [(short)3] = ((/* implicit */short) ((((/* implicit */int) var_8)) + (((((/* implicit */_Bool) (unsigned short)1379)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))));
                    }
                    arr_29 [i_1] [i_3 + 2] = ((/* implicit */short) var_7);
                }
                for (short i_8 = 1; i_8 < 23; i_8 += 3) /* same iter space */
                {
                    arr_32 [i_0] [i_1] [i_3 - 3] [i_8] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)1369)) > (((/* implicit */int) var_10))))) <= (((arr_5 [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)64166)) : (((/* implicit */int) (unsigned short)64167))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_8 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [(unsigned char)1]))));
                    arr_33 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_1]))));
                }
                for (short i_9 = 4; i_9 < 24; i_9 += 2) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_3 + 1] [i_0])) - (((/* implicit */int) arr_21 [i_3] [i_3] [i_3 - 2] [i_3 - 3] [i_1]))));
                    /* LoopSeq 1 */
                    for (short i_10 = 1; i_10 < 23; i_10 += 3) 
                    {
                        arr_40 [(short)3] [i_1] [i_1] [i_3] [i_9 - 3] [i_1] = ((/* implicit */_Bool) arr_15 [i_1] [(short)13] [i_9] [i_10 + 1]);
                        var_25 = ((/* implicit */int) arr_20 [i_1] [i_10]);
                    }
                }
                arr_41 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_3 - 3] [i_3 - 3] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)64167)) : (arr_36 [i_3 - 3] [i_3] [i_3 + 1] [i_3])));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_26 = ((/* implicit */long long int) ((_Bool) var_6));
                arr_45 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (unsigned short)64167)))));
            }
            for (unsigned char i_12 = 2; i_12 < 22; i_12 += 3) 
            {
                arr_48 [i_0] [i_1] [i_12 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2))));
                arr_49 [i_0] [i_1] [(signed char)6] = ((/* implicit */unsigned int) arr_0 [(short)24]);
            }
            for (unsigned int i_13 = 2; i_13 < 24; i_13 += 3) 
            {
                arr_53 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_25 [i_1] [i_13 - 2] [i_13 - 1] [i_13 - 2]) ? (((/* implicit */int) arr_25 [i_1] [i_13 - 2] [i_13 - 2] [i_13 - 2])) : (((/* implicit */int) var_3))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 23; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        {
                            arr_61 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                            var_27 = ((/* implicit */unsigned char) (+(((var_14) / (((/* implicit */long long int) arr_47 [i_14] [i_1] [i_1]))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned int i_16 = 2; i_16 < 24; i_16 += 3) 
            {
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    {
                        arr_67 [i_1] = ((/* implicit */long long int) ((unsigned short) (unsigned short)64167));
                        /* LoopSeq 2 */
                        for (signed char i_18 = 1; i_18 < 21; i_18 += 3) 
                        {
                            arr_70 [i_0] [i_0] [i_16] [i_1] [i_18] [i_0] = ((/* implicit */_Bool) arr_0 [i_16 - 2]);
                            arr_71 [i_0] [i_17] [i_1] [i_17] = ((/* implicit */short) ((arr_25 [22LL] [17U] [i_16 - 2] [i_16 + 1]) ? (((/* implicit */int) ((short) (unsigned short)1369))) : (((/* implicit */int) (unsigned short)1369))));
                            var_28 = ((/* implicit */unsigned char) ((short) var_12));
                            var_29 = ((/* implicit */unsigned char) arr_65 [(_Bool)1] [i_17] [9] [i_1] [(_Bool)1] [i_0]);
                            arr_72 [i_0] [i_1] [(_Bool)1] [i_17] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) arr_19 [i_17] [i_16 - 1] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)1369))))) ? (((/* implicit */int) ((short) (unsigned short)64167))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_26 [(unsigned char)10] [i_1] [i_0]))))));
                        }
                        for (unsigned short i_19 = 1; i_19 < 24; i_19 += 3) 
                        {
                            var_30 = ((/* implicit */short) (unsigned short)1357);
                            arr_75 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64167)) < (((/* implicit */int) (unsigned short)64166))));
                        }
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)64166)) != ((+(((/* implicit */int) arr_68 [i_0]))))))) / ((+(((/* implicit */int) arr_22 [i_0] [i_0] [(unsigned char)8]))))));
    }
    var_32 = ((/* implicit */short) max(((((+(((/* implicit */int) (unsigned short)1369)))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64166)) && (((/* implicit */_Bool) var_6))))))), ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)1368))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_20 = 2; i_20 < 17; i_20 += 2) 
    {
        arr_80 [i_20] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_64 [i_20] [i_20] [i_20] [i_20] [i_20 - 1] [i_20 + 1])))));
        arr_81 [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_20])) * (((/* implicit */int) arr_78 [i_20 + 1]))));
    }
    for (short i_21 = 2; i_21 < 21; i_21 += 3) 
    {
        arr_84 [17LL] [i_21] = ((/* implicit */long long int) ((unsigned short) var_3));
        var_33 = ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_21]));
    }
}
