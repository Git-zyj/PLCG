/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208043
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [(signed char)10] [i_1] [i_2]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-82))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        var_21 = ((/* implicit */unsigned char) (+((~(var_6)))));
                        var_22 = ((/* implicit */signed char) (~(arr_5 [i_2] [i_1])));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */short) max((var_23), (arr_10 [i_0])));
    }
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) - (var_1)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_17))) : (max((var_1), (((/* implicit */long long int) (short)-32750))))))), (((((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) var_14))))) ? (max((((/* implicit */unsigned long long int) (signed char)82)), (4737400466876707008ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
    var_25 -= ((/* implicit */unsigned long long int) var_4);
}
