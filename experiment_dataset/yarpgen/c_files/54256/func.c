/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54256
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
    var_12 = ((long long int) (((-(((/* implicit */int) (short)30720)))) < (((int) 1919687748018339756LL))));
    var_13 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_1] &= (-(((/* implicit */int) ((short) (signed char)88))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)-89)), (((unsigned long long int) (signed char)-76))));
                }
            } 
        } 
    } 
}
