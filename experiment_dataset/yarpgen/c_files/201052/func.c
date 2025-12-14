/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201052
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_0)))) - (((/* implicit */int) (unsigned short)54880))))) ? ((-(arr_2 [i_1 - 1] [i_1 - 2] [i_1 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)54880)) : (((/* implicit */int) (signed char)-73))))))))));
                var_17 = ((/* implicit */unsigned char) -1);
                var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)16384)), ((-(((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_0]))))));
                arr_5 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_1]);
                var_19 -= ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1])) < (((/* implicit */int) (signed char)73))));
            }
        } 
    } 
    var_20 += ((int) var_14);
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_21 += (~(var_9));
                var_22 = ((/* implicit */int) arr_8 [i_2] [4ULL]);
            }
        } 
    } 
}
