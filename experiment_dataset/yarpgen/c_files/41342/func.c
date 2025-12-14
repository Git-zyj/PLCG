/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41342
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) min((var_15), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        arr_12 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_2 + 1] [i_3 + 2] [6] [i_3]));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (short)-3341))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_2 - 1] [i_3 - 1])))))));
                        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3 - 1]))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_17))));
                    }
                    arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) var_12));
                    arr_14 [i_2] = ((/* implicit */unsigned char) var_6);
                    var_22 = ((/* implicit */short) ((int) (short)30622));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((arr_7 [i_2 - 1]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_2 - 1])))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_17) / (((/* implicit */int) var_18))))))))));
    var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((var_17) / (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)100)) < (((/* implicit */int) (short)3341)))) ? (max((((/* implicit */int) var_18)), (var_17))) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_12)) ? (var_6) : (min((((/* implicit */long long int) (short)-3350)), (-2243726631865114080LL)))))));
}
