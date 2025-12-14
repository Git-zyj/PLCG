/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244628
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
    var_13 = ((/* implicit */unsigned char) (short)28469);
    var_14 = var_11;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (arr_0 [i_0])));
                    arr_9 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)55720)) >> (((((/* implicit */int) (unsigned short)21383)) - (21353)))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)48941)) ? (((/* implicit */int) (unsigned short)44153)) : (((/* implicit */int) (unsigned short)44152))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -1008405447)) : (var_3))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (short)-26511))))));
                }
                var_17 = ((/* implicit */int) (~((~(max((16127036454638488269ULL), (((/* implicit */unsigned long long int) (unsigned char)66))))))));
                var_18 ^= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) 62914560U)), (2319707619071063361ULL))), (((/* implicit */unsigned long long int) 8257536U))));
                var_19 = ((/* implicit */short) (-(arr_4 [i_0] [i_1] [i_1])));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)26511)), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)9386)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)44153)))) : (((/* implicit */int) ((unsigned char) var_10)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) >> (((((/* implicit */int) (signed char)127)) - (111)))));
}
