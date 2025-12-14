/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51927
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
    var_12 = var_3;
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((unsigned char) min((9223372036854775807LL), (((/* implicit */long long int) var_4))));
        arr_4 [i_0] &= ((/* implicit */long long int) (unsigned char)154);
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
        arr_8 [i_1] [i_1] = ((/* implicit */short) arr_6 [2] [i_1]);
        var_13 -= ((/* implicit */long long int) ((unsigned short) arr_5 [i_1] [i_1]));
        var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)5] [i_1])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)60010))), (arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        var_15 &= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_8)))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((int) ((short) 8210696631246330603LL)));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_17 -= ((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -8210696631246330603LL)))) : (((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_4] [i_5] [i_6])) ? (8210696631246330614LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17778))))));
                                var_18 |= ((/* implicit */unsigned long long int) var_1);
                                var_19 = ((/* implicit */_Bool) arr_9 [i_5]);
                                var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_6] [(unsigned char)6] [(unsigned char)6] [i_6 - 1] [i_6 - 1] [i_4] [i_2 + 1]));
                                var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)60017))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) var_11)))));
}
