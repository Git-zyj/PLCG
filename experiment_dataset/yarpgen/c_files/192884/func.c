/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192884
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
    var_13 -= ((/* implicit */long long int) max((((/* implicit */unsigned short) var_6)), (var_11)));
    var_14 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [(short)14] |= ((/* implicit */unsigned char) max((arr_8 [i_2 - 1]), (((/* implicit */unsigned long long int) (-(1626748875))))));
                    var_15 = ((/* implicit */signed char) var_5);
                    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_3 [i_1] [i_1 - 2] [i_2]), ((unsigned char)205))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? ((+(arr_10 [i_3 - 1]))) : (arr_10 [i_3 - 1])));
        arr_13 [i_3 + 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3 + 4]))))), (max((var_12), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)183)))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            {
                var_17 |= max(((~(arr_15 [i_4]))), (((/* implicit */unsigned long long int) 3011931077U)));
                var_18 = ((/* implicit */long long int) (signed char)(-127 - 1));
            }
        } 
    } 
}
