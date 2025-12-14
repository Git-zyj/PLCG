/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22844
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_1 + 4] [i_2 - 1] [i_3] [i_1 + 4])), ((-(arr_9 [7]))))))));
                            var_13 += ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [0LL] [i_0]);
                            arr_10 [i_3] [i_3] = (unsigned short)38335;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */long long int) (((~(arr_1 [i_5 - 1]))) >= (((/* implicit */int) ((arr_1 [i_5 - 1]) >= (arr_1 [i_5 - 1]))))));
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (arr_6 [(short)3] [i_1 - 2] [i_1 - 2] [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_4] [i_5])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))))) : (((/* implicit */unsigned long long int) -1)))), (((/* implicit */unsigned long long int) arr_3 [i_5])))))));
                            arr_17 [i_0] [i_1 + 4] [i_1 + 4] [i_5 - 1] = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_2 [i_5 - 1])))));
                            arr_18 [i_5] [i_5] [i_0] [i_1 + 2] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [(short)7]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_2))));
}
