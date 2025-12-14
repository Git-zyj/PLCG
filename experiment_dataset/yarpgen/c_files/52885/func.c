/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52885
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [2U] [i_1] [i_0] [2U])) ? (((/* implicit */unsigned long long int) 58720256)) : (((arr_2 [i_2 + 1] [i_2 + 2] [i_2]) << (((arr_1 [i_2 + 3]) - (2151468998U))))))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) var_1);
                    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_0] [i_2 + 2] [i_2 + 1] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (short)240))))))) == (((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 3] [i_2 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8)))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : (-3649217865429850331LL)))) || (((/* implicit */_Bool) ((signed char) var_13))))))));
}
