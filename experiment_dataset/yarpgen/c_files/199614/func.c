/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199614
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
    var_12 = ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_7))))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1)))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned char)0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((min((arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2]), (arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2]))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (arr_3 [i_1] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((max((var_1), (((/* implicit */long long int) var_0)))) - (((/* implicit */long long int) ((/* implicit */int) max((var_11), (var_11))))))) - (((var_1) - (((/* implicit */long long int) arr_12 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1 + 1]))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7))))) - (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_3))) - (((/* implicit */int) min((((/* implicit */short) var_7)), (var_4))))))))))));
                                arr_15 [i_0] [i_0] [(unsigned short)12] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [i_1 + 2] [i_1] [i_4])), (((arr_4 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0] [i_3] [i_3] [i_4])) : (((/* implicit */int) var_9))))))) - ((-(var_5)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((((((/* implicit */int) arr_1 [i_0])) << (((arr_8 [i_0] [i_0] [i_0] [i_0] [(_Bool)1]) + (8352349045756379289LL))))) << (((((((var_3) + (9223372036854775807LL))) << (((((var_3) + (1296303718450019605LL))) - (12LL))))) - (7927068318404756183LL))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) ((short) var_2)))))));
        var_16 += ((/* implicit */signed char) ((((_Bool) (!(((/* implicit */_Bool) var_10))))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), ((+(((/* implicit */int) arr_17 [i_5 + 1] [i_5]))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))) - (((((/* implicit */_Bool) arr_16 [i_5])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
    }
}
