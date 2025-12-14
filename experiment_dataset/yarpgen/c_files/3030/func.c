/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3030
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) (-((-(arr_4 [i_0] [13] [i_1] [i_2])))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) % (((/* implicit */unsigned int) 2089399572))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_4 [i_0] [(signed char)21] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */int) max((min((var_11), (((_Bool) var_0)))), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_12))))))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((var_9), (((/* implicit */unsigned long long int) -2089399573)))) < (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) 2089399568))))))), (var_9)));
    var_20 = ((/* implicit */unsigned char) max((((int) ((var_12) & (8570933600157507877LL)))), ((-(((((/* implicit */_Bool) var_2)) ? (2089399564) : (((/* implicit */int) (unsigned short)6099))))))));
}
