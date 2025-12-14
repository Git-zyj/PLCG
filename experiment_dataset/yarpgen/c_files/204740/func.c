/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204740
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
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_14)), ((-(((/* implicit */int) (short)-9623)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_22 = ((max((((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_0 + 1])), (((((/* implicit */unsigned long long int) var_1)) / (18446744073709551598ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)11383)) : (((/* implicit */int) (unsigned char)7))))));
                }
            } 
        } 
    } 
}
