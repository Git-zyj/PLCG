/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19645
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
    for (int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_20 &= ((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (((((/* implicit */_Bool) arr_11 [i_1] [i_0])) ? (-2147483643) : (((/* implicit */int) var_16))))));
                            var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) 3451057280U)) + (9613916383571676537ULL))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */long long int) 1518164936U)) : (var_8)))) ? (arr_4 [i_1] [i_1]) : ((~(((/* implicit */int) var_12))))))) ? (var_18) : (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4274475898U)))) ? (((/* implicit */unsigned int) max((var_4), (arr_5 [i_0] [i_0])))) : (((3127076955U) >> (((9613916383571676538ULL) - (9613916383571676507ULL)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_12);
}
