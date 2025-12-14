/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230901
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
    var_17 &= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 4; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    arr_6 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((arr_0 [i_0]) << ((((-(var_4))) - (4326611620999021367ULL)))));
                    var_18 ^= 2209221337U;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 27)) : (var_15)))) ? (((2085745959U) >> (((2085745958U) - (2085745944U))))) : (((/* implicit */unsigned int) arr_1 [i_0]))));
                                arr_13 [i_0] [i_1] [i_2 - 4] [i_3] [i_4 + 1] = ((/* implicit */signed char) ((unsigned char) (-(arr_1 [i_1]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_15);
                }
                for (unsigned int i_5 = 4; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_1] [i_7 + 1] [i_1] [i_5] [i_7] = ((/* implicit */unsigned int) arr_7 [i_6] [(unsigned short)8] [i_6] [i_6]);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_1]))) - (var_15)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_1] [i_5] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))) : (26ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_5] [i_1] [1U])) ? (((/* implicit */int) arr_4 [i_5] [i_1] [i_0])) : (((/* implicit */int) (short)-12)))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned char)16] [i_5])) || (((/* implicit */_Bool) 0U))))))))));
                    var_21 = ((/* implicit */short) var_15);
                    arr_24 [i_0] [i_1] [i_0] [(signed char)3] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))) % (((long long int) arr_7 [i_0] [i_1] [i_5] [i_5])))) * (((/* implicit */long long int) (~(var_15))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        for (int i_9 = 3; i_9 < 14; i_9 += 1) 
                        {
                            {
                                arr_31 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_9] [i_1]);
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((_Bool) var_14)) && (((/* implicit */_Bool) ((signed char) arr_5 [i_1] [i_1] [(unsigned short)1])))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-12))))) + (var_1)))));
                                var_23 = (_Bool)1;
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */_Bool) ((unsigned int) var_16));
                arr_32 [i_0] [i_0] &= ((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_25 |= ((/* implicit */unsigned char) ((var_7) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
}
