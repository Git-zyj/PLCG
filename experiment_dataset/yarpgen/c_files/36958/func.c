/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36958
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_11 [18U] [i_0] [18U] [(short)9] [(short)9] [(unsigned short)14] [7LL] = ((/* implicit */unsigned char) (~(9223372036854775804LL)));
                                var_16 = ((/* implicit */short) (~((~((~(((/* implicit */int) arr_4 [i_0]))))))));
                                arr_12 [i_0 + 1] [(short)17] [i_0] [i_3] = (~((~(arr_9 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0] [i_4]))));
                                var_17 -= ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_4 [3]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0]))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0])))))) : ((~(((((/* implicit */_Bool) arr_1 [11])) ? (((/* implicit */int) arr_3 [7U] [7U] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3] [i_3])))))));
                                var_18 = (~(((/* implicit */int) (short)-32198)));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_9 [i_0] [16U] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)12]))) : (arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_13 [i_5]) : (arr_13 [i_5]))))))))));
        arr_16 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_14 [9LL]))))))) : ((~((~(arr_13 [i_5])))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (unsigned int i_8 = 2; i_8 < 23; i_8 += 4) 
                {
                    {
                        arr_25 [i_5] [i_6 + 2] [i_7] [(signed char)22] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_7]))))) ? (((arr_20 [i_5] [(short)2] [i_7] [i_8]) ? (((/* implicit */unsigned long long int) arr_21 [i_5] [i_5] [15ULL] [i_8] [i_8 - 2] [i_5])) : (arr_15 [i_5]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_5])))))))));
                        var_21 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_24 [i_6 + 1]))))));
                        var_22 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) 404553914)) ? (((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2504)))) : ((~(-2029017017)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
                        {
                            arr_29 [i_5] [i_6] [i_6] [i_8] [i_6] [i_5] [i_7] = ((/* implicit */long long int) (~((~(arr_26 [i_5] [i_6] [(signed char)12] [i_8] [i_6])))));
                            var_23 |= ((/* implicit */unsigned char) arr_20 [i_5] [i_5] [i_7] [i_5]);
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_22 [i_5])))))))));
    }
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-18)))))));
}
