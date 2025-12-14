/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225735
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)23] [i_1] [24ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_15))))) : (((unsigned int) var_6))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((long long int) var_0)));
                    var_18 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_3 [(signed char)21] [i_1 - 1]))))));
                    arr_10 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_4 [i_1 - 1]), (arr_4 [i_1 + 2])))), (((long long int) (short)1008))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) var_15);
}
