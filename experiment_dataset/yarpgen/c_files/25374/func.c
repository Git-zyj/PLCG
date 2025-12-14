/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25374
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
    var_12 = ((((/* implicit */long long int) ((unsigned int) (_Bool)1))) % (4992227477346901442LL));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */int) ((arr_0 [i_0] [i_0]) < (1044480))))))) ? (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))) : (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) arr_0 [i_0] [i_0]))), ((signed char)15))))));
        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((((var_4) | (((/* implicit */long long int) arr_0 [i_0] [i_0])))) & (((/* implicit */long long int) 1316283488)))) : (((/* implicit */long long int) var_9))));
        var_15 &= ((((/* implicit */long long int) ((/* implicit */int) var_0))) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) : (-4992227477346901442LL))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_16 = arr_1 [i_1];
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 2224105207U)) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((((var_11) | (((/* implicit */long long int) arr_9 [i_2] [i_2] [i_2])))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_2])))))), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_4)))))))))));
                var_19 = ((/* implicit */unsigned long long int) (-(((((_Bool) (signed char)15)) ? (-31LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 23LL)) ? (1325964607) : (((/* implicit */int) arr_6 [i_2])))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (_Bool)1);
}
