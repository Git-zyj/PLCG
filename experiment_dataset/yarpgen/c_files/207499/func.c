/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207499
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) var_7);
        arr_2 [i_0 - 1] = ((arr_0 [i_0] [i_0 - 1]) >= (((/* implicit */long long int) ((/* implicit */int) var_2))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) var_14)), (var_9))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (signed char i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) var_3);
                        arr_15 [i_1 + 1] [i_2] [i_2] [i_4 + 1] = ((/* implicit */signed char) ((((((var_7) + (9223372036854775807LL))) << (((arr_1 [i_1 - 1]) - (1484639414U))))) >= (((((/* implicit */_Bool) var_0)) ? (var_13) : (arr_6 [i_3])))));
                    }
                } 
            } 
        } 
        var_19 = ((long long int) max((((/* implicit */long long int) 2569611184U)), (-5290501955176772002LL)));
        arr_16 [i_1 + 1] = (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_15), ((_Bool)1))))) : (var_12))));
        var_20 = min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) 2251799813685184LL)) || (((/* implicit */_Bool) ((arr_4 [i_1]) ^ (var_13))))))));
    }
    var_21 = ((/* implicit */long long int) var_0);
    var_22 = ((/* implicit */unsigned short) -2655890459227325560LL);
}
