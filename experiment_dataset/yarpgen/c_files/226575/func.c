/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226575
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 ^= 6893976830227487682ULL;
                arr_5 [i_1] [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) min((var_5), (arr_0 [i_0] [i_1])))) ? (var_5) : (((var_5) / (arr_4 [i_1])))));
                var_15 += (+(min((min((var_7), (var_4))), (var_2))));
                arr_6 [1ULL] [i_1] = ((unsigned long long int) min((var_5), ((-(arr_1 [i_0])))));
            }
        } 
    } 
    var_16 &= var_10;
}
