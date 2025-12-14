/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31755
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((((arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
                arr_5 [(unsigned short)13] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (((arr_0 [i_1 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))))) : (min((((/* implicit */unsigned long long int) 3731870193U)), (16661282937906935752ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-89)), ((unsigned short)4)))), (arr_2 [17] [i_1] [i_1])))));
                var_19 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_17)), (var_5)))) ? ((+(((/* implicit */int) var_0)))) : (max((((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_4))))), ((+(((/* implicit */int) (signed char)-62))))))));
}
