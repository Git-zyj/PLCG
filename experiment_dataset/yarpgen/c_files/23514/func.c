/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23514
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_0)) - (28)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */signed char) 1ULL);
                    var_15 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_1)))), ((~(((/* implicit */int) ((((/* implicit */int) arr_2 [4] [i_1])) > (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) (_Bool)1);
                        var_17 = ((/* implicit */int) 1125831187365888LL);
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (_Bool)1))));
                        arr_10 [i_2] [i_3] [i_2] [i_2] [i_2] [17ULL] = ((/* implicit */short) ((_Bool) arr_0 [i_0]));
                        arr_11 [i_0] [i_3] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (signed char)-9)), (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned short)8))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-17)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((short) var_10));
                        arr_15 [i_0] [i_0] [i_2] [i_4] &= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) var_1)) ? (131070U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), (var_7))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_12 [i_2])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) + (25359)))))));
                    }
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-119))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) 2LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) (short)(-32767 - 1)))))))));
    }
}
