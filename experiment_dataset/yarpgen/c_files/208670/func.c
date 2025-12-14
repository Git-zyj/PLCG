/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208670
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_0] [i_3 - 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_9 [i_3 + 2] [i_3 - 1] [i_3] [i_2 + 1] [i_2]) - (arr_9 [i_3 + 3] [i_3 - 1] [i_2] [i_2 - 1] [i_0])))), ((-((-(arr_6 [16U] [16U])))))));
                            var_12 &= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8277))));
                            var_13 = ((/* implicit */signed char) max((arr_9 [(short)5] [i_2 - 2] [i_2 - 2] [i_3 + 2] [i_0]), ((+(arr_9 [i_0] [i_2 - 2] [2LL] [i_3 + 2] [i_3])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) arr_7 [i_0]);
                        var_15 = (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (unsigned char)214)))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_16 = ((signed char) var_11);
                        arr_20 [i_4] [i_1] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_4 - 2] [i_4 - 2] [i_4])) ? (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_12 [i_4 + 2] [i_4 + 1] [i_4]))));
                        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) arr_18 [i_4] [(signed char)9] [(signed char)9] [i_4 - 1] [10])) ? (((/* implicit */int) arr_5 [i_4 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_6] [i_4] [i_6] [i_1] [i_6])) && (var_9))))))));
                        var_18 = ((/* implicit */short) (~((+(arr_6 [i_6] [i_0])))));
                    }
                    arr_21 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_0] [i_0] [(signed char)8]);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_27 [i_8] [i_7] [i_4] [i_4] [i_1] [i_0] = (i_4 % 2 == 0) ? (((/* implicit */long long int) ((var_3) | (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_4 + 2])) + (2147483647))) << (((arr_16 [i_4]) - (354889094))))))))) : (((/* implicit */long long int) ((var_3) | (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_4 + 2])) + (2147483647))) << (((((((arr_16 [i_4]) - (354889094))) + (1030256133))) - (12)))))))));
                                var_19 = ((/* implicit */unsigned short) arr_9 [(unsigned short)13] [i_7] [i_7] [i_7 - 1] [i_8]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [4] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)127)) : (var_11))))))) ? (((((/* implicit */long long int) (~(2198090516U)))) & (-3040994055472923067LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_4 + 1])) : (((/* implicit */int) arr_0 [i_4 + 1])))))));
                }
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_21 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))))));
                    var_22 &= ((/* implicit */unsigned long long int) arr_18 [(signed char)11] [9LL] [i_0] [i_9] [i_9]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 1) 
                    {
                        arr_33 [i_0] [(signed char)2] [i_9] [i_10] = ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_9) ? (var_11) : (arr_28 [(unsigned char)8] [(signed char)3] [i_0])))) != (((((/* implicit */_Bool) arr_14 [i_0] [i_10] [i_1] [i_9] [i_10] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_10])) : (var_8))))))));
                        var_23 = ((/* implicit */int) max(((+(arr_30 [i_10]))), (((/* implicit */long long int) ((arr_31 [i_10] [i_10 - 1] [i_10] [i_10 - 2]) - (((arr_19 [i_10]) ? (var_5) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_22 [4LL] [i_1] [i_9] [i_9])) ? (((/* implicit */long long int) -483887258)) : (arr_22 [i_0] [i_1] [i_9] [i_0]))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_9] [(short)2] [i_0] [i_1] [i_0] [i_1] [i_0])))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(min((arr_28 [i_0] [i_1] [i_9]), (((/* implicit */int) arr_5 [i_0]))))))) + (arr_6 [i_0] [i_1])));
                }
                for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    arr_36 [i_11] [i_11] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)228))))) : ((-(((/* implicit */int) (_Bool)1))))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_11] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])))) / (((arr_2 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11] [i_1] [i_11]))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_11])))))))));
                    arr_37 [(signed char)1] [i_1] [i_11] [i_11] = ((/* implicit */unsigned short) arr_19 [i_11]);
                }
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) var_2);
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)4057)) ? ((~(((/* implicit */int) (signed char)-102)))) : (((((/* implicit */_Bool) ((int) (unsigned short)1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */unsigned int) var_10)) != (var_3))))))));
    var_29 -= var_10;
    var_30 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65531)));
}
