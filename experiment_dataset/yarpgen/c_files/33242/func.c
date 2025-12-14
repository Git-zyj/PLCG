/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33242
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) (!(var_13)))) : (((/* implicit */int) min(((short)-14652), (((/* implicit */short) arr_0 [i_0] [i_0])))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) (short)-14652)) > (((/* implicit */int) (short)-14642))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-14641)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((arr_4 [i_1 - 1]) >= (arr_4 [i_1 - 1])));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1])))))));
    }
    var_19 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned long long int) var_10);
                            arr_17 [i_2] [i_2] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((arr_11 [i_2] [(short)10] [(short)10]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_2] [i_2] [i_2] [i_2] [i_2])))))), (((((/* implicit */unsigned long long int) var_6)) / (arr_10 [i_2] [i_2] [i_2]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            var_21 = ((/* implicit */long long int) arr_10 [i_4 + 2] [i_3] [i_4 + 1]);
                            arr_18 [i_2] [i_5] [i_5] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_6)), (var_3))), (((arr_11 [i_2] [i_3] [i_4 - 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                            var_22 = ((((/* implicit */int) (unsigned short)65530)) >= (((/* implicit */int) (unsigned short)63788)));
                        }
                    } 
                } 
                arr_19 [i_2] [i_2] [i_3] |= ((((/* implicit */int) (short)-15344)) >= (((/* implicit */int) (_Bool)1)));
                var_23 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_13);
    var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))), (((/* implicit */int) var_13))));
}
