/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213697
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned short)3] &= ((/* implicit */_Bool) ((unsigned long long int) var_6));
        arr_3 [i_0] = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) ((1660540488U) != (((/* implicit */unsigned int) (-2147483647 - 1)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2]))) - (var_10))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((long long int) var_1))) ? (max((-7323006383906916827LL), (arr_7 [(unsigned short)9] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                arr_8 [i_1] = ((unsigned short) (-(((/* implicit */int) arr_6 [i_1] [i_1] [i_2]))));
            }
        } 
    } 
}
