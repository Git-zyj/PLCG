/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34334
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
    var_10 = ((((/* implicit */_Bool) ((((var_7) & (9008491386667186353LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39140)))))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (min((((arr_8 [i_1] [i_2 + 1] [i_0]) / (var_7))), (((/* implicit */long long int) var_1))))));
                    var_12 ^= ((((/* implicit */_Bool) max((arr_8 [i_1 - 1] [i_2 + 1] [i_0]), (arr_8 [i_1 + 1] [i_2 + 3] [i_0])))) ? (((((arr_8 [i_1 + 1] [i_2 + 1] [i_0]) + (9223372036854775807LL))) >> (((3337992394925486754LL) - (3337992394925486750LL))))) : (((((/* implicit */_Bool) -1572197273398581035LL)) ? (var_6) : (arr_8 [i_1 - 1] [i_2 + 2] [i_0]))));
                    arr_9 [i_1] = (+(max((arr_5 [i_1] [i_1 - 1]), (arr_5 [i_1] [i_1 - 1]))));
                }
            } 
        } 
    } 
}
