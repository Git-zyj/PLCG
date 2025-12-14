/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194050
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) max((min((arr_4 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)32768)) : (-806041296)))))), (((long long int) 2133210212U))));
                    arr_10 [i_0] = ((/* implicit */int) ((18310518165467432406ULL) != (((/* implicit */unsigned long long int) (-(arr_8 [i_0] [i_0] [i_1] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (~(arr_8 [i_4] [i_0] [i_0] [i_0]))))));
                                arr_16 [i_0] [i_3] [i_0] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_14 [i_1 + 1] [i_1 + 1] [i_2 + 2]), (arr_8 [i_1 - 1] [i_3] [i_4 + 1] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4776935069894150027ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [7U] [i_1] [i_2])) && (((/* implicit */_Bool) 16376)))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (9223372036854775808ULL) : (var_2))))))));
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1 - 1] [i_2] [i_2 + 1] [i_2])) - (arr_14 [i_1 - 1] [i_1 - 1] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_4 + 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3624953114U)) ? (13669809003815401595ULL) : (((/* implicit */unsigned long long int) arr_12 [i_1]))))) ? (4776935069894150035ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (-2101460375)))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_0] [i_0] [i_0] = arr_0 [i_0];
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) 1919684669))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((var_8) ? (((var_6) & (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (var_4)))) ? (var_2) : (((/* implicit */unsigned long long int) 670014175U))));
}
