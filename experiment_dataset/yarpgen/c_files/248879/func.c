/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248879
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
    var_11 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) var_10);
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) * (max((3ULL), (((/* implicit */unsigned long long int) var_6)))))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)44830)) ? (arr_3 [i_1] [i_1] [i_1]) : (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))));
                    var_14 &= ((/* implicit */short) ((int) 18ULL));
                    arr_8 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */long long int) 201759646);
                }
            } 
        } 
    } 
}
