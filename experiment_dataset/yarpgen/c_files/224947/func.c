/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224947
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0]))))) + (((((((/* implicit */int) var_9)) < (((/* implicit */int) var_4)))) ? (((arr_1 [i_1] [(short)9]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_5)))) * (((/* implicit */int) arr_4 [i_0]))))) ^ (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) - (var_12))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))));
                arr_6 [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (var_0))) <= (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_12)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((short) min((((/* implicit */int) arr_9 [i_0])), (var_0))));
                            arr_12 [i_0] [i_1] [i_1] &= ((/* implicit */signed char) ((int) max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) ((var_0) != (((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (short i_4 = 2; i_4 < 12; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? ((-(arr_0 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_4 + 1] [i_5] [i_5] [i_4 + 1])), (arr_14 [(_Bool)1])))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((((arr_9 [i_4 + 1]) ? (((/* implicit */int) arr_9 [i_4 - 2])) : (((/* implicit */int) arr_3 [i_4 + 1] [i_4 + 1])))) >= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1]))))))));
                var_22 = ((/* implicit */_Bool) var_2);
                var_23 = ((((((/* implicit */int) arr_10 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 - 2])) >= (((/* implicit */int) arr_3 [i_4] [i_4])))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_8))))));
            }
        } 
    } 
}
