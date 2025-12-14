/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22346
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
    var_15 |= ((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) (-((+(((/* implicit */int) var_8)))))))));
    var_16 -= ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) -3795084475672333767LL);
        var_18 -= ((/* implicit */long long int) ((arr_0 [i_0]) == (arr_0 [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_0 [i_1]))));
        arr_6 [(unsigned char)10] = ((/* implicit */_Bool) -7733018498090545150LL);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_2] [i_2] [(short)12] = ((/* implicit */short) arr_3 [i_3 - 1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        arr_16 [(unsigned char)9] [i_2] [i_3] [i_4] [i_3] [(unsigned char)9] = ((var_14) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 - 2] [i_4 - 1] [i_3] [i_4 + 1]))));
                        var_20 &= ((/* implicit */long long int) (unsigned char)140);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 3; i_5 < 12; i_5 += 1) 
                        {
                            arr_20 [(signed char)6] [(signed char)6] [i_4] [i_3] [i_3 + 1] [i_4 - 1] [i_5 + 1] = ((/* implicit */_Bool) ((arr_5 [i_3 - 2]) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 2] [i_3 + 3] [i_4 + 1] [i_5 - 2])))));
                            arr_21 [i_5 - 2] [i_4] [i_4] [i_2] [i_1] = ((((/* implicit */_Bool) arr_17 [i_3 - 2])) && (((/* implicit */_Bool) var_10)));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) var_10))))))));
                        }
                    }
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                }
            } 
        } 
        var_23 += ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) (((-(arr_5 [i_6]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94)))));
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 12; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) 1580535243482681873LL))) : (((/* implicit */int) arr_17 [i_7 - 2]))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        arr_34 [i_7] [i_8] [i_8] = ((/* implicit */long long int) (unsigned char)0);
                        var_26 += ((/* implicit */short) (-(((/* implicit */int) var_1))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
                        {
                            var_27 -= ((/* implicit */_Bool) ((unsigned char) arr_5 [i_6]));
                            var_28 = ((((/* implicit */int) arr_32 [i_7 - 1] [i_7 + 1] [i_9 + 2] [i_9 + 1])) > (((/* implicit */int) arr_32 [i_7 - 2] [i_7 - 2] [(short)9] [i_9 + 2])));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_11 [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
                            arr_37 [i_10] [(short)12] [(short)12] [i_7 - 2] [(unsigned char)6] &= ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_7 - 2])) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_31 [6LL] [i_9 - 1] [6LL])) : (((/* implicit */int) arr_30 [i_6] [7LL] [i_8]))))));
                        }
                        arr_38 [i_6] [i_8] [i_8] [(signed char)9] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_7 - 1] [i_7 - 1]))));
                    }
                }
            } 
        } 
        arr_39 [i_6] = ((/* implicit */signed char) arr_4 [i_6]);
    }
    var_30 = ((/* implicit */_Bool) var_7);
    var_31 -= ((/* implicit */long long int) (unsigned char)201);
}
