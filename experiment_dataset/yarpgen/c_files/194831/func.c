/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194831
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = (((!(((/* implicit */_Bool) arr_8 [i_1] [i_1 + 2] [i_1])))) && (max((((_Bool) (unsigned short)46150)), (((_Bool) 2135023213U)))));
                    var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (-576460752303423488LL) : (9223372036854775788LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [15LL] [i_0])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_16);
    var_23 = ((/* implicit */_Bool) var_5);
}
