/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226633
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [(short)11] [i_2] [(signed char)0] [i_3] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0]);
                            var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) ((arr_3 [i_0] [i_1 - 1] [i_1 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1 - 1])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_18 |= arr_2 [i_1 - 1] [i_1 - 1];
                    arr_12 [i_0] [i_4] = ((/* implicit */unsigned int) ((arr_8 [i_4] [i_4] [i_1] [i_1 - 1] [i_1] [i_0]) != (((/* implicit */int) (unsigned char)0))));
                    arr_13 [i_4] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((_Bool) var_10))), ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_15))));
}
