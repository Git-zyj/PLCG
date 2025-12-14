/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192274
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
    var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) min((var_1), (((/* implicit */unsigned short) var_7))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) (+((+(5LL)))));
                var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))), (((var_10) ? ((~(arr_4 [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65528)))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(signed char)9]))) : (max((((/* implicit */unsigned int) var_8)), (var_5)))))) ? (((/* implicit */int) arr_3 [14] [i_1])) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_1])), (var_4)))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) arr_3 [i_1] [(_Bool)1]))))));
            }
        } 
    } 
}
