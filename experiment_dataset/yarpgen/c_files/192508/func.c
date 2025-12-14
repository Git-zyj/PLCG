/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192508
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
    var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (-3318282317370201069LL) : (var_8))), (141528380461193764LL)))) ? (var_10) : (var_10)))));
    var_13 = var_6;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) 8039491662048739400LL)) ? (-13LL) : (max((-12LL), (2384512201597799805LL))));
                    var_15 = ((/* implicit */long long int) (!(((arr_3 [i_0] [i_1] [i_2]) <= (arr_5 [i_0] [i_1] [i_2] [i_2])))));
                    var_16 = (~((+(((((-13LL) + (9223372036854775807LL))) >> (((arr_0 [i_0] [i_1]) + (5074370374094622409LL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
    {
        for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) -3045441658188940801LL)) ? (arr_11 [i_3] [i_4]) : (var_3)))) || (((/* implicit */_Bool) var_0))))));
                arr_13 [i_3] = max((max((arr_11 [i_3 - 2] [i_3 + 2]), (arr_11 [i_3 + 1] [i_3 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (var_1) : (var_2))))))));
            }
        } 
    } 
    var_18 = max((8576156435149137526LL), (-13LL));
}
