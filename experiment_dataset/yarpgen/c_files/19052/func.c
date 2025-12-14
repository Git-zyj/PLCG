/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19052
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
    var_12 ^= ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(7741507656557815784ULL)))) && (((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) (unsigned short)53570)) - (53553)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((short) arr_4 [i_1] [i_2 - 1] [i_1])))));
                    var_14 = min((1006632960U), (((/* implicit */unsigned int) (signed char)126)));
                    var_15 = ((/* implicit */long long int) ((unsigned int) var_0));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 3; i_3 < 19; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            {
                arr_10 [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)52002)) / (var_1))) - (((((/* implicit */int) arr_3 [i_3] [i_4] [i_3 - 1])) + (((/* implicit */int) arr_3 [i_3] [i_4] [i_3 - 3]))))));
                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((((/* implicit */_Bool) 15901225535798126811ULL)) && (((/* implicit */_Bool) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) (short)27081))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            arr_23 [i_5] [(unsigned char)1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_5] = ((/* implicit */signed char) var_0);
                            arr_24 [i_5] [i_5] [i_5] [i_5 - 1] = ((/* implicit */int) ((unsigned char) max((var_6), (((/* implicit */int) var_5)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            arr_32 [i_5] [i_6] [i_6] [(unsigned short)2] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_11 [i_5 - 1]))))) | (((unsigned long long int) arr_6 [i_6 + 1]))));
                            arr_33 [i_5] [i_5] [i_9 + 2] [i_9] [i_9] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_5)) + (var_7))))) ? ((+(((/* implicit */int) arr_5 [i_9] [i_9 - 1] [i_9 + 1])))) : (((/* implicit */int) var_9)));
                            var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) / (10U)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        for (short i_12 = 2; i_12 < 23; i_12 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_13 = 3; i_13 < 22; i_13 += 4) 
                {
                    for (signed char i_14 = 1; i_14 < 22; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                arr_47 [(_Bool)0] [i_12] [i_13] [i_14] [i_15] &= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_46 [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_14 - 1] [i_15] [i_15])) >> (((/* implicit */int) arr_43 [i_11] [(_Bool)1] [i_13 - 1] [i_14 + 1] [i_14] [i_14])))));
                                var_18 = var_9;
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            {
                                arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))), (var_3)));
                                arr_55 [i_11] [i_11] [i_16] [i_11] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_46 [i_11] [i_12 + 1] [i_11] [i_17] [i_18] [i_18])), (((int) var_5))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
