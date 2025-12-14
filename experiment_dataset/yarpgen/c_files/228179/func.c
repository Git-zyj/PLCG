/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228179
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
    var_15 = ((/* implicit */unsigned int) ((var_12) && (((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) (short)5039)), (0U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) var_10);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_3] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_1 [i_3])))) / (((/* implicit */int) var_2))))) | (arr_3 [i_0] [i_0] [i_2])));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_6))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned short) var_8);
                            var_18 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_1] [i_0] [i_5]) : (arr_10 [i_4] [i_1] [i_4] [i_5]))));
                        }
                    } 
                } 
                var_19 = (-9223372036854775807LL - 1LL);
            }
        } 
    } 
}
