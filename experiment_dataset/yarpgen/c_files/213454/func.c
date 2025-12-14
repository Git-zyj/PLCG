/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213454
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
    var_15 = ((/* implicit */int) var_0);
    var_16 = ((/* implicit */short) ((signed char) max((((/* implicit */unsigned long long int) var_3)), (var_13))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [(unsigned short)18] &= ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned char)212)))), ((-(((/* implicit */int) var_9))))));
        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned char)43))))));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 17; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                {
                    var_18 -= ((/* implicit */signed char) var_7);
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_14 [15LL] [i_2 + 2] [i_1] [i_3 + 3] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min(((unsigned char)43), (((/* implicit */unsigned char) (!((_Bool)1))))))), (((((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_1))))) % (var_7)))));
                        arr_15 [i_1 - 1] [i_3] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) var_1)));
                        var_19 -= ((/* implicit */signed char) var_2);
                        var_20 = ((/* implicit */int) (unsigned short)6938);
                        var_21 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 1015260383)) || (((/* implicit */_Bool) -748146248)))));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-19)) != (((/* implicit */int) (unsigned char)124)))))) != (((unsigned int) var_9))));
        var_23 = var_11;
        var_24 = ((/* implicit */signed char) var_8);
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) 1015260383);
        var_26 += var_1;
    }
    /* vectorizable */
    for (signed char i_6 = 2; i_6 < 9; i_6 += 4) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (unsigned char)69)))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((int) (unsigned char)66)))));
        var_28 -= ((/* implicit */short) var_9);
    }
}
