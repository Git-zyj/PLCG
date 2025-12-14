/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209142
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))), ((-(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_17 += ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)63))))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) : (arr_4 [i_0] [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >> (((max((var_11), (((/* implicit */unsigned int) (short)32741)))) - (2716013880U))))))));
                    var_18 = ((/* implicit */int) max((var_18), ((((+(((/* implicit */int) min((var_9), (var_13)))))) >> (((((/* implicit */int) arr_2 [i_1] [i_1])) - (92)))))));
                    arr_7 [i_0] [i_1] [i_2 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) >> (((1432087970339616868ULL) - (1432087970339616855ULL)))))) ? (((/* implicit */int) min((var_10), (arr_2 [(signed char)12] [i_0])))) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))));
                    arr_8 [i_1] = ((/* implicit */short) (~((+(1023)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_10 [(short)14])))) % (((/* implicit */int) arr_12 [i_3] [i_3]))));
        arr_14 [i_3] = ((/* implicit */long long int) ((var_12) >> (((((/* implicit */int) ((signed char) arr_9 [i_3]))) + (40)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (short i_6 = 1; i_6 < 19; i_6 += 1) 
                {
                    {
                        arr_22 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_20 [i_5]))) ? (((((/* implicit */int) arr_21 [i_3] [i_4] [i_5] [i_3])) >> (((((/* implicit */int) arr_12 [i_4] [i_4])) - (44462))))) : ((-(((/* implicit */int) arr_21 [(signed char)11] [i_5] [i_4] [(_Bool)1]))))));
                        var_19 = ((/* implicit */int) var_15);
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_7])))))))));
        arr_25 [i_7] [i_7] = ((/* implicit */int) (~(((unsigned long long int) ((int) (_Bool)1)))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                {
                    arr_34 [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned int) arr_17 [i_7] [i_8] [i_9] [i_9]))) ? (((/* implicit */int) max((((/* implicit */signed char) var_9)), (arr_23 [i_7])))) : (((((/* implicit */int) var_5)) >> (((arr_30 [i_7] [i_8] [i_9] [i_7]) + (1705324186))))))) * ((~(((/* implicit */int) ((signed char) (unsigned char)36)))))));
                    arr_35 [i_8] [i_8] [i_9] = ((/* implicit */signed char) max((min((1468280708), (((/* implicit */int) (unsigned char)12)))), ((+(((/* implicit */int) var_13))))));
                    arr_36 [i_8] = ((/* implicit */unsigned long long int) ((-5) * (((/* implicit */int) (_Bool)1))));
                    arr_37 [i_7] [i_8] = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_7)))) ? (((var_9) ? (((/* implicit */unsigned long long int) arr_30 [i_7] [i_7] [i_8] [(short)2])) : (14039773230610592468ULL))) : (min((((/* implicit */unsigned long long int) arr_17 [i_7] [i_7] [i_8] [i_7])), (var_2))))), (((/* implicit */unsigned long long int) ((((((-14) * (((/* implicit */int) (short)4032)))) + (2147483647))) >> ((((~(arr_16 [i_8]))) - (1431470295U))))))));
                }
            } 
        } 
    }
    var_21 = (-((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)9942)))))));
    /* LoopNest 2 */
    for (unsigned char i_10 = 4; i_10 < 9; i_10 += 3) 
    {
        for (short i_11 = 1; i_11 < 10; i_11 += 3) 
        {
            {
                arr_42 [i_10] = ((/* implicit */signed char) arr_6 [i_10] [i_11]);
                arr_43 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-121)) + (138)))))))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) (short)32742))))) ? (min((((/* implicit */long long int) var_12)), (arr_28 [i_10] [i_10] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_26 [i_10] [i_11]))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            arr_51 [i_10] [i_11 - 1] [i_10] [(unsigned short)1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28810))) : (arr_39 [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_19 [i_13] [i_12] [i_11] [i_11] [(unsigned char)13]), (((/* implicit */unsigned long long int) (short)-4036))))) ? ((-(((/* implicit */int) arr_29 [i_10] [(unsigned char)6])))) : (((/* implicit */int) var_3)))))));
                            arr_52 [i_10] [i_10] [i_11] [i_11] [i_13] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 2)) : (arr_5 [i_10])))));
                        }
                    } 
                } 
                arr_53 [(unsigned short)4] [i_10] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((var_9) ? (((/* implicit */int) arr_9 [i_10])) : (((/* implicit */int) arr_31 [i_10]))))))) ? (((/* implicit */int) max((((/* implicit */short) arr_23 [i_11 - 1])), (var_1)))) : ((+(((/* implicit */int) arr_50 [i_10] [i_10] [i_10 - 2] [i_10]))))));
                var_22 *= arr_10 [i_10 + 1];
            }
        } 
    } 
}
