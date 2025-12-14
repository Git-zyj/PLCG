/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239729
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = min((((/* implicit */int) arr_0 [i_0])), (max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (-3846305)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))))));
        var_10 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((-1058252323), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))) || (((/* implicit */_Bool) min((((short) 1058252323)), (((/* implicit */short) arr_1 [i_1])))))));
        var_12 = ((/* implicit */int) arr_5 [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((((unsigned int) arr_8 [i_1] [i_3] [i_5])), (max((arr_14 [i_1] [i_2] [i_1] [i_4] [i_4] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-126)) || (((/* implicit */_Bool) (short)-19597)))))))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_1] [i_2] [i_2] [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_3] [i_4] [i_2] [i_5]))))) ? (arr_10 [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [i_4] [i_5])) + (((/* implicit */int) (signed char)81))))) / (arr_5 [i_5])))))))));
                                arr_18 [i_1] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2401039423U)) ? (((/* implicit */int) (unsigned short)30857)) : (((/* implicit */int) arr_11 [i_4] [i_2] [i_2])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_2]))) == (max((-1729715551547775295LL), (((/* implicit */long long int) (unsigned short)0)))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) var_6)), (arr_5 [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_3 [i_3])))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_3] [i_1] [i_3] [i_1] [i_1])))))) + (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [i_2] [i_1] [i_2] [i_2])))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned short)4] [(unsigned short)4] [i_1])) & (((/* implicit */int) arr_11 [(short)9] [i_2] [i_3]))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) | (8380003407524224554LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (198933329))))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (int i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */short) (~(((/* implicit */int) max(((signed char)31), (arr_27 [i_6] [i_7] [i_8] [i_9]))))));
                            /* LoopSeq 2 */
                            for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                            {
                                arr_31 [i_6] [i_7] [i_8] [i_9] [i_9] [i_10] = ((((/* implicit */_Bool) min((arr_28 [i_9 + 1] [i_9 - 3] [i_9] [i_9] [i_9 - 2] [i_10]), (arr_28 [i_9 - 3] [i_9 - 1] [i_9] [i_10] [i_10] [i_10])))) ? (((/* implicit */int) max((arr_28 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_10] [i_10] [i_10]), (arr_28 [i_9 + 1] [i_9 - 3] [i_9] [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_9 - 1] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_28 [i_9 - 2] [i_9 - 3] [i_9 - 2] [i_9] [i_10] [i_9 - 2])) : (((/* implicit */int) arr_28 [i_9 + 1] [i_9 - 1] [i_10] [i_10] [i_10] [i_10])))));
                                var_18 = ((/* implicit */long long int) min((((((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_9 - 2] [i_9] [i_9])) / (((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_9 - 3] [i_9] [i_9])))), (((((/* implicit */_Bool) arr_30 [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_30 [i_9] [i_9 + 1] [i_9] [i_9 - 2] [i_9 + 1] [i_9])) : (((/* implicit */int) arr_30 [i_9] [i_9] [i_9] [i_9 - 1] [i_9] [i_9]))))));
                            }
                            /* vectorizable */
                            for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                                arr_35 [i_8] [i_8] [i_9] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_11] [i_9] [i_11] [i_9] [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_11] [i_9] [i_9] [i_9] [i_9 + 1]))) : (arr_32 [i_9 + 1] [i_11] [i_11] [i_9] [i_9] [i_9 + 1])));
                            }
                            arr_36 [i_9] [i_9] = ((/* implicit */long long int) ((((((/* implicit */int) arr_21 [i_6] [i_7] [i_8])) | (((/* implicit */int) max((((/* implicit */unsigned short) arr_30 [i_6] [i_6] [i_8] [i_8] [i_8] [i_7])), ((unsigned short)49142)))))) & (((/* implicit */int) min((arr_26 [i_7] [i_9 - 2]), (arr_26 [i_8] [i_8]))))));
                            var_20 = ((/* implicit */unsigned short) 9223372036854775807LL);
                        }
                    } 
                } 
                var_21 &= ((/* implicit */unsigned short) arr_19 [i_6]);
                arr_37 [i_6] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_26 [i_6] [i_7])))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-7008174237941806296LL), (((/* implicit */long long int) arr_34 [i_6] [i_7]))))) ? (min((((((/* implicit */_Bool) arr_20 [i_7])) ? (arr_29 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))))), (((/* implicit */unsigned int) arr_30 [i_6] [i_6] [i_6] [7LL] [i_7] [i_7])))) : (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) arr_25 [i_6] [i_6] [3LL])))))));
            }
        } 
    } 
    var_23 = var_0;
    var_24 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
}
