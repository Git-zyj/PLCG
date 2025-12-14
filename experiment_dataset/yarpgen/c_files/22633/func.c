/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22633
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
    var_12 = ((/* implicit */signed char) (+(var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_0 + 1]) & (arr_2 [i_0 - 1])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [(unsigned short)1] = ((/* implicit */unsigned long long int) (unsigned char)201);
                    /* LoopSeq 4 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        arr_13 [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2325838286U)) ? (arr_6 [i_1] [i_3]) : (arr_6 [i_1] [i_2])));
                        arr_14 [i_2] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_3 - 1]))) : (3871233042U)));
                    }
                    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned char) (((((_Bool)0) && (((/* implicit */_Bool) (unsigned char)236)))) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        arr_17 [i_0] [i_1] [i_2] [i_4] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)32)) >= (((/* implicit */int) var_2)))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_5]))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_1] [i_0] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [i_0 - 3] [i_1])));
                        arr_21 [i_5] = (((_Bool)1) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                    }
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_26 [i_1] [i_6] [i_1] [i_6] = ((/* implicit */signed char) (+(127LL)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            arr_29 [i_6] [i_1] [i_1] [i_6] [i_7 - 2] [i_6] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) 2325838286U)) ^ (1120228317286274478LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            arr_30 [i_0] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */long long int) (-(((unsigned int) arr_2 [i_6]))));
                            arr_31 [i_0 - 3] [i_0 - 3] [i_2] [i_6] [i_7] [i_1] [i_0] = ((/* implicit */long long int) ((arr_1 [i_6] [i_7 + 1]) - (arr_1 [i_0 - 1] [i_7 + 3])));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_16 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_22 [(unsigned char)20] [(unsigned char)20])))));
                            var_17 = ((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_1] [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 3] [i_1]))) : (var_7)));
                            var_18 = (~(arr_7 [i_6] [i_8]));
                        }
                        for (int i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            var_19 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_2] [i_6] [i_9])) ? (423868641) : (((/* implicit */int) (unsigned char)185))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_5 [i_0] [i_6] [i_9])) - (7291362495514794332LL)));
                            var_21 = ((/* implicit */int) (signed char)(-127 - 1));
                            arr_36 [i_0] [i_1] [i_0] [i_6] [i_9 + 2] = ((/* implicit */int) var_1);
                        }
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) * (1478913871U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)206)))))));
                    }
                    /* LoopSeq 4 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_23 = arr_4 [i_0];
                        arr_40 [i_0] [i_1] [i_2] [i_10] = ((/* implicit */_Bool) 890428999);
                        arr_41 [i_10] [i_1] [(unsigned char)15] [i_10] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)65535)))) && (var_6)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_44 [i_11] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-33)))) * (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_11]))) : (arr_2 [i_2])))));
                        var_24 = (+(8192211402400150700LL));
                        var_25 = ((/* implicit */long long int) 423868641);
                        arr_45 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) ((short) arr_33 [i_0] [i_1] [i_2]))) : ((~(arr_10 [i_0])))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) var_2);
                        arr_48 [i_0] [i_1] [i_2] [i_12] = ((/* implicit */unsigned int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 3] [i_0 - 3])))));
                        arr_49 [i_0] [i_1] [i_2] [i_12] [i_2] = ((/* implicit */short) arr_23 [i_0] [i_0] [i_2] [i_12]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_53 [i_0] [i_1] [i_2] [i_13] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) - (2325838286U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0] [i_13]))) : (var_9)));
                        var_27 = ((/* implicit */int) arr_43 [i_0] [i_1] [i_0 - 1] [i_13]);
                        arr_54 [i_13] = ((/* implicit */short) ((long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1)))));
                        var_28 &= 0ULL;
                        arr_55 [i_0] [i_1] [i_0] [i_13] [i_13] = arr_4 [i_13];
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_14 = 1; i_14 < 21; i_14 += 4) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                arr_63 [(short)10] [i_15] = max((((((/* implicit */_Bool) arr_39 [i_14] [i_15] [i_15] [i_14] [i_14 + 1] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_14] [i_15] [i_15]))) : (arr_35 [i_14] [i_15] [i_15] [i_15] [i_14]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_14] [i_15] [i_14] [i_14 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_46 [12LL] [12LL] [i_15] [i_14 - 1])))));
                arr_64 [i_15] = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) (short)-29339)) && (((/* implicit */_Bool) (unsigned char)201))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32707)))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) 9155194228364268097ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))), (min((5754214780824325883LL), (((/* implicit */long long int) (unsigned char)65)))))))))));
}
