/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212685
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
    var_20 = var_4;
    var_21 = var_14;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) == (((/* implicit */int) arr_0 [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(signed char)11])) || (((/* implicit */_Bool) ((unsigned short) (unsigned short)0)))));
                            arr_14 [i_1] [i_1] [i_1] [19U] [i_1] = ((/* implicit */int) arr_8 [i_4]);
                            arr_15 [i_4] [(signed char)11] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) (short)29343))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (unsigned char)121))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_2])) << (((((/* implicit */int) arr_8 [i_0])) - (55951)))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) var_7);
                            arr_21 [(signed char)18] [(signed char)7] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_2] [i_1])) + (((/* implicit */int) arr_17 [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            for (short i_7 = 4; i_7 < 19; i_7 += 1) 
            {
                var_25 ^= ((/* implicit */unsigned int) arr_6 [i_0] [(unsigned char)20] [i_1] [i_7]);
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_7] [i_7] [i_7 + 1] [i_1])) > (((/* implicit */int) arr_16 [i_7] [i_7 - 3] [i_7 + 1] [i_0]))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                arr_27 [i_0] [i_1] [i_1] [i_8] = (!(((/* implicit */_Bool) (~(var_2)))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    arr_30 [i_0] [(signed char)19] |= ((/* implicit */signed char) ((((((/* implicit */int) arr_16 [i_0] [i_1] [i_8] [i_9])) % (((/* implicit */int) arr_0 [i_0])))) < (((((/* implicit */_Bool) -4807436400744782974LL)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)16383))))));
                    var_27 -= (unsigned short)6415;
                }
                for (long long int i_10 = 4; i_10 < 18; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                    {
                        var_28 &= ((/* implicit */signed char) ((arr_25 [i_10 - 4]) / (arr_25 [i_10 - 1])));
                        arr_37 [i_1] [i_8] = ((/* implicit */unsigned short) (-(arr_1 [i_11 + 1])));
                    }
                    var_29 = ((/* implicit */signed char) var_18);
                }
            }
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) var_4))));
        }
        arr_38 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) == (4294967295U)));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_15), (((/* implicit */short) ((((/* implicit */int) arr_8 [i_0])) > (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) < (((/* implicit */int) var_17))));
        var_32 = ((/* implicit */long long int) var_16);
    }
}
