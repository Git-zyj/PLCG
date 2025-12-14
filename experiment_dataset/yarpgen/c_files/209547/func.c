/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209547
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
    var_20 = var_0;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_13);
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_0] [7] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((var_12) > (1198876886431153913ULL)));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((var_16) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_2)))) ? (((/* implicit */unsigned int) ((int) arr_7 [i_3] [i_1]))) : (arr_2 [i_3 - 1] [i_4])))))))));
                            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) > (0LL))))));
                        }
                        arr_14 [i_0] [(unsigned char)0] [i_2] [(_Bool)1] [i_0] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_0])))), (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (0ULL) : (var_12))))))));
                    }
                    for (short i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] [i_5 - 2] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
                        arr_18 [i_0] [i_0] [i_0] [11U] [(signed char)7] [i_0] = ((/* implicit */unsigned char) max((max(((+(var_6))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)25)), (var_9)))))), (((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) (unsigned short)28952))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            arr_24 [i_2] [i_1] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_4 [i_7] [i_1]))))) != (((/* implicit */int) var_5)))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)255))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_6)) : (var_13)))))))));
                            var_23 = ((/* implicit */unsigned long long int) max((arr_15 [i_6] [i_0] [i_0] [i_0 - 1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_2] [i_6] [i_7] [i_7])) && (((/* implicit */_Bool) var_11)))))));
                        }
                        for (short i_8 = 2; i_8 < 12; i_8 += 3) 
                        {
                            arr_27 [i_0] [i_0 - 1] [i_0] [i_0] [0U] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)39)) ? ((-(((/* implicit */int) var_11)))) : ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_6] [i_6]))))))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : ((-(arr_1 [i_1])))))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((arr_9 [i_2] [i_1] [i_2] [i_6]) < (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-12156))))) + (max((((/* implicit */unsigned long long int) var_5)), (var_12))))))))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((unsigned char) var_7)))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_19))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_0] [(short)12] [2ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_28 [i_0 - 1] [i_1] [i_0] [i_6] [i_6] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))))))));
                            arr_35 [i_10] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_15 [i_10] [i_0] [i_0] [i_0]);
                        }
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_5))));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_8))));
}
