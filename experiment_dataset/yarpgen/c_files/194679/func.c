/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194679
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
    var_11 = ((/* implicit */long long int) (((~(((/* implicit */int) var_0)))) % (((/* implicit */int) var_0))));
    var_12 = ((/* implicit */_Bool) var_3);
    var_13 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775796LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (1859937328641922641LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_1 [i_0 - 1]) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (arr_3 [i_0] [i_1]))))))))));
                    arr_8 [i_0] [(signed char)2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_1])) < (((/* implicit */int) arr_0 [i_0])))) || ((!(((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_2])), (var_9))))))));
                }
            } 
        } 
    } 
}
