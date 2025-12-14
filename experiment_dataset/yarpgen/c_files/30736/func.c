/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30736
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max((var_3), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))))))))));
    var_13 = var_4;
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) max((var_8), ((unsigned short)61059)))) ? (var_2) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -1)) : (var_2))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_4)) == (min((((/* implicit */unsigned long long int) 2278194270U)), (10313021414690252241ULL)))));
                    arr_10 [i_0] = var_9;
                    arr_11 [i_0 - 4] [i_0 - 4] [i_1] [i_0] = ((/* implicit */signed char) (+((~(max((((/* implicit */unsigned int) var_0)), (arr_5 [i_0] [i_1 + 1] [i_0])))))));
                }
            } 
        } 
    } 
}
