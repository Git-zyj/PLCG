/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24639
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    var_11 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) min(((unsigned short)14), (((/* implicit */unsigned short) var_2))))) ? (1815355834146659369ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_0))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] |= ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1] [i_2 + 2])))));
                    var_12 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0 + 1] [i_0 + 3] [i_0]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_9))));
    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
}
