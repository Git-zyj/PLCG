/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224174
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
    var_15 = (~(((/* implicit */int) var_11)));
    var_16 = ((/* implicit */_Bool) var_6);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) min(((_Bool)1), ((_Bool)1))))) - (((unsigned long long int) (-(((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */short) ((arr_3 [i_0] [i_0 + 1] [i_2 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */int) var_6);
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_2 + 4]));
                    var_19 += ((/* implicit */unsigned long long int) ((unsigned short) arr_5 [8U] [i_0 - 1] [i_1 - 1] [i_2 + 3]));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3 + 2]));
                                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [6LL]))));
                                var_21 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_14 [i_0 + 1] [i_1] [(_Bool)1] [i_3 - 1] [i_1 + 1] [i_1] [(_Bool)1])) ^ (arr_13 [i_0 + 1] [i_1] [i_0 - 1] [i_3 + 1] [i_1 - 1])));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0 - 1]))));
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [20ULL] [i_1] [5ULL] [20ULL] [(unsigned char)8])))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_6 [i_0] [i_0] [i_6] [i_6])))))));
                        var_24 = ((/* implicit */unsigned char) arr_18 [i_0 + 1] [i_6 + 2] [i_5 + 1]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_25 *= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_23 [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_5] [i_5 + 2]))) < (max(((+(((/* implicit */int) (_Bool)1)))), (arr_5 [i_0 - 1] [i_1] [5] [i_7])))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [(_Bool)1] [i_5 + 2]) ? (((/* implicit */int) (_Bool)1)) : (var_0)))) ? (((((/* implicit */int) var_10)) & (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_10 [i_5] [i_1] [i_1] [i_5] [i_1]))))) ? (arr_7 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_5 + 2] [i_0 - 2]) <= ((-(((/* implicit */int) (_Bool)1))))))))));
                    }
                    arr_27 [i_0] [i_0] [i_5] |= ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                }
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) > (arr_13 [i_0 - 1] [i_1] [i_0] [i_0 - 2] [i_1])))) : (((/* implicit */int) ((short) (+(((/* implicit */int) (_Bool)1)))))))))));
                arr_28 [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) - (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (arr_12 [i_1 + 3] [i_1 + 1] [i_1 - 2] [i_1])))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (short i_9 = 1; i_9 < 19; i_9 += 3) 
                    {
                        {
                            arr_36 [18U] [i_1] [i_1] [i_1] [i_0] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_10 [20U] [i_0] [i_8] [i_9 + 1] [i_9]))))))), (min((arr_11 [i_1]), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))))));
                            var_29 = ((/* implicit */int) var_4);
                            var_30 = ((/* implicit */short) ((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1] [i_1] [i_9 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) min((arr_34 [i_0 + 1] [i_9 + 1]), (((/* implicit */short) arr_10 [(short)6] [i_1] [i_1] [i_0 - 1] [i_9 - 1])))))));
                            var_31 = ((/* implicit */short) ((((arr_14 [i_0] [(short)7] [(short)7] [(unsigned char)12] [i_1 - 2] [(short)10] [i_8]) / (arr_5 [i_1 - 2] [i_1] [i_1 - 2] [5LL]))) % ((~(((/* implicit */int) (_Bool)1))))));
                            var_32 &= ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                        }
                    } 
                } 
            }
        } 
    } 
}
