/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26882
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
    var_12 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3958570301897121831LL)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (signed char)-126))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)33253))))) : ((-9223372036854775807LL - 1LL)));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) (-2147483647 - 1)))) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) (+((+(var_5)))));
                    arr_8 [2] [i_1] [i_2 - 1] |= ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_1 - 1] [i_1] [i_2 - 1])))) % (((((/* implicit */_Bool) arr_6 [i_1 + 1] [(unsigned short)1] [i_2 - 1])) ? (arr_6 [i_1 + 1] [i_2] [i_2 - 1]) : (arr_6 [i_1 - 1] [i_1] [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23763))) : (3592363034U))), (max((2027960843U), (3979174983U))))) - (23738U)))));
}
