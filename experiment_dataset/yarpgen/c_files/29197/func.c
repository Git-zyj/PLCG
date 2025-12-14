/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29197
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
    var_19 = ((/* implicit */signed char) var_10);
    var_20 |= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)31671)), ((-((~(((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) arr_9 [(unsigned short)5] [i_4] [i_2] [(unsigned short)5] [i_4] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (arr_10 [i_0] [i_0] [i_0] [(unsigned short)7] [i_0] [i_0] [i_0])))))))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_0] &= ((/* implicit */unsigned long long int) (~((~(var_9)))));
                                var_22 = ((/* implicit */signed char) max((var_9), (((/* implicit */int) min((var_6), (((/* implicit */short) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_16 [i_2] [1] [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_1])) < (((/* implicit */int) (unsigned char)0))))), (arr_2 [i_0]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */int) arr_5 [i_0] [i_0]);
                            arr_21 [i_1] [i_0] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_0] [i_0] [i_0])) ? (var_12) : (((/* implicit */long long int) ((arr_11 [i_6] [i_2] [i_2] [i_2] [i_0]) << (((((/* implicit */int) var_11)) - (34))))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_5] [i_6])) ? ((~(((/* implicit */int) (unsigned short)20018)))) : ((~(((/* implicit */int) var_15)))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_1] [i_2] = arr_18 [i_0] [(unsigned short)4] [i_2] [i_2];
                            arr_25 [(signed char)9] [(short)7] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_1] [i_2] [i_5] [i_7])) ? (((((/* implicit */_Bool) var_10)) ? (arr_11 [i_0] [i_2] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (arr_8 [i_0] [i_1] [i_2] [i_1] [i_7])))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_2] [i_5] [i_7]))))) <= ((~(((/* implicit */int) (short)(-32767 - 1))))))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_8 = 2; i_8 < 6; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((arr_14 [i_1] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 2]) + (5631869463082310327LL)))));
                        arr_29 [i_2] [i_1] = ((/* implicit */long long int) arr_22 [i_8] [i_8] [i_8] [i_8 + 2] [i_8]);
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (unsigned char)214)))) : (((/* implicit */int) arr_5 [i_1] [i_2]))));
                        var_27 = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1]);
                        arr_30 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (var_1) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2] [i_1])))))));
                    }
                }
            } 
        } 
    } 
    var_28 &= ((/* implicit */unsigned short) var_7);
}
