/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223902
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
    var_10 = ((/* implicit */unsigned char) max((var_10), ((unsigned char)243)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((unsigned char) arr_1 [i_0 + 3]))));
        arr_4 [12] |= ((/* implicit */signed char) var_3);
        var_12 = ((/* implicit */signed char) (unsigned char)36);
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1]))) / (((((/* implicit */_Bool) 2304328595U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (1990638701U)))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_6 [i_0]))));
                    var_15 += ((/* implicit */short) ((int) arr_2 [i_1] [i_1 - 3]));
                    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                }
            } 
        } 
    }
}
