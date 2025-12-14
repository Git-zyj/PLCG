/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24284
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
    var_11 = ((/* implicit */unsigned short) min((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)(-127 - 1))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) > (var_0)))) | ((-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) (_Bool)1));
                arr_7 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) var_8))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (var_4)))), (6589553761941066318ULL)))));
                arr_8 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)164))));
                arr_9 [i_0] = ((/* implicit */_Bool) ((signed char) -2059986194));
            }
        } 
    } 
}
