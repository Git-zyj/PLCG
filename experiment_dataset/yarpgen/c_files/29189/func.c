/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29189
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
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0 - 2])))))));
                var_15 = ((/* implicit */unsigned long long int) var_3);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */unsigned short) ((short) arr_3 [i_0] [(unsigned short)3]));
                                var_17 |= ((/* implicit */signed char) var_2);
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_16 [i_0 - 2] [(short)4] [(short)4] [i_3] [i_0 - 2]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_1 [i_2])))))));
                                var_19 = ((/* implicit */signed char) var_9);
                            }
                            var_20 &= var_2;
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                            {
                                var_21 += ((/* implicit */short) ((((/* implicit */int) var_9)) / (var_12)));
                                var_22 = ((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                            }
                            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)1661))));
                            var_24 = ((/* implicit */short) (unsigned short)63875);
                        }
                    } 
                } 
                var_25 = 106211722396084189ULL;
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [(unsigned char)2] [i_0] [i_0] [(unsigned char)0] [i_0 + 1])) ? (((/* implicit */int) arr_0 [(unsigned char)6])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1])))) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                                var_27 &= ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        var_28 = ((/* implicit */short) ((arr_30 [i_10]) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_30 [i_10]))))));
        var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 106211722396084179ULL)) && (((/* implicit */_Bool) (unsigned char)81)))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-42)), (arr_31 [i_10])))) : (((((/* implicit */int) (unsigned short)63860)) + (((/* implicit */int) (unsigned char)175))))));
        var_30 = ((/* implicit */short) max((arr_30 [i_10]), (((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_10])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) arr_32 [i_11]);
        var_32 = ((unsigned char) arr_34 [i_11]);
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 4; i_13 < 22; i_13 += 2) 
            {
                for (unsigned char i_14 = 4; i_14 < 24; i_14 += 1) 
                {
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(short)9])) ? (((/* implicit */int) arr_42 [i_14])) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) arr_40 [(short)14] [i_11] [(short)14] [i_13 + 2]))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) var_11))));
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_11]))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned long long int) var_11);
        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) arr_36 [i_15]))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)1661)) ? (((/* implicit */int) arr_36 [i_16])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) max((arr_36 [i_16]), (arr_36 [i_16]))))));
        var_39 = ((/* implicit */signed char) arr_38 [i_16] [i_16]);
        var_40 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) ((signed char) (unsigned char)181))) ? (3596912135U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    }
}
