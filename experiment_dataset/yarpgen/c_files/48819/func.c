/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48819
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [(_Bool)1] [(unsigned char)14] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((1803221234) * (((/* implicit */int) (_Bool)1))))), (2257021176827062053ULL))), (((/* implicit */unsigned long long int) ((var_2) ? (arr_4 [i_2 + 2] [i_2 + 2] [i_3] [i_3 + 2]) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [0] [i_2] [i_3])) < (((/* implicit */int) (signed char)32))))))))));
                            arr_11 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((arr_7 [i_0] [i_1] [i_2 + 2] [i_2 + 2]) >= (((/* implicit */int) arr_3 [i_1] [i_2 - 1] [i_3 - 1])))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((((arr_0 [i_0]) + (2147483647))) << (((((arr_0 [i_0]) + (464541161))) - (31))));
                arr_13 [i_0] [i_1] &= ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-33))));
}
