/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200303
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
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))));
    var_12 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((unsigned char) var_2)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0 - 2])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (short)-24269))))) ? (((/* implicit */int) max((((/* implicit */short) arr_0 [i_1 + 1] [i_0 + 1])), ((short)24276)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0 - 2])))))));
            var_15 -= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_4 [i_0 + 1])) << (((((((/* implicit */_Bool) (signed char)-77)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))))) - (3583239796877122458LL))))));
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-25205)))))), (((((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) var_2)))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-2034822036640347158LL))) + (19422LL))))))))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((long long int) (short)-24277)), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 2])) <= ((-2147483647 - 1))))))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_2] [6LL] = ((/* implicit */_Bool) (signed char)64);
                var_18 = ((/* implicit */long long int) (short)-24269);
            }
        } 
    } 
}
