/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45548
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
    var_13 = ((/* implicit */unsigned char) (-(((var_4) * (((var_9) * (15573286668132155858ULL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 2) 
                {
                    var_14 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) == (((/* implicit */int) var_3)))))) >= (arr_3 [i_2 - 1])));
                    var_15 &= ((/* implicit */long long int) (!((_Bool)1)));
                }
                var_16 -= (-(min((2873457405577395757ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0])) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
                arr_8 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) max((var_12), (((/* implicit */int) var_0)))))), (arr_6 [i_1] [(unsigned char)5] [5ULL])));
                /* LoopSeq 3 */
                for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    var_17 &= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [(unsigned short)17] &= ((/* implicit */short) arr_10 [i_4] [i_1] [i_1] [i_0]);
                        var_18 = ((/* implicit */unsigned long long int) arr_5 [i_0 + 2]);
                        var_19 = arr_6 [i_4] [i_3] [i_1];
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 4]))))) : (((/* implicit */int) min((arr_5 [i_0 + 2]), (arr_5 [i_0 + 1]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_0))))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (arr_6 [i_3] [i_3] [i_0]))) ? (arr_6 [i_0] [i_0 + 3] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        var_23 = (-(arr_1 [i_0 + 4]));
                        var_24 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 3] [i_3 + 1]))));
                    }
                    var_25 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))))) | ((((!(((/* implicit */_Bool) (signed char)-19)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_1]))))))));
                }
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_26 += ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0 + 4] [i_0] [i_0 + 4])))));
                    arr_19 [i_0] [i_0] [i_6] [i_0] &= ((/* implicit */long long int) arr_5 [i_1]);
                }
                for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_15 [i_9] [i_9] [i_7] [i_9])))) ? (max((min((((/* implicit */unsigned long long int) var_11)), (2873457405577395768ULL))), (((/* implicit */unsigned long long int) 137438953471LL)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9] [(unsigned short)5] [i_7] [i_1] [i_0]))) * (arr_23 [i_7] [i_1] [i_7] [i_7]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_25 [i_7] [i_7]) : (((/* implicit */long long int) var_10))))))))))));
                                var_28 ^= ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_16 [i_1] [i_7] [i_8] [13LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))) % (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) arr_16 [(unsigned short)4] [(unsigned short)4] [i_0] [i_0])) : (2873457405577395737ULL))))), (((/* implicit */unsigned long long int) ((max((15573286668132155872ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) <= (min((2873457405577395758ULL), (((/* implicit */unsigned long long int) (unsigned short)60193)))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1]))) >= (arr_3 [i_0 + 4])))) == (((/* implicit */int) (((+(((/* implicit */int) arr_20 [i_0] [i_0] [i_0])))) <= (((/* implicit */int) var_8))))))))));
                }
                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6713387245842409216ULL)) ? (arr_11 [i_0] [i_0 + 1] [i_0 + 4] [i_1] [i_1]) : (arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1])))))) : (min((((/* implicit */unsigned long long int) arr_11 [(unsigned short)1] [i_1] [i_1] [i_0] [i_0 + 1])), (12006844342537932594ULL)))));
            }
        } 
    } 
}
