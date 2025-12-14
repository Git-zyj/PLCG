/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247041
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
    var_16 = ((_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-2717))));
    var_17 = var_14;
    var_18 = ((/* implicit */_Bool) -5469347199246013562LL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((long long int) (-(min((arr_0 [i_2]), (arr_4 [i_2] [i_1 - 1] [i_0])))));
                    var_20 = ((/* implicit */long long int) min((arr_6 [i_1 - 2] [i_1 - 2] [i_0]), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_0] [i_0]))) != (var_9)))));
                    var_21 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29149))))) ? (arr_7 [i_0] [i_0]) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (9223372036854775807LL))))));
                }
            } 
        } 
    } 
}
