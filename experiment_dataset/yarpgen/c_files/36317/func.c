/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36317
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
    var_19 = ((/* implicit */short) max((min((min((var_5), (((/* implicit */int) var_6)))), (((/* implicit */int) var_18)))), (var_5)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((max((var_18), (((/* implicit */short) arr_5 [i_2 - 1])))), (((/* implicit */short) min((((/* implicit */unsigned char) arr_4 [i_2 + 3])), (arr_5 [i_2 + 3]))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) arr_5 [i_2 + 2]);
                    arr_9 [i_2] [i_2 - 4] [i_2] [i_2] = ((/* implicit */unsigned int) min((arr_4 [i_2 + 1]), (max((arr_4 [i_1]), (arr_4 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((((/* implicit */short) (signed char)-2)), ((short)-32761)));
                            var_22 *= ((/* implicit */short) arr_21 [i_5]);
                            var_23 |= ((/* implicit */short) min((((/* implicit */unsigned int) min((arr_19 [i_4 + 1] [i_4 + 1] [i_5] [i_4 + 1]), (((/* implicit */unsigned char) var_7))))), (min((var_14), (((/* implicit */unsigned int) arr_14 [i_4 + 1] [i_4 + 1]))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_3 + 2] [i_4 + 1] [i_3 + 3]))));
            }
        } 
    } 
}
