/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208256
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
    var_14 = ((/* implicit */short) ((unsigned short) var_7));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) var_12))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)83)) ? (1761288442U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_9 [i_2] [2U] [i_2] = ((/* implicit */unsigned char) var_7);
                        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (arr_0 [i_3 - 1]) : (2533678854U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))) : (arr_5 [i_0])));
                        var_18 = (-(((((/* implicit */_Bool) 1582540632U)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) 1761288436U)))));
                        arr_10 [i_0] [(short)10] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0] [i_3])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_0 [(_Bool)1]) / (2533678863U)))))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (signed char)63))));
                        var_21 ^= var_4;
                    }
                    var_22 = ((/* implicit */unsigned char) var_9);
                    var_23 = ((/* implicit */signed char) ((unsigned long long int) var_7));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    var_24 += ((/* implicit */short) (+(arr_3 [i_5 + 1])));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_6] [(unsigned char)1] [i_6] [i_6] [i_7] [(signed char)6] = ((/* implicit */unsigned char) arr_17 [4ULL] [i_1 - 1] [i_1 - 1] [i_1]);
                                var_25 = 4269469715U;
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_5] [i_0])) * (((/* implicit */int) arr_13 [i_1 - 1] [i_6] [8LL])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
