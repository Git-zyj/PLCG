/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217936
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
    var_14 ^= ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */long long int) (short)32767)), (-9027921229657669974LL))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32767))))) | (((2690856185U) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) arr_6 [i_2]))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */_Bool) -9027921229657669974LL)) || (((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [1U] [i_1] [i_2] [1U])))) ? (((((/* implicit */_Bool) (short)-30127)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_3] [(signed char)10] [i_1])))) : (((/* implicit */int) arr_0 [i_2]))))))));
                        var_17 = ((/* implicit */short) max((((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [(signed char)16])) * (((/* implicit */int) (signed char)(-127 - 1))))), (((((((/* implicit */_Bool) -8769690273416177371LL)) || (((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */short) var_11);
                        arr_15 [i_0] [i_0] [i_0] [i_4] = ((((/* implicit */_Bool) ((long long int) 757645695))) ? (287283567U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) / (((/* implicit */int) var_7))))));
                        var_19 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (var_0))));
                    }
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((unsigned int) ((((/* implicit */_Bool) 0U)) ? (0) : (((/* implicit */int) (short)-30887))))) <= (((/* implicit */unsigned int) -182599086))));
                        var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U)))));
                    }
                    for (short i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) (short)30126)))))), (((((/* implicit */_Bool) arr_16 [i_6 + 2] [i_6] [i_6 + 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)112))))));
                        var_23 |= ((((/* implicit */int) var_1)) % (min((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (signed char)-96)))))));
                    }
                    arr_21 [(signed char)0] [i_0] [i_1] [i_2] = ((/* implicit */int) var_13);
                }
            } 
        } 
    } 
}
