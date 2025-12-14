/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247408
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (min((((/* implicit */unsigned long long int) min((2500278387U), (var_9)))), (((var_14) / (var_8)))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] |= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_0]);
                        var_21 = ((/* implicit */unsigned short) var_2);
                    }
                    var_22 -= ((/* implicit */long long int) max((max((arr_6 [i_0] [i_2 - 2] [i_1 - 4] [i_1]), (arr_6 [i_0] [i_2 + 1] [i_1 + 1] [(unsigned short)4]))), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-6)) <= (((/* implicit */int) arr_6 [(signed char)10] [i_2 + 1] [i_1 + 1] [i_0])))))));
                    arr_13 [i_0] [i_1] = max((arr_0 [i_1 + 4] [i_1]), (((((/* implicit */_Bool) arr_0 [i_1 - 4] [i_0])) ? (arr_0 [i_1 - 3] [i_1 - 3]) : (arr_0 [i_1 + 1] [i_1 + 1]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_14);
}
