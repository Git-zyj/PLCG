/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241242
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
    var_10 = ((/* implicit */_Bool) var_3);
    var_11 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_1])), (var_8)))) : ((+(((/* implicit */int) arr_0 [i_0] [i_1]))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */int) arr_0 [i_0] [i_0])), (602012940))), (var_5)));
                var_12 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (-8162923546967112521LL)))))))));
                var_13 = ((/* implicit */long long int) arr_4 [i_0]);
                var_14 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((((-2147483647 - 1)) + (((/* implicit */int) (_Bool)0)))) & ((+(var_7)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40430)) >> (((var_5) - (1024618030)))))), (arr_1 [i_1])))));
            }
        } 
    } 
}
