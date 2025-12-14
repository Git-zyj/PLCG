/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53507
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
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */int) var_7)) & (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) ((long long int) (unsigned short)36517))) ? (((/* implicit */int) (unsigned short)22638)) : ((+(((/* implicit */int) (signed char)-34))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        arr_14 [i_3 - 2] [i_1] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)26373))));
                        var_20 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) 591272299830727717LL)), (((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_1 [(signed char)13] [(signed char)13]))))) >= (((/* implicit */unsigned long long int) arr_8 [i_1] [(unsigned short)16]))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (1368384455U)))) + (((var_4) ^ (((/* implicit */long long int) arr_8 [i_3] [(short)6]))))))) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (max((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) (unsigned short)17298)) ? (arr_5 [i_1] [i_2]) : (((/* implicit */long long int) 752155514U))))))));
                    }
                    var_21 = ((/* implicit */short) ((((18446744073709551606ULL) <= (((/* implicit */unsigned long long int) arr_6 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24263))) : (2468176494U)));
                    arr_16 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (+(min((1405284293U), (((/* implicit */unsigned int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_22 = var_18;
    var_23 = ((/* implicit */unsigned long long int) var_14);
    var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (var_18)))) ? (((((/* implicit */int) var_16)) * (((/* implicit */int) (unsigned char)220)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_17)))))));
}
