/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208964
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
    var_12 += ((((((/* implicit */_Bool) min(((unsigned short)39165), (((/* implicit */unsigned short) var_6))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)13295)), (var_11)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 14; i_2 += 2) 
                {
                    var_13 = min((min((((unsigned short) var_9)), (min(((unsigned short)13297), ((unsigned short)13297))))), (((/* implicit */unsigned short) ((arr_3 [i_2 - 2] [i_2 + 2]) && (((/* implicit */_Bool) (unsigned short)4258))))));
                    var_14 |= min((var_7), ((short)25118));
                    var_15 = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_2 + 3] [i_2 - 4]) <= (((/* implicit */int) ((_Bool) (-(var_5)))))));
                }
                var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_6 [i_0] [i_1]))))) * (max((var_5), (((/* implicit */unsigned long long int) arr_6 [(short)4] [i_1]))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_6 [i_1] [i_0]), (arr_6 [i_0] [i_0])))), (((((/* implicit */int) (unsigned short)52240)) * (((/* implicit */int) var_2))))));
                /* LoopNest 3 */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)25120)) + (min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_3] [i_3])))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-25119)) * (((/* implicit */int) (unsigned short)52241))))) ^ (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_5))), (((/* implicit */unsigned long long int) arr_9 [i_5] [i_1] [i_3] [(_Bool)1])))))))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) 9223372036854775807LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_19 [i_6] = ((/* implicit */short) (((-(3901612930894741324ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
        arr_20 [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)25118)) + (((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_2))));
        arr_23 [i_7] [i_7] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) * (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1620)) ? (((/* implicit */int) ((((/* implicit */int) (short)-25119)) > (((/* implicit */int) arr_22 [i_7]))))) : (((/* implicit */int) arr_18 [i_7]))));
        var_21 += ((int) var_2);
        var_22 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    arr_32 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (unsigned short)13315);
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) min(((signed char)-64), ((signed char)-27)))) : (((((/* implicit */_Bool) (short)19043)) ? (((/* implicit */int) (unsigned short)25362)) : (((/* implicit */int) (short)-149))))));
                    arr_33 [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_6))))) - (((((/* implicit */unsigned long long int) var_8)) * (var_5)))))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_12 [i_10] [i_9] [i_10] [i_9])))) : (min((((/* implicit */int) min(((unsigned short)13297), (((/* implicit */unsigned short) arr_8 [i_8] [i_9] [i_10] [(unsigned char)13]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_10]))))))));
                }
            } 
        } 
        arr_34 [i_8] = arr_9 [i_8] [i_8] [i_8] [i_8];
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_36 [i_11])) : (((/* implicit */int) (short)-32767))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            for (long long int i_13 = 1; i_13 < 23; i_13 += 2) 
            {
                {
                    arr_44 [i_13] [i_12] [i_11] |= ((/* implicit */long long int) arr_38 [i_11] [i_12] [i_13 + 1]);
                    var_25 |= ((/* implicit */short) ((int) (short)25145));
                    var_26 = ((/* implicit */unsigned long long int) var_4);
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [(short)5] [(unsigned short)19] [i_13 - 1] [i_13 + 1])) ? (((/* implicit */int) arr_40 [i_13] [i_13] [i_13 - 1])) : (((/* implicit */int) arr_40 [i_13] [i_13 - 1] [i_13]))));
                    arr_45 [i_13] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_13 - 1] [i_13 + 1])) ? (arr_43 [i_13 - 1] [i_13 + 1]) : (arr_43 [i_13 + 1] [i_13 + 1])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    {
                        arr_54 [i_11] [i_11] [i_15] [i_16] [i_11] = ((/* implicit */unsigned short) (short)25119);
                        arr_55 [10ULL] [i_14] [i_15] [5] = ((unsigned long long int) arr_42 [i_11] [i_14] [i_15] [i_16]);
                    }
                } 
            } 
        } 
    }
}
