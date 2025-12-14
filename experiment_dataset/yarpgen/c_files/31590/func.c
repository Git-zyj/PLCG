/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31590
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
    var_14 = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37438))) : (var_0))) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    var_15 = ((/* implicit */int) max(((+(var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) (unsigned short)24576)), (3193225547U))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (~((-(-1033565521)))));
                    arr_10 [i_1] [3U] [(signed char)17] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_4 [i_1] [(signed char)17] [i_0 + 1]))))) ? (max((4294967295U), (((/* implicit */unsigned int) arr_4 [i_1] [(unsigned short)15] [i_0 + 1])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(arr_4 [i_1] [19] [(unsigned short)15]))))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_9))))));
}
