/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246064
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
    var_19 = ((/* implicit */unsigned short) min(((+(var_7))), (((/* implicit */long long int) min(((-(var_2))), ((-(var_2))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) min((((/* implicit */int) (!(var_16)))), (max((arr_0 [i_1] [i_1]), (((/* implicit */int) var_13)))))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [3ULL] [i_2] [i_2]))) == (((unsigned int) ((unsigned int) var_18))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max(((+(var_4))), ((~(((((/* implicit */long long int) 3284980289U)) ^ (var_0)))))));
}
