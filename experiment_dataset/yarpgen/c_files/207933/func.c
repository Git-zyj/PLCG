/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207933
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
    var_18 = ((/* implicit */unsigned short) (unsigned char)66);
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((var_14) << (((var_4) - (2766860995U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1U)))))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((-2382802175495221636LL), (((/* implicit */long long int) (unsigned short)65528))))) / (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967282U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))), (var_11)))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11016)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (16U)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [14] = ((/* implicit */_Bool) arr_3 [i_0 - 1] [24U] [24U]);
                arr_6 [i_1] |= ((/* implicit */unsigned short) (((~(var_4))) - (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                var_22 ^= ((max((min((var_14), (((/* implicit */unsigned int) (short)-32486)))), (max((((/* implicit */unsigned int) arr_0 [i_0])), (var_4))))) - ((+((+(2386666577U))))));
                var_23 = ((/* implicit */unsigned long long int) (((-(arr_2 [(_Bool)1]))) / (-1909716897)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0 + 1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_11 [i_0 - 1] [i_0 - 1] [i_1] [5U] [i_3] [5U])), ((unsigned short)54520))))));
                            arr_13 [i_0] [0] [i_2] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_0 - 1] [(unsigned short)11] [i_3])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned int) -1272469770)) : (arr_3 [i_0] [i_0] [21]))) - (((/* implicit */unsigned int) var_13))))) : ((~(arr_7 [i_0] [i_2] [i_3])))));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)54517)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
