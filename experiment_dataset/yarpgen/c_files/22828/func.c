/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22828
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
    var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */_Bool) arr_3 [i_0]);
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((arr_3 [i_0]) != (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((var_11) ? (-8186582119566653392LL) : (((/* implicit */long long int) 1606786416))))))))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) | (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (((arr_0 [i_0]) << (((4263516831873738719LL) - (4263516831873738672LL)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))));
    var_24 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                var_25 += ((/* implicit */signed char) max((((/* implicit */long long int) ((_Bool) arr_10 [i_2]))), (arr_13 [i_2 - 1] [0LL] [i_2])));
                var_26 = (-(((/* implicit */int) ((unsigned char) 2797950475129001445LL))));
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(signed char)0])) ? (max((min((1454602701292125972LL), (((/* implicit */long long int) var_19)))), (((/* implicit */long long int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_13 [i_2] [18LL] [18])) ? (arr_13 [i_2] [4LL] [i_3]) : (arr_13 [i_2] [(short)4] [i_2]))))))));
            }
        } 
    } 
}
