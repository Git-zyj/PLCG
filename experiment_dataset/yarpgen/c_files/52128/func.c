/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52128
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
    var_18 = ((/* implicit */unsigned int) var_4);
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (-1634294327) : (((/* implicit */int) (short)-3334)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) arr_5 [i_2] [7U]);
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        var_21 ^= (-(((unsigned int) arr_0 [(unsigned char)10] [i_2])));
                        arr_14 [i_2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (-4084419896172986695LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((var_4) ? (arr_7 [i_3 + 3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57635)))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_6 [i_1 + 1] [5])) : (((/* implicit */int) var_13)))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            arr_17 [i_2] [(unsigned short)13] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) arr_3 [i_3 - 1] [i_4 + 1]))));
                            arr_18 [i_2] [(unsigned short)5] [i_2] [10U] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
                        }
                    }
                }
                var_23 ^= ((/* implicit */unsigned long long int) -1634294354);
                var_24 = ((/* implicit */int) arr_13 [i_0] [i_1]);
                arr_19 [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) arr_9 [i_1 + 2] [0U] [(unsigned short)14]))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */signed char) var_6)), (var_16)))) ? (1634294344) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_8))));
    var_26 = 65535U;
}
