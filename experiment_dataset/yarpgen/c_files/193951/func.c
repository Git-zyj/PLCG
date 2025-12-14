/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193951
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
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */long long int) -904189852)))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((min((arr_4 [i_0] [i_0]), (((/* implicit */long long int) arr_3 [5LL] [5LL])))) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0 - 1])))))) << ((((~(((arr_0 [i_1]) & (((/* implicit */unsigned long long int) -904189852)))))) - (15595570396047333265ULL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(904189851))), (min((-904189851), (-904189851)))))) ? (-904189858) : (-904189880)));
    var_19 = ((/* implicit */signed char) 904189851);
    var_20 = ((/* implicit */_Bool) min((((var_12) ? (((((/* implicit */_Bool) -904189851)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) & (-904189849)))))), (var_0)));
    var_21 = ((/* implicit */unsigned short) var_13);
}
