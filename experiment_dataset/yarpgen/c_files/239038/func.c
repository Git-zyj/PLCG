/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239038
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
    var_18 = ((/* implicit */_Bool) (+(var_8)));
    var_19 = ((/* implicit */int) ((signed char) (+(max((((/* implicit */unsigned int) var_13)), (var_3))))));
    var_20 = min((var_16), (var_2));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (-(max((var_11), (((/* implicit */unsigned int) ((((arr_5 [i_0] [i_0] [(short)3]) + (2147483647))) << (((arr_3 [i_1] [(signed char)1]) - (1203885269))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 ^= ((/* implicit */_Bool) (-(((var_9) * (var_10)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) -9223372036854775797LL);
                            arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_7)))));
                            arr_17 [i_0] [i_1 - 1] [7U] [(short)12] [i_1] = arr_5 [i_1] [i_1] [i_2];
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11)))) : ((+(var_12)))));
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_23 -= ((/* implicit */_Bool) ((signed char) (signed char)8));
                            var_24 |= ((/* implicit */signed char) var_0);
                        }
                        var_25 = ((/* implicit */signed char) ((((unsigned int) arr_7 [i_0] [i_1 - 1] [i_1])) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(signed char)5] [i_0] [i_3] [i_3])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_0] [i_0]))))))));
                            arr_27 [i_0] [i_1 - 1] [i_1] [i_0] = ((((/* implicit */_Bool) var_2)) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_7] [i_6] [i_2] [10U] [i_0]) >= (arr_20 [i_0] [4ULL] [i_2] [i_2] [i_6] [i_7]))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((var_13) >= (arr_23 [i_0] [i_1] [i_1] [6] [0ULL])))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) var_16);
                            var_29 = (~(((/* implicit */int) arr_29 [i_8] [7] [i_1] [i_1] [i_8] [i_1 + 1] [i_1 - 1])));
                            arr_32 [(short)6] &= ((/* implicit */_Bool) arr_29 [i_1] [i_1 + 1] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [i_1] [i_1 + 1]);
                            arr_33 [i_6] [i_1] [i_2] [i_6] [i_8] [i_8] = ((/* implicit */short) ((arr_4 [i_0] [i_1 - 1] [i_2]) == (((((/* implicit */_Bool) var_17)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                        }
                        arr_34 [i_1] [i_1] = ((/* implicit */signed char) var_8);
                        arr_35 [6] [i_2] [i_1] [4] [11] = ((/* implicit */unsigned int) (~(((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_1 + 1] [13U] [i_6]))) != (arr_25 [i_1 - 1] [(signed char)4])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_12 [i_0]);
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_14)))) : (var_13)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_21 [i_1 - 1] [i_0] [i_2] [i_1 - 1] [i_2])) : (var_0))) : (min(((~(((/* implicit */int) var_16)))), (arr_20 [i_2] [(_Bool)1] [8U] [i_9] [i_2] [i_1 + 1])))));
                    }
                    arr_40 [i_0] [i_2] [i_1] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_1 - 1] [i_2] [i_2]))))));
                }
            } 
        } 
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (!(((_Bool) ((unsigned short) arr_14 [i_0]))))))));
    }
}
