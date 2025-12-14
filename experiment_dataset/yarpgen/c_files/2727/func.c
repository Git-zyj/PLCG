/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2727
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_0] [i_1 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))), (arr_1 [i_1 - 1] [i_1 - 1])));
                var_21 -= ((/* implicit */unsigned long long int) 1099511627775LL);
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((((var_6) ^ (arr_3 [i_2] [i_2]))) | ((~(arr_4 [i_2] [i_2] [i_2])))));
        arr_7 [6ULL] |= ((/* implicit */short) (+(((/* implicit */int) var_9))));
        arr_8 [i_2] = ((/* implicit */long long int) arr_6 [i_2]);
        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_3 [i_2] [i_2]))) % (min((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_2] [i_2])))));
    }
    var_25 = ((/* implicit */short) var_9);
}
