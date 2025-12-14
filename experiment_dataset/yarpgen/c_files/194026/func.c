/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194026
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
    var_18 *= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-19414))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_13))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19414))) < (12618438213171263091ULL))))) | (5969992865279439383ULL)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)19414))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16307071732067062155ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)-6736)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) max((((arr_13 [i_0] [i_0] [i_2] [i_1 + 3]) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_4]))) : (arr_7 [i_3] [i_1 + 2] [i_3]))) - (64ULL))))), (((/* implicit */int) (signed char)(-127 - 1)))));
                                arr_15 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) arr_7 [i_0] [(short)4] [i_1 - 2]);
                                var_22 -= ((/* implicit */signed char) (short)19413);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)-6736)) ? (18446744073709551615ULL) : (12649368550711195295ULL)))));
                    arr_16 [8ULL] = ((/* implicit */unsigned char) (+((~(arr_10 [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2])))));
                    arr_17 [i_0] [i_1 + 2] [i_0] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [(short)15] [(short)15]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_24 = ((/* implicit */short) (!(arr_1 [i_5])));
        var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) -1108460031)) ? (-1270119805) : (((/* implicit */int) (short)-6736))));
    }
    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) 7436371665958420947LL)) ? (arr_12 [i_6] [i_6]) : (arr_12 [i_6] [i_6]))), (((arr_1 [i_6]) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)1))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                                var_28 = ((/* implicit */short) -7436371665958420947LL);
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)48575)) ? (((/* implicit */int) (short)480)) : (((/* implicit */int) (unsigned short)60106))));
                                arr_32 [i_6] [i_7] [i_10] [i_9] [i_10] = (+(((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) max(((unsigned char)118), (((/* implicit */unsigned char) (_Bool)0))))))));
                                arr_33 [i_6] [i_10] [i_7] [i_8] [i_8] [i_9] [(_Bool)0] = ((/* implicit */signed char) (-(max((max((arr_28 [i_6] [i_6] [i_6] [i_6] [i_9] [i_6]), (((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6] [i_6])))), (1108460031)))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) (((_Bool)0) ? (((((((/* implicit */unsigned long long int) arr_24 [i_7])) > (arr_5 [i_8] [i_8] [i_8]))) ? (max((var_14), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (arr_24 [7ULL])))))) : (((/* implicit */unsigned long long int) arr_20 [i_6]))));
                }
            } 
        } 
    }
}
