/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232591
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)43)) << (((var_12) + (1928082217)))))) ? (((var_2) << (((3235474084769008114ULL) - (3235474084769008051ULL))))) : (((/* implicit */unsigned long long int) var_0))))) ? (15211269988940543509ULL) : (((/* implicit */unsigned long long int) (+(2507683494U))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_15 = ((/* implicit */short) arr_5 [(unsigned char)12]);
                    var_16 &= arr_6 [i_0] [i_0] [(unsigned short)6];
                }
                /* vectorizable */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_0] [i_1] [2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3 - 1])) << (((((((/* implicit */int) arr_13 [i_0] [i_3 - 1] [i_3 - 1] [i_3])) + (31857))) - (2)))));
                    arr_15 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0]);
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3 - 1] [i_1]))) : (arr_3 [i_3 - 1] [i_1])));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_0] [i_1] [i_4] = ((/* implicit */short) (((+(((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_1] [i_1] [i_4]))))) <= (var_12)));
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_16 [i_0]) ? (((/* implicit */int) arr_9 [i_4] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_1])))))));
                }
                for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_5 + 2])) + (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))))));
                    arr_21 [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_5 + 3]))));
                    var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_5 [i_5 + 1])) * (((/* implicit */int) arr_5 [i_5 + 1])))), (((((/* implicit */_Bool) ((15211269988940543502ULL) << (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) - (1468)))))) ? ((+(((/* implicit */int) arr_5 [i_5])))) : (((/* implicit */int) var_3))))));
                    var_21 = ((/* implicit */short) arr_3 [(_Bool)1] [i_0]);
                }
                var_22 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 16815904480058428377ULL))) ? (((arr_12 [i_0] [i_0] [i_0] [i_0]) ? (-681551885) : (((/* implicit */int) arr_17 [i_1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (short)22498)))));
                arr_22 [i_0] = ((/* implicit */unsigned int) arr_4 [i_1] [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (var_12)))), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((+(((unsigned long long int) var_4))))));
    var_24 = (+(((/* implicit */int) var_13)));
}
