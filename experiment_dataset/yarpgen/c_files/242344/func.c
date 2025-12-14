/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242344
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
    var_11 -= (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), ((short)-31620))))) : (105639115U))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned short)65520))))), ((-(var_3)))))) ? (((arr_0 [i_0] [i_1]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7041)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65509)))))))) : (max((min((((/* implicit */long long int) var_5)), (var_1))), ((-(arr_0 [i_0] [i_2]))))));
                    arr_9 [i_2] [i_1] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (var_1)))), (-5328515326561805715LL)))) : ((-(((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
    {
        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            {
                arr_15 [i_3] [(unsigned short)11] = ((((((/* implicit */_Bool) ((arr_13 [i_3] [i_4 - 1]) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((~(var_1))) : ((~(arr_0 [i_3] [i_3]))))) & (((max((((/* implicit */long long int) arr_10 [i_3] [i_4])), (2225598422990515430LL))) ^ (((-2225598422990515430LL) ^ (arr_1 [i_3]))))));
                arr_16 [i_3 - 1] [i_3 - 1] |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65497)) ? (max((4203841074U), (((/* implicit */unsigned int) (unsigned short)65522)))) : ((~(var_3))))));
                var_14 &= arr_14 [i_3] [i_4 - 1];
                arr_17 [i_3 + 1] [i_3 + 1] = ((/* implicit */int) (+(-2225598422990515411LL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (arr_20 [i_5]) : (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1602103299U)) : (arr_20 [i_5])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (min((var_1), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22952))))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_3)) : (var_1)))), ((-(arr_18 [i_6]))))))))));
                arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (arr_19 [i_5])))))));
            }
        } 
    } 
}
