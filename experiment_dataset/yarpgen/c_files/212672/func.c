/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212672
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
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    var_12 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = arr_4 [i_0] [i_0] [i_0];
                var_14 = ((/* implicit */short) ((((/* implicit */int) (signed char)63)) << (((((/* implicit */int) (signed char)65)) - (43)))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)76))));
            }
        } 
    } 
    var_15 = ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)68), ((signed char)-87))))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2945976101U)))));
}
