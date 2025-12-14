/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213847
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
    var_11 = ((/* implicit */unsigned long long int) var_1);
    var_12 &= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned char)15)) || (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8674621200013510057LL)))))) || (((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) var_10);
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((var_4), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_10))))) ? (max((((/* implicit */unsigned long long int) (short)-29655)), (447390032407162968ULL))) : (((/* implicit */unsigned long long int) 2199023255551LL))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)61440)) ? (arr_5 [i_1 + 2] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -2728243147085748806LL)) ? (arr_3 [i_1 - 1]) : (2728243147085748806LL)))));
                }
            } 
        } 
    } 
}
