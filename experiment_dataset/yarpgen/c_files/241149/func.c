/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241149
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 24; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3497752117U)) ? ((~(((/* implicit */int) (short)7498)))) : (arr_9 [i_0] [i_2 - 3] [i_2 + 1] [i_4] [i_4] [i_1] [i_4])));
                                arr_11 [i_0] [i_1] [i_2 - 3] [i_2 - 3] [i_4] = ((/* implicit */int) ((unsigned int) -3650630206796704655LL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (int i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((unsigned int) arr_9 [i_1] [i_2 + 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6]));
                                arr_17 [i_2 - 2] [i_6] = ((((/* implicit */_Bool) arr_5 [8U] [i_2 - 1] [i_2 - 1] [i_6])) ? (((/* implicit */int) arr_7 [i_6 - 1] [i_5] [i_2 + 1] [i_1])) : (((/* implicit */int) var_13)));
                                var_17 = ((/* implicit */long long int) (signed char)127);
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2 - 3] [i_6 + 1])) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1] [i_6 - 2] [i_6] [(unsigned short)5])) : (((/* implicit */int) arr_2 [i_2] [i_2 + 1]))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */signed char) var_4);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 740020322)) : (var_5)))))));
    /* LoopNest 2 */
    for (unsigned char i_7 = 4; i_7 < 24; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    arr_28 [i_9] [i_7] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_7 [i_7] [i_7] [i_8] [i_9])))))), (((unsigned long long int) var_8))));
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 4; i_10 < 23; i_10 += 3) 
                    {
                        arr_32 [i_7] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_7] [i_8] [i_9] [i_10] [i_7] [i_10])) ? (arr_21 [i_7] [i_9] [i_10]) : (((((/* implicit */int) arr_12 [i_7 - 1] [i_8 - 2] [i_10 - 3])) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))));
                        arr_33 [24] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) & (((long long int) (unsigned short)63620)))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_8] [i_9])))))));
                        var_21 = ((/* implicit */int) arr_2 [i_7] [i_8]);
                    }
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_22 = ((/* implicit */short) var_5);
                        var_23 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_12 [i_7] [i_7 + 1] [i_7 - 3]), (((/* implicit */unsigned char) min(((signed char)-100), ((signed char)-50))))))), (max((((/* implicit */int) ((unsigned char) arr_23 [i_9] [i_7]))), ((~(((/* implicit */int) var_9))))))));
                        arr_36 [i_7] [i_7] [(unsigned char)6] [i_7] [i_11] [i_7] = arr_30 [i_7] [i_7] [i_7 + 1] [i_7] [i_7] [i_11];
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        arr_39 [i_7] [i_8] [i_9] [i_12] = (unsigned char)162;
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        var_25 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (4941875561193913716LL));
                        arr_43 [i_7] [i_7] [i_7] [i_13] [i_8 - 1] [i_7] = arr_6 [i_13] [i_13] [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_7 + 1];
                    }
                    arr_44 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) (~(min(((+(((/* implicit */int) arr_29 [i_7] [(unsigned short)10] [i_7] [i_9])))), (var_4)))));
                    arr_45 [i_7] [i_9] [i_7] [i_9] = ((/* implicit */unsigned short) var_0);
                }
                arr_46 [i_7] = ((/* implicit */long long int) (unsigned short)58123);
                var_26 = ((/* implicit */unsigned short) ((arr_16 [i_7 - 4] [i_7 - 3] [i_7] [i_7] [i_7 - 4] [i_7 - 4]) ^ (arr_6 [i_7 + 1] [i_7 - 3] [i_7] [i_7] [i_7] [i_7])));
            }
        } 
    } 
}
