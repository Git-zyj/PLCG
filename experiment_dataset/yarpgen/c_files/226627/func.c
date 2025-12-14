/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226627
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_0))))) & (((var_2) >> (((var_1) - (17542907483243427253ULL)))))))), (var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_2 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [2U]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))));
                var_15 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) % (arr_3 [i_0] [i_1] [4U])))) && (((/* implicit */_Bool) ((arr_1 [(signed char)5]) << (((var_0) - (3844845015827318607ULL))))))))), (((long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))) - (((long long int) ((_Bool) var_3)))));
    var_17 = ((/* implicit */long long int) var_4);
}
