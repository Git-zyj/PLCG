/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46733
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
    var_12 = ((/* implicit */unsigned char) (-((((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (9223372036854775808ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (var_10))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((unsigned short) 9223372036854775807ULL));
                    var_14 = min((((/* implicit */unsigned int) (~(arr_4 [i_1 + 1] [i_2] [i_2] [i_2])))), (((((/* implicit */_Bool) (~(arr_1 [(_Bool)1])))) ? (((/* implicit */unsigned int) arr_4 [i_0] [(unsigned char)2] [i_2] [i_1 + 2])) : (var_0))));
                }
            } 
        } 
    } 
}
