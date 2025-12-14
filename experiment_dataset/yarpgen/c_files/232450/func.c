/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232450
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
    var_14 = ((((((/* implicit */int) max((var_13), (((/* implicit */short) var_3))))) >= (((/* implicit */int) var_0)))) ? (var_2) : (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (max((((/* implicit */int) var_8)), (var_9))) : (((int) var_10)))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_2))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)130))))))) || (((/* implicit */_Bool) (short)2047))));
    var_16 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1]);
            var_18 = ((/* implicit */_Bool) (-(min((min((3235297090U), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4095)) | (var_9))))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_12)), (9U))), (((/* implicit */unsigned int) ((short) 5995591552948448355LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 5995591552948448350LL)))) : (var_6)));
            var_20 = ((/* implicit */unsigned long long int) var_12);
        }
        for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            var_21 = ((/* implicit */short) ((int) ((((/* implicit */int) var_7)) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_3 - 1])) : (((/* implicit */int) var_1)))))));
            var_22 = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_0] [(short)20]));
        }
        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)155))))), (arr_4 [i_4] [i_4] [20U]))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            var_24 = (short)-14016;
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-13991)) == (((/* implicit */int) (short)-13979))));
        }
    }
}
