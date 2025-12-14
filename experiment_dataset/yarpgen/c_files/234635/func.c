/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234635
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
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 16777215U)) ? (1023ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_3);
                    arr_8 [i_1] [i_0] = ((unsigned int) arr_0 [i_0] [i_1]);
                    var_15 = ((/* implicit */unsigned short) var_11);
                }
                for (int i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    arr_13 [i_0] = ((/* implicit */short) 10U);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_16 [i_3 + 2] [i_3] [i_3 + 1] [i_3 - 1]);
                                arr_21 [i_0] [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned short) (+(min((-5132224891476562383LL), (((/* implicit */long long int) arr_6 [i_3 - 2] [i_0] [i_3 - 2]))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) 9U);
                }
                for (long long int i_6 = 4; i_6 < 11; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) ? (var_8) : (arr_16 [i_0] [i_1] [i_6 - 2] [i_0])))) && (((/* implicit */_Bool) ((4294967286U) ^ (((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (short)-24521)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
                    arr_26 [i_0] [(short)8] [i_1] [i_6 - 1] = ((/* implicit */long long int) ((unsigned char) min((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1] [i_1] [i_1]))));
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_6 [i_0] [i_0] [i_6 + 1]), (arr_6 [i_0] [i_0] [1U])))), ((+(((/* implicit */int) arr_6 [i_6 - 4] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((10U) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
                        arr_30 [i_7] [i_1] [i_0] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(arr_9 [i_1] [i_6 - 4] [i_1])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8)))));
                        arr_31 [i_0] [(unsigned short)5] [i_0] [i_7] = ((/* implicit */unsigned short) (~(arr_29 [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_6] [i_0] [i_8] [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_38 [i_0] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) 2598580630U)) < (var_8))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (21ULL) : (var_7)));
                        }
                    }
                }
                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)96))))), (var_7)))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_5)))) << (((((((/* implicit */_Bool) 4294967294U)) ? (var_4) : (((/* implicit */long long int) 4294967286U)))) + (5698607734150768827LL))))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_1))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_10);
}
