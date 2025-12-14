/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193470
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
    var_13 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = (~(((/* implicit */int) max(((unsigned short)24), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]))))));
                arr_7 [i_1] = ((short) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551596ULL))))) : (var_0)));
                arr_8 [4] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) arr_2 [i_1])), (arr_4 [i_0])));
            }
        } 
    } 
}
