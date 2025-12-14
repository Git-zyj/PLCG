/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31804
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */short) (!(((arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_3 - 4] [i_3 - 1] [i_4]) > (arr_10 [i_3 - 4] [i_3 - 3] [i_3] [i_3 - 2] [i_3] [i_3 - 1] [i_4])))));
                                var_18 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_3]))))), (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 - 3]))), (((((/* implicit */_Bool) 5377368525005767222LL)) ? (2149414154612531025ULL) : (((((/* implicit */_Bool) 5377368525005767222LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (16297329919097020590ULL)))))));
                                var_19 = arr_8 [i_0] [i_2] [i_3 - 2] [i_3 - 2];
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 5377368525005767215LL)))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) var_0)) : (arr_2 [i_0] [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 2) 
                {
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_21 ^= ((/* implicit */_Bool) ((((min((((/* implicit */long long int) arr_6 [i_7] [i_5 + 3] [i_5 + 2] [i_6 + 1])), (min((((/* implicit */long long int) arr_4 [i_7])), (var_10))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_6] [i_1] [i_1] [i_6] [i_1] [i_7])) && (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_16 [i_0] [i_1] [i_5 + 3] [i_1] [i_5 + 3] [i_0]) : (arr_7 [i_1] [i_1] [i_1] [i_1])))))))));
                                var_22 = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((var_6) + (3424184725443467600LL))) - (24LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 3; i_10 < 9; i_10 += 1) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [(unsigned char)3]);
                                var_24 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_9] [i_1])) * (((/* implicit */int) arr_20 [0LL] [i_1]))))), (var_5))), (((/* implicit */long long int) arr_21 [i_9] [i_8] [i_0]))));
                                var_25 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                                arr_27 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_1] [i_10])) ? ((~(arr_18 [i_8] [i_9] [i_0] [i_0] [i_1] [i_0]))) : (max((arr_26 [i_0] [i_9]), (((/* implicit */long long int) (short)3)))))));
                            }
                        } 
                    } 
                    arr_28 [1LL] [2U] [i_0] [i_8] = ((/* implicit */int) (-(((long long int) (+(((/* implicit */int) arr_1 [(unsigned short)0] [i_8])))))));
                }
                for (short i_11 = 2; i_11 < 9; i_11 += 1) 
                {
                    var_26 *= ((/* implicit */long long int) ((_Bool) ((unsigned short) arr_23 [i_0] [i_0] [i_1] [i_11])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_0] [i_11 - 2] [i_0] [i_13]);
                                var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((long long int) arr_35 [i_0]))) : (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) << (((/* implicit */int) (signed char)39)))))) * (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_13] [i_12] [i_11 - 1] [i_1] [i_1] [i_0]))) : (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((unsigned int) 5377368525005767238LL))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
}
