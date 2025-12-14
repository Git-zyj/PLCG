/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247995
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
    var_11 = ((/* implicit */signed char) (-(min((max((5U), (((/* implicit */unsigned int) (unsigned short)65526)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)64)), (var_2))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526)))));
        var_12 = ((/* implicit */unsigned short) var_7);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_13 ^= ((/* implicit */signed char) arr_6 [i_1]);
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    {
                        arr_15 [i_4] [i_3] [i_4] = var_4;
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (((((/* implicit */_Bool) (signed char)64)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88))))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) arr_18 [i_5] [i_5]))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                {
                    arr_24 [i_6] = ((/* implicit */_Bool) 1179967531);
                    var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) (signed char)67)) ? (1157628947) : (((/* implicit */int) arr_21 [i_7 + 1]))))));
                    arr_25 [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_22 [i_6] [i_7 + 1] [i_6] [i_6]))));
                    arr_26 [i_5] [i_6] [i_7] = (signed char)-1;
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_7 + 3])) ? (arr_20 [i_7 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7 + 3])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (short i_10 = 3; i_10 < 11; i_10 += 2) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-73)) ? (arr_23 [i_8] [i_8] [i_10] [i_10 - 1]) : (arr_23 [i_8] [i_8] [i_10] [i_10 - 2]))), (min((arr_23 [i_8] [i_8] [i_10] [i_10 + 2]), (arr_23 [i_8] [i_8] [i_8] [i_10 - 2])))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 12; i_12 += 1) 
                        {
                            {
                                arr_43 [i_8] [i_8] [i_8] [i_11] [i_12 - 3] &= ((/* implicit */short) -8699888213747730814LL);
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_29 [i_8] [i_9])))) || (((1179967531) != (((/* implicit */int) arr_17 [i_12])))))))) - (((5964717473191441839LL) ^ (6022189734491584803LL)))));
                                arr_44 [i_11] = ((/* implicit */unsigned char) (signed char)66);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            {
                                arr_49 [i_13] [i_13] [i_8] [i_9] [i_8] = ((/* implicit */int) var_6);
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)2)), (7968577837067624924ULL)))))))));
                                arr_50 [i_8] [i_8] = ((/* implicit */signed char) min((min((arr_34 [i_14] [i_9] [i_9] [i_10 - 2]), (arr_34 [i_8] [i_10] [i_10 - 1] [i_10 - 3]))), (min((arr_34 [i_8] [i_8] [i_10] [i_10 + 1]), (arr_34 [i_8] [i_9] [i_8] [i_10 + 1])))));
                                var_20 = arr_36 [i_8] [i_8] [i_10];
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (-1971812439749360911LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (arr_41 [i_8] [i_9] [i_9] [i_10] [i_9] [i_8]))) & (((/* implicit */long long int) ((((/* implicit */int) max((arr_47 [i_10] [i_10] [i_10] [i_13] [i_10] [i_10]), ((short)0)))) & (((/* implicit */int) (signed char)-73))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) min((var_22), (min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_46 [i_8] [i_8] [i_10] [i_10])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) : ((+(arr_37 [i_8] [i_10])))))), (var_3)))));
                }
            } 
        } 
        arr_51 [i_8] [i_8] = ((/* implicit */unsigned short) max(((signed char)-62), ((signed char)-62)));
    }
}
