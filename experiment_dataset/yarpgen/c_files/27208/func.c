/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27208
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [(unsigned char)13] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 + 1])), (min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_0 + 2])), (arr_3 [i_0]))))) / (arr_3 [i_0])));
                            arr_13 [i_0] [i_0 + 1] [i_1 - 1] [(unsigned short)3] [i_0] = ((/* implicit */_Bool) (~(max((arr_6 [i_1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 535822336)) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 1])) : (((/* implicit */int) var_2)))))))));
                        }
                    } 
                } 
                arr_14 [i_1 + 1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-31229)), (((((/* implicit */long long int) ((/* implicit */int) (short)-22590))) / (7170489576657786489LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1])) && (((/* implicit */_Bool) arr_11 [i_0 - 2] [i_1 - 1] [i_0 - 2] [i_1 - 1]))))) : (((/* implicit */int) arr_9 [i_1 - 1] [i_0] [i_0 - 1]))));
                arr_15 [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [9U] [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) (short)-22581);
    var_13 = ((/* implicit */_Bool) max((16614633633370221263ULL), (((/* implicit */unsigned long long int) var_1))));
}
