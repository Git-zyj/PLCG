/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198895
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0]))))));
        var_20 ^= ((/* implicit */unsigned char) arr_2 [0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_2 - 4] [i_0] [i_4 - 3] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-42)), ((unsigned char)171)));
                            arr_15 [i_0] [i_0] [i_0] [i_3] [18] [(unsigned char)7] = ((/* implicit */signed char) ((_Bool) (((+(((/* implicit */int) (signed char)41)))) + (((/* implicit */int) (signed char)61)))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_19 [i_5] [i_1 + 1] [i_1 + 1] [i_3] [i_0] = (!(((/* implicit */_Bool) var_17)));
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_0] [i_2] [i_1 + 1])) ? (((/* implicit */int) (short)28455)) : (((/* implicit */int) var_14))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) 
                        {
                            var_21 = ((((/* implicit */_Bool) max((arr_9 [i_0] [i_6 + 4] [i_2 - 3] [i_2 - 3] [i_0] [(_Bool)1]), (((/* implicit */long long int) (signed char)44))))) ? (((max((4194176), (-1))) | (((/* implicit */int) var_9)))) : (((/* implicit */int) var_5)));
                            var_22 = ((/* implicit */_Bool) arr_5 [i_3] [i_2 - 1] [i_1 + 1]);
                        }
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            arr_25 [i_7 - 2] [i_3] [i_0] [i_1] [i_0] = arr_10 [i_0] [i_1] [i_1] [i_2 + 1];
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7] [i_0] [i_3] [i_2] [i_0] [i_0]))) ^ (arr_9 [i_0] [i_0] [i_0] [i_2 + 2] [i_3] [i_7])))) ? (arr_21 [3U] [i_1] [i_2] [i_3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-35))));
                            var_24 = ((/* implicit */_Bool) (~((~(arr_21 [i_0] [i_1] [i_2 - 1] [i_3] [i_0])))));
                            arr_26 [i_7] [i_7 - 2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)195))));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)41)) - (((/* implicit */int) var_13))))))) ? (1251699452) : (((((/* implicit */int) (signed char)-30)) - (((/* implicit */int) (signed char)-42))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 1; i_9 < 19; i_9 += 2) 
        {
            arr_35 [i_8] [(short)2] [i_9] = ((/* implicit */_Bool) ((arr_32 [i_9] [i_9 + 1]) + (((/* implicit */int) arr_33 [i_9] [i_9 + 2]))));
            var_26 = ((/* implicit */signed char) 2147483647);
            var_27 &= ((/* implicit */_Bool) arr_33 [10ULL] [i_9 + 1]);
        }
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_32 [i_10] [i_10])) * (arr_38 [(_Bool)1])));
                    var_29 *= ((/* implicit */unsigned long long int) arr_34 [i_11] [i_10]);
                    arr_40 [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)44))))) ? ((-(var_17))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0)))))));
                }
            } 
        } 
    }
    var_30 += ((/* implicit */short) max((26LL), (((/* implicit */long long int) (signed char)41))));
    var_31 = ((/* implicit */unsigned int) ((var_18) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))));
}
