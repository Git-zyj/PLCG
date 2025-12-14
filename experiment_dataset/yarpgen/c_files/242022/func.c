/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242022
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned short)6] [i_1 + 2] [12LL] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), (arr_5 [i_2 + 1] [i_0])))) + (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_3)))));
                    var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((unsigned int) 18446744073709551603ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                    arr_10 [i_1] = (+(((((((/* implicit */int) arr_1 [i_0])) << (((arr_3 [i_0]) - (1484420592U))))) >> (((max((19ULL), (((/* implicit */unsigned long long int) 3414798678U)))) - (3414798672ULL))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)171)) ? (((long long int) 18446744073709551598ULL)) : (((/* implicit */long long int) (-(var_1)))))) + (((/* implicit */long long int) (~(var_1))))));
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */short) min((18446744073709551598ULL), (((/* implicit */unsigned long long int) ((int) arr_14 [i_4 - 1] [4])))));
                var_15 &= ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)0));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_7);
}
