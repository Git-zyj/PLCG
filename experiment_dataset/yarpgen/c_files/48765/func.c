/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48765
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
    var_10 |= ((/* implicit */_Bool) ((((/* implicit */int) ((short) -1632390355))) | (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0 + 2] [i_0] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (short)3431)))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (1136061393))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [(short)10]))))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) 1136061393)))));
                            arr_13 [i_1] [i_1] = min((((/* implicit */int) min((arr_0 [i_2 + 1] [i_3]), (arr_10 [i_1 - 1] [i_2 + 3] [i_2 + 3] [i_0 - 2] [i_2 - 1])))), (min((min((arr_3 [i_2 + 2] [i_1]), (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) ((signed char) var_5))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (int i_5 = 4; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */short) (((~(arr_3 [i_0 - 3] [i_1 - 1]))) / (((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1 - 1])) ? (arr_3 [i_0 + 2] [i_1 - 1]) : (arr_3 [i_0 - 1] [i_1 - 2])))));
                            arr_20 [i_1] [i_4] [i_1] [(unsigned char)3] [i_1] [i_1] = ((/* implicit */signed char) (-(arr_8 [i_0] [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_0);
}
