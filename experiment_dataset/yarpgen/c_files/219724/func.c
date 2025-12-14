/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219724
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    var_15 = ((/* implicit */int) min((((((unsigned long long int) (_Bool)1)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) var_13))));
    var_16 = ((/* implicit */unsigned long long int) ((var_4) <= (var_9)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24576)) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) arr_0 [i_1] [i_0 + 2]))))), (arr_5 [i_1 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) 8539506277830887254ULL)) || (((/* implicit */_Bool) (short)5603)))))));
                var_17 += ((/* implicit */short) 12682740398130688686ULL);
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) var_4)) <= (var_11))))))) || (((((/* implicit */_Bool) 5764003675578862914ULL)) || (((/* implicit */_Bool) 5764003675578862937ULL))))));
            }
        } 
    } 
}
