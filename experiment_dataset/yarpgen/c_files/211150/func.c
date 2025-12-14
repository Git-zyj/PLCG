/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211150
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
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */long long int) 1401331667U);
        var_14 = ((/* implicit */short) ((var_2) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */int) var_6))))) & (arr_0 [i_0 - 1]))) : (arr_0 [5U])));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_11))))) ? (((var_2) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 1322384963)))) : ((~(arr_0 [i_0 + 1]))))) > (arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 3]))))))))));
            arr_10 [9U] [i_2] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)2296)), (14039870415960904676ULL)));
        }
        for (int i_3 = 1; i_3 < 7; i_3 += 2) 
        {
            arr_13 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) var_13));
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                arr_17 [3] [i_1] [i_1] [i_4] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) 4344938771771073673LL)) - (arr_0 [i_1 + 1])))));
                var_16 = ((/* implicit */unsigned int) ((int) arr_12 [i_1] [i_3 + 2]));
            }
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                arr_22 [i_1] [i_3 + 3] = ((/* implicit */short) arr_18 [i_1] [i_3] [i_5]);
                var_17 = ((/* implicit */short) min((4344938771771073673LL), (((((/* implicit */_Bool) 1152921367167893504LL)) ? (-4344938771771073661LL) : (-4344938771771073683LL)))));
            }
            for (int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((int) ((signed char) (signed char)-71)));
                            var_19 -= arr_5 [i_1 - 1] [i_8];
                            var_20 = ((/* implicit */short) max((((unsigned long long int) arr_12 [i_1] [i_1 + 1])), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_1 [i_3])))))))));
                        }
                    } 
                } 
                arr_32 [(short)1] [i_1] [i_3] [i_6] = var_4;
                arr_33 [i_1] [i_1] [(unsigned char)8] [i_1] &= ((/* implicit */signed char) arr_25 [i_1] [i_3]);
                var_21 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((var_13), (((/* implicit */short) arr_9 [i_1 - 3] [i_3] [i_6]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)16256))) : (((((4344938771771073673LL) - (-4344938771771073683LL))) << (((((((((/* implicit */_Bool) var_13)) ? (-1152921367167893505LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (1152921367167893568LL))) - (63LL)))))));
            }
        }
        arr_34 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1])), (((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16256))) : (1419434326696444773LL)))));
        arr_35 [6] [i_1] &= ((/* implicit */signed char) (~(((unsigned long long int) var_12))));
        arr_36 [i_1] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)-16253)) : (arr_29 [i_1] [i_1] [i_1] [10U] [i_1]))) / (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)162)))))), (((int) ((((/* implicit */int) var_9)) <= (var_3))))));
    }
    var_22 = ((/* implicit */unsigned char) 1152921367167893505LL);
}
