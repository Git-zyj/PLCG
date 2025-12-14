/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47656
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_1 + 1])) ? ((-(var_5))) : (arr_4 [i_1 + 1] [i_1 + 1]))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) ((((unsigned int) var_9)) << (((max((((unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_1 + 1])), (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0] [i_0] [(unsigned short)6]) ? (arr_4 [20LL] [20LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))) - (12749356307879691192ULL)))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((unsigned int) min((arr_7 [i_0] [i_1 + 1] [i_0]), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_9))))))))));
                        var_19 += ((/* implicit */long long int) arr_9 [i_0] [i_1 + 1] [i_2 - 1] [i_2] [i_3] [i_3]);
                    }
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        arr_12 [(unsigned char)16] [i_4] [i_2 - 2] [i_0] = ((/* implicit */unsigned int) max(((-(((long long int) arr_5 [9U] [i_1 + 1])))), (max((((/* implicit */long long int) arr_0 [(unsigned char)7])), (((long long int) var_12))))));
                        var_20 ^= var_8;
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        arr_16 [i_0] [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_2 - 1]))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((_Bool) arr_4 [i_2 - 2] [i_2 + 1])))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned char) (~((+(((var_8) >> (((arr_9 [i_2] [i_2] [(unsigned char)0] [i_2] [i_2] [16U]) - (1385423955U)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            arr_23 [6] [0LL] [i_7] [i_2 - 2] [i_7] [(unsigned char)12] [0LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_18 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))))) && (((/* implicit */_Bool) max((arr_17 [i_0] [i_7 + 1] [i_2] [i_1 + 1] [i_7]), (((/* implicit */long long int) arr_9 [i_6] [i_7 + 2] [i_6] [i_7] [12U] [i_2 - 2])))))));
                            var_23 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_1 + 1]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_7 + 1] [i_2 - 1] [i_1 + 1]), (arr_7 [i_7 + 2] [i_2 - 1] [i_1 + 1])))) ? (max((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) : (var_8))))) : (var_10)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            arr_27 [i_0] [16] [i_2 - 1] |= ((/* implicit */unsigned long long int) var_4);
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_2 - 1] [i_8] [i_8])) ? (((/* implicit */int) arr_15 [i_1] [i_1 + 1] [i_2 - 1] [i_2])) : (var_13)))) ? (((/* implicit */long long int) ((unsigned int) arr_15 [i_1 + 1] [i_1 + 1] [i_2 - 1] [i_2]))) : (((long long int) arr_15 [i_1] [i_1 + 1] [i_2 - 1] [i_2])))))));
                        }
                        var_26 -= ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_0] [8ULL])))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)39)))))));
                            arr_32 [i_0] [17U] [i_2 + 1] [i_2] [(signed char)12] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) var_12)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 3) 
                        {
                            var_28 -= ((/* implicit */long long int) (+(min((((/* implicit */int) arr_33 [(signed char)19] [i_11 - 1] [(signed char)19] [17ULL] [i_11])), (max((((/* implicit */int) arr_31 [i_0] [i_1] [i_1] [i_2] [i_9 - 2] [i_9 - 2])), (var_13)))))));
                            var_29 -= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_34 [i_1 + 1] [2LL])) ? (arr_34 [i_1 + 1] [i_1 + 1]) : (arr_34 [i_1 + 1] [i_1 + 1]))));
                        }
                    }
                }
            } 
        } 
        arr_35 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) max((arr_2 [i_0]), (arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_30 += ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [5ULL] [(unsigned char)18] [(unsigned char)18] [i_12] [i_13] [i_12])))))));
                /* LoopSeq 1 */
                for (unsigned short i_14 = 1; i_14 < 19; i_14 += 2) 
                {
                    var_31 = ((unsigned int) (unsigned char)64);
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_9 [i_0] [i_12] [19ULL] [i_12] [14] [i_14]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_12] [i_13] [i_14]))))) >> (((max((((/* implicit */unsigned long long int) arr_10 [10U] [i_12] [10U] [i_14] [16ULL] [i_13])), (var_6))) - (12468118853996133500ULL)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_14 - 1] [i_14] [i_14 + 2] [i_14 + 1])), (var_2)))) : (min((arr_2 [i_14 + 2]), (arr_2 [i_14 + 2])))));
                }
                arr_44 [i_12] [i_12] = var_11;
            }
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_47 [i_0] [i_12] [i_15] [i_12]))) ? (((int) (unsigned char)216)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [i_0])))))));
                var_34 -= ((/* implicit */unsigned int) var_12);
                var_35 *= ((/* implicit */unsigned char) (~(((long long int) ((unsigned char) arr_19 [i_0] [i_12] [i_0] [(unsigned short)3] [i_0] [i_0] [i_15])))));
                var_36 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(arr_40 [i_15] [i_12])))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) min(((unsigned char)217), (((/* implicit */unsigned char) (signed char)113))))))), (((/* implicit */int) ((_Bool) (~(var_5)))))));
                var_37 = ((/* implicit */unsigned int) max(((~((~(arr_34 [i_12] [i_15]))))), (((/* implicit */int) min(((unsigned char)217), (((/* implicit */unsigned char) (signed char)4)))))));
            }
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_38 -= ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) var_3)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) < (arr_7 [20LL] [20LL] [i_16])))))), (((((/* implicit */_Bool) max((arr_17 [i_0] [i_12] [i_12] [(unsigned short)17] [i_0]), (((/* implicit */long long int) arr_31 [i_16] [6LL] [i_16] [6LL] [i_0] [i_0]))))) ? (var_14) : (((/* implicit */unsigned long long int) var_8))))));
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (~((((!(((/* implicit */_Bool) arr_18 [i_17] [i_12] [i_17] [i_17])))) ? (arr_7 [i_17] [i_12] [i_16]) : (((/* implicit */unsigned long long int) (~(arr_28 [i_0] [i_0] [i_0] [0U] [i_0] [i_0])))))))))));
                    arr_53 [i_0] [0] [0] [i_16] [i_17] |= ((max(((-(var_6))), (((/* implicit */unsigned long long int) var_3)))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((arr_51 [i_0]) ? (var_13) : (((/* implicit */int) var_12))))), ((~(arr_4 [(signed char)4] [(signed char)4])))))));
                    arr_54 [i_0] [i_12] [3LL] [i_0] = ((/* implicit */long long int) ((((unsigned long long int) arr_5 [i_0] [i_17])) << (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_17] [i_12])) || (((/* implicit */_Bool) arr_20 [i_17] [i_12] [i_16] [i_16])))))));
                    var_40 -= ((/* implicit */_Bool) ((signed char) ((((_Bool) var_4)) ? (max((var_15), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_26 [i_0])))))));
                }
                for (unsigned int i_18 = 1; i_18 < 20; i_18 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_19 = 2; i_19 < 20; i_19 += 2) 
                    {
                        arr_59 [i_0] [i_0] [i_0] [0LL] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_18] [i_16] [i_18 - 1] [i_19 - 2] [i_19 - 2] [i_18 - 1])) <= (((/* implicit */int) var_12))));
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((long long int) arr_31 [i_19] [i_19 + 1] [i_19 - 2] [i_19 + 1] [i_19 - 2] [i_19])))));
                        arr_60 [i_0] [i_12] [(unsigned short)2] [8U] [i_12] = ((/* implicit */unsigned char) arr_11 [i_19 - 1] [i_18 - 1] [i_19 - 1] [(signed char)20] [i_18 - 1]);
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17059))) >= (1317744845366445991ULL)));
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_2 [i_18 - 1]))))));
                    }
                    arr_61 [i_12] [8U] [18U] [i_18] = ((/* implicit */signed char) (-(max((((/* implicit */int) arr_24 [(signed char)17] [i_18 + 1] [i_18 + 1] [i_18 + 1] [(_Bool)1] [i_18 + 1] [(unsigned char)10])), (arr_14 [i_18] [i_12] [18U] [i_18] [i_12] [8U])))));
                }
                var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(var_1)))))) ? (((/* implicit */int) (!(arr_48 [i_16] [i_16] [9LL] [18U])))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_15 [i_0] [(unsigned short)13] [i_16] [i_12]))))))));
            }
            for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) /* same iter space */
            {
                var_45 = arr_47 [i_12] [i_12] [i_20] [i_0];
                var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (~(var_13))))));
            }
            var_47 += ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)213)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)64)) && (((/* implicit */_Bool) 3715372999U))))))));
            arr_65 [5U] [i_12] = ((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [20LL]);
        }
    }
    var_48 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_2)))));
}
