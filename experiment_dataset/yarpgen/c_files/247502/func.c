/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247502
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (arr_4 [i_1 - 1] [i_1 - 1] [(unsigned char)15])));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_7))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2 - 2] [2ULL] [2ULL] [i_1 + 1]))))), (arr_0 [i_1 - 1] [i_1 + 1]))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_0]);
                    arr_12 [i_0] [i_3] [i_3] [i_1] = arr_5 [(unsigned short)15] [i_0];
                    var_20 *= ((/* implicit */unsigned char) (-(arr_2 [i_0])));
                    var_21 = ((/* implicit */unsigned char) (~(arr_6 [i_0] [i_3] [i_3] [i_0])));
                    var_22 = arr_5 [i_3 - 2] [i_1 + 1];
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    arr_15 [i_4] [(unsigned char)5] [i_1] [17ULL] = arr_11 [i_4] [i_4] [i_4];
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_23 = min((arr_11 [i_0] [(unsigned short)3] [i_4]), (arr_16 [i_0] [i_1] [i_4] [i_0]));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) arr_0 [i_4] [(unsigned short)4])))))))));
                                var_25 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_26 &= ((/* implicit */unsigned char) arr_6 [i_1 - 1] [i_1 - 1] [i_7] [i_1 + 1]);
                    var_27 = ((/* implicit */unsigned short) min((var_27), (arr_1 [i_1 - 1])));
                    arr_23 [i_1] [i_1] [6ULL] [6ULL] = ((/* implicit */unsigned long long int) var_13);
                }
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned char i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) arr_6 [i_9] [i_8] [i_8] [i_0]);
                            var_29 = ((/* implicit */unsigned char) var_13);
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((arr_6 [i_1] [(unsigned short)0] [i_8] [i_9]), ((+(arr_6 [i_1 + 1] [i_1 + 1] [i_8] [i_9 - 3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) var_6);
    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_14))));
}
