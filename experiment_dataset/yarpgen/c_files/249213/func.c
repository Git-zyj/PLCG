/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249213
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((unsigned long long int) arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2 + 3]));
                                var_15 = ((/* implicit */signed char) ((_Bool) (-(arr_10 [i_1 - 1] [i_2] [i_2 + 1] [i_2 - 2] [i_2 - 1]))));
                                var_16 = max((((/* implicit */unsigned int) min((arr_5 [i_1 - 1] [i_1]), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1 - 1] [i_1] [i_2 + 1] [i_2] [i_2 + 2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29177))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2])))))))), (var_2)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_5] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_6] [i_7] [i_7]))) != (var_6)))), (var_12))))) & (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_7] [i_6] [i_7] [i_7] [i_5])))))));
                                arr_25 [i_0] [i_1] [(_Bool)1] [i_5] [i_6] [i_7] |= ((/* implicit */unsigned int) arr_16 [i_1 - 1] [12ULL] [i_1 - 1] [i_1 - 1]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_33 [i_0] [(unsigned char)11] [i_8] [i_8] [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_9] [i_9] [8U])))), (((/* implicit */int) (short)-4243))))) ? (((/* implicit */unsigned long long int) var_3)) : (min(((-(arr_28 [i_1] [i_9]))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)7126)), (min((((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) arr_34 [i_0] [i_1 - 1] [i_11]))))));
                            arr_39 [i_0] [i_1 - 1] [i_11] [i_11] [(short)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-1487775659) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29189)) ? (((/* implicit */int) (unsigned short)36364)) : (((/* implicit */int) (unsigned short)63053))))) : (arr_22 [i_0])))) ? (((((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_11] [i_1])))) ? (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (762521966U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (var_3)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_13 = 2; i_13 < 13; i_13 += 3) 
    {
        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 1; i_16 < 16; i_16 += 1) 
                    {
                        for (int i_17 = 4; i_17 < 14; i_17 += 3) 
                        {
                            {
                                arr_52 [i_13] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)36350)))), (((((/* implicit */int) (unsigned short)65516)) - (((/* implicit */int) (unsigned short)58419)))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_13 + 1] [i_13] [i_13])) ? (((/* implicit */int) arr_38 [i_13] [i_14] [i_16] [i_13])) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_5))))))));
                                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(var_3)))), (((((/* implicit */unsigned long long int) -1412299561)) ^ (14950261118728804321ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 4) 
                    {
                        for (short i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            {
                                arr_57 [9] [i_14] [(short)5] [i_13] [i_19] = ((/* implicit */int) arr_22 [i_13]);
                                arr_58 [i_18] [i_14] [i_19] [i_13 + 4] [i_19] [i_15 + 1] &= ((/* implicit */unsigned int) min((arr_35 [i_19] [i_18] [i_15] [i_13]), (min(((unsigned char)222), (var_7)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
