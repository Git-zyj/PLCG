/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34718
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
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] [(_Bool)1] |= arr_4 [i_1 - 2] [i_0 + 4];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_7 [i_1 - 2] [i_0 + 4]))))));
                            var_16 |= ((/* implicit */int) arr_3 [i_0] [i_0 + 3] [i_0 - 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_9);
    var_18 = ((/* implicit */int) var_4);
}
