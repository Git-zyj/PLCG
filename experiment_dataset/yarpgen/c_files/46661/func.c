/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46661
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((-1LL) <= (((/* implicit */long long int) 2140315945)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 += max((((/* implicit */unsigned int) min((((/* implicit */int) ((arr_5 [i_0]) >= (arr_5 [i_0])))), (arr_0 [i_0 + 1] [i_1])))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1] [19LL])) > (1515706351947148501LL))))) + (max((3247676420U), (560515784U))))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((((~(max((arr_5 [i_0]), (((/* implicit */long long int) arr_6 [i_0 + 1] [i_1])))))) + (9223372036854775807LL))) << ((((~(arr_6 [i_0 - 2] [i_0 + 1]))) - (55905626U))))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_0 - 1]), (((/* implicit */long long int) (!((_Bool)0))))))) && (((/* implicit */_Bool) ((((arr_5 [i_0 - 1]) + (9223372036854775807LL))) << (((max((arr_0 [i_0] [5U]), (((/* implicit */int) (signed char)33)))) - (1307501907))))))));
                var_15 = ((/* implicit */long long int) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1767877676U))))) << (((((((/* implicit */_Bool) (signed char)15)) ? (1048575LL) : (((/* implicit */long long int) 714810424U)))) - (1048558LL))))));
                arr_7 [i_0 - 1] = arr_0 [i_0 - 2] [i_1];
            }
        } 
    } 
    var_16 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(min((var_3), (var_3))))))));
}
