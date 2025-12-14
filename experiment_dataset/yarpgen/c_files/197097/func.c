/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197097
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
    var_19 = max((max((max((var_8), (var_10))), (min((var_4), (-997740705))))), (max((min((var_17), (var_16))), (-1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_2] = min((min((min((var_10), (var_5))), ((+(arr_6 [12] [2] [i_2]))))), (max((max((-21), (var_3))), (min((var_6), (arr_1 [i_0]))))));
                    var_20 = max((7), (-997740689));
                }
            } 
        } 
    } 
}
