/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26010
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
    var_20 = ((/* implicit */_Bool) ((max((((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (var_16))) >> (((var_19) - (181638789U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] &= min((((((/* implicit */_Bool) (short)25669)) ? (3814924366U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_6)));
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) + (2147483647))) >> (((arr_2 [i_0] [i_1] [i_1]) - (3179544881U)))))) % (var_12)));
                arr_7 [(signed char)11] [i_1] [i_1] = ((/* implicit */unsigned int) min((((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (var_9)))), (((/* implicit */signed char) ((var_6) > (((/* implicit */int) var_14)))))));
                arr_8 [i_1] = arr_2 [(unsigned short)0] [i_1] [i_1];
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_19 [i_4] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_4 - 1] [i_1] [i_2 + 1] [i_3]))));
                                arr_20 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */int) arr_16 [i_0 - 2] [i_1] [i_2 - 2] [i_3] [i_3])) > (((/* implicit */int) arr_16 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_4 + 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        arr_25 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_8)))))) + (arr_22 [i_5] [i_5])));
        arr_26 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_24 [i_5]))))) : (arr_23 [i_5])));
    }
}
