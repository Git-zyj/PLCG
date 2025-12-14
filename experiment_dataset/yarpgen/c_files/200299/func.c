/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200299
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-2380912687856796471LL), (((/* implicit */long long int) (_Bool)1))))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), ((~(-2380912687856796469LL))))) : (((/* implicit */long long int) (-(max((var_13), (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)1)), (2380912687856796470LL)));
                var_19 -= ((/* implicit */short) (((-(((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_0])))))) % (((((/* implicit */int) (!((_Bool)0)))) + (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)10))))))));
            }
        } 
    } 
}
