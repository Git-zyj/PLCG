/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201730
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(arr_2 [i_0] [i_0] [i_1 - 3]))) : (((/* implicit */int) (signed char)-1)))))));
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) 453757645))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) (~(((/* implicit */int) max((arr_8 [i_0] [i_1 - 3] [i_0] [(signed char)3] [i_1] [i_0]), (((/* implicit */unsigned char) ((arr_1 [i_1]) >= (((/* implicit */int) (unsigned char)60))))))))));
                            var_13 = ((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (short)-18380)));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */short) max((((/* implicit */int) ((arr_4 [i_1 + 1] [i_1] [0ULL] [i_1 - 1]) == (arr_4 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 2])))), (((((/* implicit */_Bool) arr_9 [i_1 - 3] [0U] [i_1] [(unsigned char)11] [0] [i_1])) ? (arr_4 [(signed char)3] [i_0] [(signed char)9] [(signed char)3]) : (arr_2 [i_1] [(unsigned char)12] [i_1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    var_15 -= ((/* implicit */signed char) (~(((708213524U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                    var_16 = (~(((((/* implicit */int) arr_14 [i_5])) & (((/* implicit */int) ((((/* implicit */int) (short)-521)) < (((/* implicit */int) arr_21 [9] [i_5] [13] [(unsigned short)11]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        arr_24 [(short)11] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) (~(13163448753788396246ULL)));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)13961)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (12710668854545344729ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_5]))) : (var_9)))))))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_7))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_22 [i_7]))));
                    }
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned int) var_3);
}
