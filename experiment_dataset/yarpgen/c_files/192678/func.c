/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192678
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) -4024981974732331313LL);
                    var_13 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_2)))))) ? (((/* implicit */long long int) max((((int) 5409695952367061858LL)), (arr_4 [i_0 - 1] [i_0 + 3] [i_1 + 1])))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17)) ? (var_2) : (((/* implicit */int) var_4))))), (arr_2 [i_1 + 1])))));
                    var_14 = ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_4), ((!(((/* implicit */_Bool) max((-5409695952367061859LL), (var_8))))))));
}
