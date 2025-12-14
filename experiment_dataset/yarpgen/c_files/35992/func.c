/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35992
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
    for (short i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) var_13);
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned short) (+(4294967295U)));
                        var_16 = ((/* implicit */signed char) arr_2 [i_0]);
                        arr_9 [i_0] [i_0] [i_0] [(unsigned char)11] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0 - 3] [i_1 + 2] [i_2] [i_2]))) ? (((((/* implicit */_Bool) var_13)) ? (arr_7 [i_3 + 1] [13U] [i_2 - 1] [i_1 + 1] [i_0 - 3] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : ((-(var_8)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 4; i_5 < 12; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */short) var_6);
                            arr_15 [i_0] [i_0] [i_1] [(unsigned char)5] [(unsigned char)5] [i_4] [i_5 - 4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)10578)) ? (arr_7 [i_0] [i_4] [3ULL] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) var_5))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_5 - 3] = ((/* implicit */int) var_10);
                            var_18 = ((/* implicit */int) (unsigned short)10578);
                            arr_17 [i_5] [i_0] [i_2 + 1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) var_2);
                        }
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_20 [i_6] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_2] [i_4] [i_6]);
                            arr_21 [i_0] [i_0] [i_0] [i_4] [i_0] [(signed char)2] [i_1 - 1] = ((/* implicit */int) ((var_1) != (arr_7 [i_2 + 2] [i_2] [i_2] [i_1 + 1] [i_0] [i_0])));
                        }
                        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_0] [i_0] [i_0] [i_7])) ? (arr_18 [i_2 - 1] [i_0] [i_2 - 1] [i_4] [i_0]) : (arr_18 [i_2 + 2] [i_0] [i_2 + 2] [i_4] [i_0])));
                            var_20 = ((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 4] [i_0]);
                            var_21 += ((/* implicit */unsigned int) (-((((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)56))))));
                            var_22 = ((/* implicit */unsigned short) -266119912);
                        }
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_23 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [(short)8] [i_4] [i_4] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_0 - 1] [i_1 + 2] [i_0] [i_2 + 1]))) : (arr_18 [i_0] [(signed char)14] [i_0] [i_0 - 2] [i_0])));
                            var_24 = ((/* implicit */_Bool) var_10);
                            var_25 = ((/* implicit */signed char) (+(var_7)));
                        }
                        var_26 = ((/* implicit */short) 9223372036854775807LL);
                        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_0] [(_Bool)1] [(unsigned short)6] [i_0 + 1]))));
                        var_28 = (~(((/* implicit */int) arr_22 [i_0])));
                    }
                    var_29 = ((unsigned char) -2411129140864681117LL);
                    var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_11 [i_0 - 4] [i_0 - 1] [i_0 - 1] [i_0 - 4])) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 1] [i_1 - 2] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 2]))))));
                    var_31 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_0 [i_0] [i_0]))))) % (((((/* implicit */_Bool) var_6)) ? (5060557951977348373LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14819))))))), ((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_24 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                }
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 3] [i_0 - 2] [i_1 + 2]))) / ((+(4294967295U)))));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) (+((+(((((/* implicit */long long int) ((/* implicit */int) var_9))) % (var_1)))))));
}
