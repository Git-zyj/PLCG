/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25421
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [(unsigned short)6] [(signed char)7] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        arr_15 [i_3] [i_2] [i_2 + 2] [i_1] [i_0] = ((unsigned short) arr_13 [i_0] [i_1] [i_2 - 2] [i_3] [i_1] [i_2 - 2]);
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_2 - 1] [i_3] [i_2 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))) : (2147483647U)))) : (min((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)20154)) : (((/* implicit */int) (_Bool)1))))))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_19 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8843504123927159582ULL))));
                        var_20 = ((min((arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), (arr_11 [i_2 - 1] [i_2 - 2] [i_2 + 3] [i_2 + 2]))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (short)30600))))) ? (8166264311930725201ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_2))))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (unsigned char)89))));
                        var_22 ^= ((/* implicit */short) (unsigned short)0);
                    }
                    var_23 ^= ((/* implicit */int) var_7);
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned short) (+(7248619181244727237ULL)));
    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_4))));
}
