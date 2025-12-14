/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207924
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_18 += ((/* implicit */signed char) var_7);
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned char)86);
        arr_4 [i_0] [i_0] = min((((arr_0 [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) var_3))))), (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))));
    }
    for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_4)) / (((/* implicit */int) arr_5 [i_1 + 1])))), (((/* implicit */int) (!(var_4))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_5 = 3; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) arr_10 [i_5] [i_4] [i_4])) : (((/* implicit */int) (unsigned char)84)))) < (((/* implicit */int) var_11)))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_9))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_17))));
                            arr_17 [i_1 + 1] [i_2 + 2] [i_2 + 2] [i_4] [(short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (unsigned char)176)) : (var_2)));
                            var_23 = ((/* implicit */unsigned short) arr_12 [i_1] [i_4] [i_4]);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 3; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] [i_6 - 1] [i_4] [i_6] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1 + 1])) + (((/* implicit */int) (short)32465))));
                            var_24 += ((/* implicit */signed char) arr_16 [i_6] [i_6] [i_1 + 1] [i_1 + 1]);
                            var_25 ^= ((/* implicit */long long int) arr_13 [i_6 + 1]);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_11 [i_1 - 2] [i_3]))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 3; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            arr_23 [i_7] [(signed char)9] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_18 [i_2 + 1] [i_4] [i_7] [i_7 - 3] [i_7]))));
                            arr_24 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_7 - 3] [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7 - 3] [i_7 - 2])) != (((/* implicit */int) (!(var_8))))));
                            arr_25 [i_1 + 2] [(short)16] [i_7] [i_1 + 2] = ((/* implicit */long long int) (signed char)-30);
                        }
                        arr_26 [i_1] [i_1] [i_1] [(unsigned short)20] [i_3] [(unsigned short)20] = ((/* implicit */unsigned short) ((signed char) var_10));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-113)))))));
        var_28 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_16 [(short)19] [i_1 - 1] [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) (unsigned char)3)))))));
    }
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_4))));
    var_30 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) max((var_9), (((/* implicit */signed char) var_8)))))), (((((/* implicit */int) min(((short)32767), (((/* implicit */short) var_1))))) - ((+(((/* implicit */int) (unsigned char)80))))))));
}
