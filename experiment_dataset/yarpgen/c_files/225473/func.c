/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225473
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
    var_13 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((var_0), (((/* implicit */long long int) -984802089))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0] = ((/* implicit */_Bool) 6533462793528390337LL);
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (signed char)126);
                            }
                        } 
                    } 
                    arr_20 [i_0] |= ((/* implicit */long long int) (~((~(var_11)))));
                    arr_21 [i_1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 426870370)) || (((/* implicit */_Bool) arr_4 [i_0])))));
                }
            } 
        } 
    } 
}
