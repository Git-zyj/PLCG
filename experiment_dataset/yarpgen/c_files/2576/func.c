/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2576
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [12U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_2)))) * (((/* implicit */int) var_16))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-16741)), (1966080)))) ? (min((var_7), (((/* implicit */int) var_14)))) : (((/* implicit */int) (short)16769))))), ((~(4294967295U)))));
                    arr_11 [i_2] [i_2] [i_2] [i_1 - 2] = (+(((/* implicit */int) (unsigned short)42875)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 24; i_4 += 3) 
                    {
                        arr_15 [i_1] [i_2] [i_1] [i_4 - 2] [i_1 - 1] = ((/* implicit */unsigned char) arr_8 [i_4 - 3] [i_2] [i_1 - 2]);
                        arr_16 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_2] [i_4]);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) (+(var_15)));
        arr_20 [i_5] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_5 [i_5] [i_5]))))));
        arr_21 [i_5] [5U] = ((/* implicit */unsigned char) (short)-16769);
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) ((var_12) != (((((/* implicit */_Bool) arr_13 [i_5] [i_5] [8U] [2])) ? (-1966073) : (((/* implicit */int) var_11))))));
    }
}
