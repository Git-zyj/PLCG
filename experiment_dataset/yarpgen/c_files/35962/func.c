/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35962
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
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_10 [3U] [8LL] [3U] [10LL] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((int) var_0);
                                var_19 |= ((/* implicit */unsigned short) 822527452);
                                var_20 = (unsigned short)1;
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_0] [i_1]);
                    arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    } 
}
