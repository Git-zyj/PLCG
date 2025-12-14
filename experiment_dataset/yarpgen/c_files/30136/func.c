/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30136
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) 1119765292);
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (short)-30516)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (280157616) : (var_14))))) & (((/* implicit */int) arr_0 [i_0 + 3] [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) min((min((var_8), (((/* implicit */unsigned short) arr_2 [i_1])))), (((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)117)), (arr_7 [i_0] [i_3]))))))) >> (((((/* implicit */int) (signed char)41)) - (19)))));
                            arr_11 [i_3] = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) arr_6 [(signed char)6] [(signed char)6] [(signed char)6])) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (signed char)41)))), (((/* implicit */int) arr_2 [i_3]))))));
                        }
                    } 
                } 
                var_19 = (+(((/* implicit */int) arr_10 [i_0] [i_1] [(short)0])));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_1 [i_4]))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_4]))) : (((((/* implicit */int) arr_1 [i_4])) & (((/* implicit */int) arr_1 [i_4]))))));
        var_21 += min(((+(((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_7)))))), (((/* implicit */int) ((signed char) (signed char)-42))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
    {
        var_22 = ((((/* implicit */_Bool) arr_16 [i_5 + 2])) ? (((/* implicit */int) arr_15 [i_5 + 1])) : (((/* implicit */int) arr_16 [i_5 - 1])));
        var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5])) && (((/* implicit */_Bool) arr_16 [i_5 - 1])))))));
        arr_17 [i_5 + 1] = ((/* implicit */short) arr_15 [i_5]);
        var_24 = ((/* implicit */signed char) ((unsigned char) arr_15 [i_5 - 1]));
        var_25 += ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_5 + 2])) - (-638951121)));
    }
    /* vectorizable */
    for (unsigned char i_6 = 1; i_6 < 23; i_6 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */short) (signed char)41);
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)40))))) + (((/* implicit */int) ((((/* implicit */int) arr_15 [i_6])) < (((/* implicit */int) arr_15 [i_6])))))));
    }
    for (unsigned char i_7 = 1; i_7 < 23; i_7 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_7])) ? (((((/* implicit */_Bool) arr_22 [i_7 + 1] [(unsigned char)4])) ? (var_3) : (((/* implicit */int) ((unsigned short) arr_19 [i_7]))))) : (((/* implicit */int) arr_15 [i_7])))))));
        arr_24 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_7]))));
    }
    var_29 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)53));
    /* LoopNest 3 */
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        for (short i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        arr_35 [(unsigned char)8] [i_9] [i_8] [i_8] [11LL] [i_9] = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_10] [i_11 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((int) arr_37 [i_8] [i_10] [i_8] [i_11 + 1] [i_8] [i_11]));
                            arr_38 [i_8] [i_9] [i_10] [i_8] [i_8] [i_10] [i_8] = ((/* implicit */int) (unsigned char)232);
                            var_31 = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_8] [i_9] [i_10] [i_11]))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            var_32 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [(short)0] [(unsigned char)2] [i_10] [i_11 + 1]))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_8] [i_10] [i_11 + 1] [i_11] [i_11] [i_11 - 1])) >> (((((/* implicit */int) arr_2 [i_11 + 1])) - (45)))));
                            var_34 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_33 [i_10] [i_9] [i_10] [i_11 - 1]))));
                            var_35 = (+(((/* implicit */int) arr_32 [i_8] [i_9] [i_8] [i_11 - 1] [i_13])));
                        }
                    }
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (+(1065413014))))));
                    arr_41 [i_8] [i_9] = ((/* implicit */short) ((int) (~(arr_19 [i_8]))));
                }
            } 
        } 
    } 
}
