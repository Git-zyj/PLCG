/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52397
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
    var_18 = ((/* implicit */long long int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((long long int) var_5))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_13))));
            var_21 = ((/* implicit */signed char) var_10);
            var_22 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)992)) << (((((((/* implicit */int) (short)-1467)) + (1489))) - (15))))) << (((/* implicit */int) (((~(((/* implicit */int) (short)1457)))) >= (((/* implicit */int) min((((/* implicit */unsigned short) (short)1023)), ((unsigned short)992)))))))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) ((var_12) >= (((/* implicit */int) arr_6 [(signed char)0] [i_3]))))) : (((/* implicit */int) arr_0 [i_3]))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((int) var_12)))));
            arr_8 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) var_1)))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            arr_18 [i_2] [i_4] [i_4] [i_2] [(_Bool)1] [i_5] = ((/* implicit */signed char) arr_3 [i_6 - 1] [i_6 - 1]);
                            arr_19 [i_5] [i_6] [i_5] [i_4] [i_5] |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_5] [i_5]))));
                            arr_20 [i_2] [i_4] [i_5] [i_6] [i_7] [i_7] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [9] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_14 [i_2] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_4]))));
                            arr_21 [i_5] [i_4] [i_5] [i_6] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) (~(var_11)));
            }
            /* vectorizable */
            for (short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
            {
                arr_26 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)50005)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (short)-23245)))) | (((((/* implicit */_Bool) (short)-1457)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)64548))))));
                var_26 = ((/* implicit */unsigned long long int) var_12);
            }
            var_27 -= ((/* implicit */unsigned int) arr_13 [i_2] [i_4] [(short)2]);
        }
        arr_27 [i_2] = ((/* implicit */unsigned char) ((long long int) (unsigned short)49064));
    }
}
