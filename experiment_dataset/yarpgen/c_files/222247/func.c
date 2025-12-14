/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222247
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) && (((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2 + 2] [i_0]))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))));
                    var_15 = ((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2] [i_2]);
                    var_16 ^= ((/* implicit */unsigned short) (~(arr_4 [i_0 + 1] [(unsigned char)4] [i_1 - 1] [i_2 + 1])));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_3 [6U])) + (((/* implicit */int) arr_3 [0]))))));
    }
    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
    {
        arr_11 [(unsigned short)4] = ((/* implicit */short) min((((/* implicit */int) max((arr_8 [i_3 + 2] [i_3 - 2]), (arr_8 [i_3 + 2] [i_3 - 2])))), (((var_13) + (((/* implicit */int) arr_8 [i_3 + 2] [i_3 - 2]))))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_13 [20U] [i_4])), (max((540544491), (-540544505)))));
            arr_17 [i_3 + 1] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3 + 1] [i_3 - 1])) && (((/* implicit */_Bool) arr_14 [i_3] [i_3 - 1] [i_3 + 1])))))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        arr_24 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 2])) * (((((/* implicit */int) arr_22 [i_3] [i_5] [i_5])) | (((/* implicit */int) max((arr_21 [i_6] [i_5] [(unsigned short)7] [(unsigned short)7]), (((/* implicit */unsigned short) (signed char)-30)))))))));
                        arr_25 [i_5] [8U] [i_5] [i_5] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) <= (3198035335U))))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_28 [i_5] [i_5] [i_5] [i_4] [i_7] = ((/* implicit */short) ((int) 2222119823U));
                            arr_29 [i_5] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_3] [i_4])), (((((/* implicit */_Bool) (unsigned short)5460)) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) -1))))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_27 [i_3] [i_6] [i_5] [(short)18] [i_7] [i_3] [i_6])) && (((/* implicit */_Bool) arr_14 [i_4] [i_6] [i_6]))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((34122464) | (((/* implicit */int) (signed char)-106))));
                            var_19 &= arr_26 [i_3] [(short)2] [i_5] [i_6] [9];
                        }
                        for (unsigned int i_9 = 3; i_9 < 23; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_26 [i_3 - 1] [i_9 + 1] [i_9 + 1] [i_6] [i_9 + 1])) - (((/* implicit */int) arr_26 [i_3 - 1] [i_9 - 2] [i_3] [i_5] [i_9 - 2])))) + (((/* implicit */int) arr_26 [i_3 - 2] [i_9 + 1] [i_5] [i_6] [i_9]))));
                            var_21 = ((/* implicit */short) 13772296838241136499ULL);
                            arr_35 [i_5] [i_6] [i_6] [i_6] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9] [i_6] [i_3] [i_3] [i_3]))) + (2222119805U))))));
                            var_22 = ((/* implicit */int) var_0);
                        }
                    }
                } 
            } 
            var_23 = ((((/* implicit */int) arr_12 [i_3] [i_3 + 2] [i_4])) >= (((/* implicit */int) arr_12 [i_4] [i_3 + 2] [18ULL])));
        }
        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            arr_39 [i_10] [i_10] [i_3] = ((/* implicit */_Bool) (-((((+(var_9))) - (((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 2]))))));
            arr_40 [i_10] [i_10] = ((/* implicit */short) ((int) -540544522));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) -660608945))));
        }
        var_25 = ((/* implicit */unsigned int) var_5);
    }
    var_26 = var_2;
}
