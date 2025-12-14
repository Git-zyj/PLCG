/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51426
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((_Bool) (signed char)9)) ? (min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (9223372036854775807LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-119)), (var_8))))))) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (3152112097U));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = arr_7 [14] [i_1] [i_1];
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_3))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) 915359599U);
                    }
                } 
            } 
            arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]);
            var_18 = ((signed char) var_10);
        }
    }
    var_19 += max((((((((/* implicit */int) (signed char)-110)) == (((/* implicit */int) (_Bool)0)))) ? (max((var_0), (((/* implicit */int) (signed char)-100)))) : (((/* implicit */int) (unsigned short)46205)))), (((/* implicit */int) (signed char)118)));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) (-9223372036854775807LL - 1LL)))), (arr_18 [i_4] [i_5] [i_5])));
                arr_20 [7U] = ((/* implicit */int) min(((_Bool)1), ((_Bool)1)));
                arr_21 [i_5] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_16 [i_4]))) ? (((/* implicit */int) arr_17 [i_4])) : (var_6))) : (((/* implicit */int) ((unsigned short) min((var_11), (((/* implicit */unsigned int) (signed char)-1)))))));
                /* LoopSeq 4 */
                for (int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                {
                    arr_26 [i_4] [i_4] [i_6] = ((/* implicit */_Bool) arr_25 [22] [i_5] [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 24; i_8 += 3) 
                        {
                            {
                                arr_34 [i_6] [i_5] [i_6] [14] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9182908630254622628LL)) ? (arr_32 [i_6] [i_6] [20U] [i_7] [i_8]) : (((/* implicit */long long int) ((max(((_Bool)0), (arr_29 [i_4] [i_5] [i_6] [i_6] [i_6]))) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) ((signed char) (signed char)-25))))))));
                                var_21 -= ((/* implicit */int) ((((/* implicit */int) arr_23 [i_4] [12LL] [i_7] [4U])) >= (((/* implicit */int) arr_24 [24] [i_5] [6]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_37 [i_6] = ((/* implicit */unsigned char) arr_30 [i_4] [i_4]);
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            arr_41 [i_6] [i_5] [i_6] [i_6] [i_10] = (signed char)-72;
                            arr_42 [i_4] [i_6] [i_4] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_6])) ? (((/* implicit */int) ((unsigned char) arr_36 [i_4] [i_4] [i_6] [i_9] [i_4] [i_4]))) : (2147483647)))) ? (((/* implicit */unsigned int) arr_40 [12] [i_5] [i_6] [i_9] [i_10] [i_10])) : (max((((/* implicit */unsigned int) arr_16 [i_4])), (((unsigned int) var_14))))));
                            arr_43 [(signed char)7] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                {
                    var_22 = max((((/* implicit */int) ((signed char) arr_39 [i_4] [22] [22LL]))), (((int) 4223467484U)));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            {
                                var_23 = min((max((-9170185848725720773LL), (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) (_Bool)1)));
                                var_24 = ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                    var_25 *= ((/* implicit */unsigned int) ((signed char) max((arr_32 [16LL] [i_4] [i_5] [i_11] [i_11]), (((/* implicit */long long int) (signed char)-63)))));
                    arr_52 [8] = ((/* implicit */signed char) arr_25 [i_4] [i_5] [i_4] [i_5]);
                }
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [(signed char)16])));
                    var_27 ^= ((/* implicit */unsigned int) (signed char)-119);
                    var_28 = ((/* implicit */signed char) min((var_28), ((signed char)125)));
                    var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_4])) ? (arr_53 [i_4] [i_4] [i_14] [i_14]) : (((/* implicit */long long int) var_0))));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    arr_58 [(_Bool)1] [i_5] [i_15] [i_5] = arr_24 [2U] [i_5] [i_15];
                    var_30 -= ((/* implicit */unsigned int) arr_24 [i_15] [6U] [i_4]);
                }
            }
        } 
    } 
}
