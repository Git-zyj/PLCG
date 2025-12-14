/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211555
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) 536870896U);
                arr_5 [i_1 - 2] = ((/* implicit */unsigned long long int) min((8380416U), (((/* implicit */unsigned int) (signed char)110))));
                arr_6 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)40634)) : (((/* implicit */int) (signed char)65))))))), (max((((/* implicit */unsigned int) arr_2 [i_0 - 4] [i_0] [i_0])), (3251410124U)))));
                arr_7 [i_0 + 1] [i_0 + 2] [i_1] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned short) (signed char)-95)), (arr_0 [i_1 - 1]))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) 780205336820073877ULL);
    var_12 = ((/* implicit */signed char) (~(max((((/* implicit */int) min(((signed char)59), ((signed char)65)))), (((((/* implicit */int) (signed char)59)) << (((/* implicit */int) var_10))))))));
}
