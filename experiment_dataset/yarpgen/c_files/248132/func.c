/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248132
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
    var_20 -= ((/* implicit */unsigned long long int) var_15);
    var_21 &= ((/* implicit */unsigned char) 3U);
    var_22 = ((/* implicit */_Bool) var_1);
    var_23 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_24 |= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) & (-1542854407))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (15358781570890438762ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_0] [i_0] [i_0]))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) 2147483647)), (36028797018963966ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0] = var_10;
                                arr_14 [i_3] [i_3] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_19)))) ? (var_1) : (((/* implicit */long long int) arr_11 [i_0]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) arr_9 [(_Bool)1] [i_0] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 2147483647)), (18446744073709551598ULL))))));
                        var_27 = ((/* implicit */short) var_10);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) 5026865498228537595ULL);
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) arr_16 [i_1] [i_1] [4ULL]))));
                        }
                    }
                    for (int i_7 = 1; i_7 < 14; i_7 += 3) /* same iter space */
                    {
                        arr_23 [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12))) : (9123550670738977575LL)))) ? (((/* implicit */int) ((_Bool) arr_12 [i_0 - 3] [i_2]))) : (((/* implicit */int) ((var_5) > (max((var_17), (var_9))))))));
                        var_30 = ((/* implicit */long long int) 13419878575481014021ULL);
                    }
                }
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0 - 2] [i_10 + 1] [i_8])) ? (((0ULL) / (36028797018963957ULL))) : (((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_21 [i_0 + 1] [i_10 + 1] [i_8])))))));
                                var_31 = ((/* implicit */short) (((+(12936575605472699413ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((((/* implicit */int) var_18)) < (((/* implicit */int) arr_16 [i_9] [i_1] [(short)2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (signed char)-112))))))))));
                                var_32 = ((/* implicit */int) (~(8758925062975592594LL)));
                                var_33 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)240)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_10 [10LL] [i_9] [(short)6] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */long long int) 2U))))));
                            }
                        } 
                    } 
                } 
                arr_32 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_0)) == (6U)))), (arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (max((((/* implicit */int) arr_29 [i_0 + 1] [i_0 - 4])), (arr_3 [i_1]))) : (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (-1542854427))) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
