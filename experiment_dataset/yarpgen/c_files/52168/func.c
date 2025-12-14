/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52168
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
    var_16 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65510))));
                var_17 = (((+(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) << (((((/* implicit */int) var_0)) + (17220))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (arr_4 [i_0] [i_0])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (short)242);
                    var_18 = ((/* implicit */unsigned long long int) (~(arr_4 [i_0 + 2] [i_0 + 2])));
                }
                for (int i_3 = 3; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        for (signed char i_5 = 4; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((_Bool) ((short) (unsigned short)46605)));
                                arr_19 [i_0] [i_0] [i_5] [i_0] [i_5] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_4 - 2] [i_5 - 2])) ? (((/* implicit */int) (short)-3200)) : (((/* implicit */int) arr_3 [i_1] [i_4 - 1] [i_1]))))) || (((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)65498), (((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5])) ? (var_11) : (((/* implicit */int) (unsigned short)43)))))))));
                                var_20 = ((/* implicit */short) max((var_20), ((short)29290)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_0] [i_3])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))));
                    arr_20 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_3 - 2] [i_0 + 4] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 + 3] [i_0 + 3] [i_3 + 3]))) : (arr_2 [i_3 - 1] [i_0 + 4] [i_3 - 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-15265)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6240)))))))));
                }
            }
        } 
    } 
    var_22 = (unsigned short)65511;
}
