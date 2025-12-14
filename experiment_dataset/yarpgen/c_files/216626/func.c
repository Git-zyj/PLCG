/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216626
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
    var_14 = ((/* implicit */_Bool) (signed char)-37);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                                arr_14 [i_0] [i_1 - 1] [i_2 - 2] [i_3] [i_4] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (unsigned char)212)) ? (-4063094565044157750LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_1]))))), (((/* implicit */long long int) (signed char)92)))), (((/* implicit */long long int) arr_0 [i_2]))));
                                var_16 = ((/* implicit */unsigned short) max(((((~(1032192LL))) & (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) max((((/* implicit */int) ((signed char) (_Bool)1))), ((-(((/* implicit */int) var_2)))))))));
                                arr_15 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (unsigned char)21);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) (unsigned short)65535);
                        var_18 = arr_16 [(signed char)4];
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) (_Bool)1))));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [(_Bool)0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (signed char)48))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_2 + 1] [i_7] [(unsigned short)7] [i_7] [i_7]));
                        var_21 = ((/* implicit */long long int) ((signed char) (unsigned short)6));
                    }
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                    {
                        var_22 -= (_Bool)1;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 4) 
                        {
                            arr_35 [i_0] [(signed char)1] [i_0] [i_0] [i_9] = ((/* implicit */signed char) -6955700109750737481LL);
                            arr_36 [i_1] [(unsigned short)7] [i_2] [i_8] [i_9] [i_1] = (_Bool)1;
                            arr_37 [i_0] [i_1 - 1] [i_2] [i_8] [i_9 - 2] = var_10;
                        }
                        var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2])) <= (((/* implicit */int) var_13)))) ? ((-(((/* implicit */int) arr_11 [i_2] [i_2] [i_2 + 3] [i_2 - 1] [i_2 - 1])))) : (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    var_24 = ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_0] [i_1 + 1] [i_1 + 2]))) + ((+(-9223372036854775803LL))));
                    arr_40 [i_0] [i_1] [i_10 - 1] = ((/* implicit */signed char) (_Bool)0);
                }
                for (unsigned char i_11 = 3; i_11 < 12; i_11 += 2) 
                {
                    arr_45 [i_11] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) arr_24 [i_1] [i_1] [i_11 - 2] [(unsigned short)3] [i_11 - 3] [(_Bool)1]))))));
                    var_25 -= ((/* implicit */signed char) (~(((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) <= (1125891316908032ULL))))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    arr_48 [i_0] [i_0] [i_12] = ((/* implicit */signed char) arr_30 [(unsigned char)12] [i_1] [i_1] [i_1] [i_12 + 1]);
                    arr_49 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_30 [i_0] [i_0] [i_1] [i_1] [i_0]))))));
                    arr_50 [i_12 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_20 [i_1] [i_1 + 2] [7LL] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_30 [i_0] [i_0] [i_0] [i_0] [(unsigned short)9])))) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) > (arr_28 [i_12] [i_12] [i_12]))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21719)) ^ (((/* implicit */int) (unsigned char)70))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 3; i_14 < 12; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1 + 1] [(unsigned char)4] [i_14] [i_15] [i_15])) ? (((((/* implicit */_Bool) -7737487030841955201LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)59966)))) : (((/* implicit */int) (signed char)25)))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [(unsigned char)2]))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (arr_27 [i_15] [i_14] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) /* same iter space */
                {
                    arr_63 [i_0] [i_16] = ((/* implicit */long long int) max((((/* implicit */int) arr_38 [i_0] [i_1 + 2] [i_0] [(_Bool)1])), ((~(((/* implicit */int) arr_54 [i_1 - 2] [i_1 - 1] [(unsigned char)0]))))));
                    arr_64 [4LL] [i_1 + 2] [i_16] = var_1;
                }
                arr_65 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)11823))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 21; i_19 += 3) 
                {
                    arr_74 [i_19] = arr_73 [i_17] [i_18] [i_18];
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 13LL))) - (((/* implicit */int) var_0)))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (signed char i_22 = 1; i_22 < 19; i_22 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) (signed char)37);
                                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) -9223372036854775803LL))));
                                arr_82 [i_17] [0LL] [i_21] [(_Bool)0] = ((unsigned short) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_78 [i_22] [i_22 + 1] [i_22 - 1] [i_22]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_89 [i_18] [i_18] [i_18] [19LL] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_5)))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_17] [i_17] [i_17] [i_17]))) - ((+((+(arr_80 [i_18] [i_17] [i_18] [i_17] [i_17])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
