/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213123
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
    var_14 |= ((/* implicit */signed char) ((((_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))) : (var_12)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_10 [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 159546953U)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (short)511))));
                    arr_11 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (unsigned char)247));
                    arr_12 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (max((arr_2 [i_1]), (arr_2 [i_1])))));
                    arr_13 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_0] = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2])), (arr_1 [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((_Bool) (+((~(((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) min((arr_7 [i_3] [i_3] [(_Bool)1]), (((/* implicit */unsigned long long int) (short)-17756))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_2)))))) : ((~(arr_7 [i_3] [i_3] [i_3]))))), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) (unsigned char)162)), (arr_14 [i_3] [i_3])))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            arr_28 [i_3] = (unsigned char)101;
                            arr_29 [i_3] [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)56)) ? (((((/* implicit */int) (unsigned short)6627)) * (((/* implicit */int) (signed char)-105)))) : (((((/* implicit */_Bool) (short)25421)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15865))))));
                            arr_30 [i_5] [i_5] [(signed char)9] [i_3] = ((/* implicit */unsigned short) var_1);
                            arr_31 [i_3] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (unsigned char)166)))))) ? ((-(arr_21 [(short)7] [i_6] [(signed char)2]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_26 [(unsigned char)5] [7U] [i_5] [i_6] [i_7]))))) - (min((arr_15 [i_4]), (arr_18 [i_4]))))))));
                            arr_32 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-14740))));
                        }
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            arr_35 [i_5] [i_6] [i_5] [i_4] [i_5] &= ((/* implicit */short) (-(((/* implicit */int) arr_26 [i_3] [i_4] [i_5] [i_6] [i_8]))));
                            arr_36 [i_5] [i_4] &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_15 [i_8]))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_39 [i_3] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_18 [i_5])))));
                            arr_40 [i_5] = ((/* implicit */unsigned long long int) ((long long int) 7U));
                            arr_41 [i_9] [i_6] [i_3] [7ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) % (4294967295U)));
                            arr_42 [i_6] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_5] [i_3])) < ((((-(((/* implicit */int) (short)-25421)))) - ((-(((/* implicit */int) (unsigned char)24))))))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_47 [i_3] [i_10] [i_10] [i_3] [i_10] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_10])) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_7)))));
                            arr_48 [(signed char)5] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */long long int) arr_25 [i_10] [(_Bool)1] [i_5] [i_5] [(_Bool)1] [i_4] [i_3]);
                        }
                        arr_49 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(_Bool)1] [(_Bool)1] [(unsigned char)1] [i_6] [5U]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_3] [7U] [i_5] [7U] [i_5] [i_5] [i_6]))))) : (((/* implicit */int) max((min((((/* implicit */short) (unsigned char)113)), (arr_5 [i_3] [i_6]))), (min(((short)-24416), (((/* implicit */short) arr_19 [i_3] [i_3])))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_52 [i_3] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_5] [i_6] [i_11]))));
                            arr_53 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))))), ((signed char)-4)));
                            arr_54 [i_3] [i_4] [i_4] [i_5] [i_4] [i_11] [(signed char)5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_5)), (arr_7 [i_5] [i_5] [i_4])));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            arr_58 [i_3] [i_6] [i_3] [(signed char)3] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_59 [i_3] [i_3] [i_5] [i_5] [i_6] [6ULL] = ((/* implicit */unsigned int) var_8);
                            arr_60 [i_3] [i_4] [i_3] [9ULL] [i_12] [i_3] = ((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8263))) : ((-9223372036854775807LL - 1LL)))));
                            arr_61 [i_6] [i_4] [i_6] [i_3] [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (arr_46 [i_3] [i_3] [i_5] [i_12 + 1] [i_12 + 1] [i_3]) : (arr_46 [0ULL] [i_4] [i_5] [i_5] [i_6] [i_12 + 1])));
                        }
                    }
                } 
            } 
        } 
    }
}
