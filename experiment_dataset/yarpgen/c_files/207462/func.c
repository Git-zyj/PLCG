/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207462
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
    var_12 = ((/* implicit */unsigned int) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_13 *= ((/* implicit */_Bool) var_9);
    var_14 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */int) (short)-31812);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) (+((+(((/* implicit */int) ((_Bool) var_1)))))));
                        var_17 = ((/* implicit */int) var_1);
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-31811)) : (((/* implicit */int) arr_0 [i_1])))) * (((/* implicit */int) max((arr_8 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]), (arr_8 [i_1] [i_1] [i_2] [i_3 - 2] [i_0]))))))) ? (((((((((/* implicit */int) arr_7 [i_0])) - (((/* implicit */int) var_9)))) + (2147483647))) << (((((/* implicit */int) var_3)) - (7665))))) : (((/* implicit */int) (short)31816))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_1]))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)6578)) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2] [i_4] [i_1 - 1])) : (((((/* implicit */int) (short)31816)) * (((/* implicit */int) (short)31811)))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 ^= ((/* implicit */long long int) arr_9 [8U] [i_1] [i_1 + 1] [i_0]);
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((long long int) ((unsigned char) var_4))), (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned short) arr_4 [i_1 - 1]))))))))));
                    }
                }
            } 
        } 
    } 
    var_23 = var_5;
}
