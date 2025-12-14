/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45790
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
    var_15 = ((/* implicit */int) var_10);
    var_16 = ((/* implicit */unsigned long long int) ((int) var_3));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */int) var_14)) / (((/* implicit */int) var_8)))) <= (((/* implicit */int) var_9)))))));
                                var_18 ^= ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                                arr_16 [i_0] [i_2] [i_4] = ((/* implicit */long long int) min((((/* implicit */int) arr_9 [i_4] [i_1] [(_Bool)1] [i_3] [i_4])), (min((((/* implicit */int) arr_9 [i_4] [(short)12] [i_2] [7U] [i_0])), (arr_5 [i_4])))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] = ((/* implicit */short) arr_12 [i_0] [i_0] [i_1] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_1] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 1] [i_5]))));
                                arr_23 [i_0] [i_1 + 2] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((int) 9223372036854775807LL))) : (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) arr_10 [i_0] [i_1] [i_2] [i_5 - 1] [i_6])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))))))));
                                arr_24 [i_0] [i_2] [i_6] = ((/* implicit */short) arr_2 [i_1 - 1]);
                                arr_25 [(unsigned char)13] [i_1] [i_1] [i_5 - 1] [i_5] [i_6] = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) >= (var_4)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 3; i_8 < 13; i_8 += 4) 
        {
            for (signed char i_9 = 2; i_9 < 12; i_9 += 2) 
            {
                {
                    arr_39 [i_7] [i_8] [i_8] [(short)10] = max((arr_34 [3]), (var_0));
                    arr_40 [i_7] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : (arr_12 [i_9] [i_8] [i_8] [i_8] [i_7]))))) ? (((/* implicit */int) ((_Bool) arr_13 [i_7] [i_9 - 1] [i_9] [i_8] [7] [i_8 - 2]))) : (((int) min((((/* implicit */unsigned short) (short)7)), (var_5))))));
                }
            } 
        } 
        arr_41 [i_7] |= ((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [i_7] [i_7]);
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7] [i_7])))))))));
        arr_42 [i_7] [i_7] = ((((min((((/* implicit */int) var_6)), (arr_5 [i_7]))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_7]))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) var_8);
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                for (short i_13 = 2; i_13 < 13; i_13 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_45 [i_10] [i_13]))));
                        arr_56 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)54)), (5U)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_22 = ((unsigned int) (signed char)-15);
        arr_60 [i_14] [i_14] = ((/* implicit */unsigned short) arr_53 [(short)7] [i_14] [i_14]);
    }
}
