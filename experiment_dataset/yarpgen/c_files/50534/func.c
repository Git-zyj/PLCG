/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50534
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((var_1) + (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29323))))))))))));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) max((((/* implicit */long long int) var_8)), ((~(max((((/* implicit */long long int) (_Bool)1)), (137438953471LL))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) var_6);
                    var_13 = ((/* implicit */_Bool) min((var_13), (((_Bool) min((arr_0 [i_1]), (arr_0 [i_2]))))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (137438953470LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 281670426U)) : (var_6)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_3)))) || (((/* implicit */_Bool) (short)32767))))));
}
