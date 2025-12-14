/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52235
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
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)9] &= ((/* implicit */unsigned char) (~((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17062))) ^ (4U)))))));
                var_15 &= ((/* implicit */long long int) (~((~((~(((/* implicit */int) (unsigned short)48479))))))));
                arr_6 [0U] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48479))) / (var_2)))))))));
                arr_7 [15U] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_4 [i_0 + 2])))) >= (((/* implicit */int) ((((/* implicit */long long int) 2U)) == (-1LL)))))))) * ((~((~(36028659580010496LL))))));
                var_16 = ((((/* implicit */long long int) (~((~(arr_3 [8] [10] [i_1])))))) * ((~(((var_5) % (((/* implicit */long long int) var_1)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((~((~(2340472613U))))) >> (((((((((/* implicit */unsigned int) 426840058)) ^ (3749457850U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))) - (33U))))))));
}
