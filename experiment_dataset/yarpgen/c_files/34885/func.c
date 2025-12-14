/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34885
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
                arr_6 [i_1] [i_0 - 2] = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_0 + 2])))) <= (min((((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_1 - 1])), (var_8))));
                arr_7 [i_1] [(short)13] [i_1] = ((/* implicit */unsigned int) (((+(min((((/* implicit */long long int) (short)8192)), ((-9223372036854775807LL - 1LL)))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) var_8))) == (min((var_4), (((/* implicit */int) var_10))))))))));
                arr_8 [i_1] = ((/* implicit */_Bool) 0U);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_0);
    var_13 = ((/* implicit */int) max((((/* implicit */short) var_3)), (var_5)));
}
