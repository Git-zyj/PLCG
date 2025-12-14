/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230011
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
    var_18 *= var_15;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = min((((/* implicit */long long int) -2147483617)), (-5172966874298709732LL));
                arr_5 [i_1] = ((/* implicit */_Bool) ((arr_3 [i_1]) / (((/* implicit */long long int) -2147483617))));
                var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_1 [(_Bool)1])))))), (-2551314240524865375LL)));
                arr_6 [i_1] = ((2147483616) & (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_0 [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (5172966874298709732LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
}
