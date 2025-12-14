/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28012
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
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) max((9223372036854775807LL), (((/* implicit */long long int) 1704227161)))))));
                                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_0] [i_0 + 1] [i_0 - 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    var_12 ^= (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))));
                    arr_11 [i_2] [18] [i_2] &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_4))))));
                }
            } 
        } 
    } 
    var_13 |= ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) 0)))));
    var_14 |= var_1;
}
