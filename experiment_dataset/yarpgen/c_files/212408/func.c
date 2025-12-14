/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212408
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
    var_20 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_21 += ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_4 [i_1])))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min(((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))), ((~(((/* implicit */int) arr_2 [i_1] [i_0] [i_1])))))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) < (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) != (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_1 [i_0])))))))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) min((max((((/* implicit */short) arr_3 [i_1] [i_0] [i_1])), (arr_4 [i_1]))), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) != (((/* implicit */int) arr_4 [i_0])))))))), (min((((/* implicit */int) arr_3 [i_1] [(_Bool)1] [i_1])), (((((/* implicit */int) arr_3 [i_1] [(unsigned char)13] [(unsigned char)13])) * (((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) max((min((((((/* implicit */int) arr_2 [i_0] [i_1] [(short)7])) / (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])))), (((/* implicit */int) arr_0 [i_1]))));
                    var_24 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) arr_4 [i_1]))))));
                }
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                {
                    arr_12 [i_3] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) min((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_7 [i_3] [i_1] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((0U), (8U))))));
                                var_26 = ((min((17395089046556312082ULL), (((/* implicit */unsigned long long int) 4294967295U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_3] [i_0] [i_4] [i_5]))) + (arr_8 [i_0] [i_3] [(unsigned short)8] [i_1])))))))));
                                var_27 = ((/* implicit */unsigned char) max(((signed char)127), ((signed char)-82)));
                                var_28 = ((/* implicit */unsigned short) ((min((arr_16 [i_1] [i_3]), (arr_16 [i_0] [i_5]))) >> (((arr_16 [i_5 + 1] [i_5 - 1]) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) max((0U), (((/* implicit */unsigned int) (unsigned short)3996))));
                }
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) min((arr_19 [i_0] [i_1] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_6] [i_0])) != (((/* implicit */int) arr_7 [i_6] [i_1] [i_6] [i_6])))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [4] [i_6]))) - (arr_10 [i_0] [i_1] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_6] [i_1] [i_1] [(unsigned char)3])) != (((/* implicit */int) arr_2 [i_6] [i_1] [i_0])))))))) / ((~(arr_16 [i_6] [i_1])))));
                    var_32 = ((/* implicit */short) max((min((arr_16 [i_0] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_20 [i_6] [(short)5]))))))), (((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1] [i_6] [i_6]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1]))))))))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) var_8);
    var_34 = ((/* implicit */unsigned int) (-(((var_13) | (var_15)))));
    var_35 += ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_4))))))), (max((((((/* implicit */long long int) var_6)) & (var_8))), (((/* implicit */long long int) var_16))))));
}
